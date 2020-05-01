#!/bin/bash
print_msg() {
	for msg in "$@"
	do
		echo -e "$msg"
	done
}

msg_exit() {
	print_msg "$@"
	exit 0
}

err_exit() {
	print_msg "$@" "Templating aborted."
	exit 1
}

msg(){
	if [[ ! -z "$verbose_mode" ]]
	then
		print_msg "$@"
	fi
}

do_msg() {
	print_msg "$@"
}

parse_options() {
	while [[ $# -gt 0 ]]
	do
		key="$1"
		case "$key" in
			-td|--target_directory)
				target_directory="$2"
				shift
				shift
			;;
			-sd|--source_directory)
				source_directory="$2"
				shift
				shift
			;;
			-t|--type)
				type="$2"
				shift
				shift
			;;
			-tt|--type_tag)
				type_tag="$2"
				shift
				shift
			;;
			-i|--include)
				include="$2"
				shift
				shift
			;;
			-u|--user)
				user="$2"
				shift
				shift
			;;
			-e|--email)
				email="$2"
				shift
				shift
			;;
			-v|--verbose)
				verbose_mode="t"
				shift
			;;
			*)
			while [[ ! -z "$1" ]]
			do
				files[$nfiles]="$1"
				((nfiles++))
				shift
			done
		esac
done
}

select_source_directory() {
	source_directory_provided=""
	msg "Selecting source directory : "
	if [[ -z "$source_directory" ]]
	then
		msg "\tNo source directory provided." "\tI will assume you want the result here."
		source_directory="$here"
	else
		if [[ ! -d "$source_directory" ]]
		then
			err_exit "\tsource directory : $source_directory is not a directory."
		fi
	source_directory_provided="t"
		msg "\tSource directory is $source_directory"
	fi
}

select_target_directory() {
	msg "Selecting target directory : "
	if [[ -z "$target_directory" ]]
	then
		msg "\tNo target directory provided." "\tI will assume you want the result here."
		target_directory="$here"
	else
		if [[ ! -d "$target_directory" ]]
		then
			err_exit "\ttarget_directory : $target_directory is not a directory."
		fi
		msg "\tTarget directory is $target_directory"
	fi
}

select_files() {
	msg "Selecting files to template :"
	if [[ $nfiles = 0 ]]
	then
		if [[ -z "$source_directory_provided" ]]
		then
			err_exit "\tNo file nor directory provided, cannot template :("
		else
			do_msg "\tGrabbing all files from $source_directory"
			files=($source_directory/*)
			files=($(basename -s '' "${files[@]}"))
		fi
	fi
}

parse_type() {
	local tmptype
	local cur

	msg "Parsing type : "
	if [[ -z "$type" ]]
	then
		err_exit "\tNo type provided, can not template :("
	fi
	tmptype=${type%\*}
	msg "type : $type"
	msg "tmptype : $tmptype"
	while [ "$tmptype" != "$type" ]
	do
		((nstars++))
		stars="*""$stars"
		type="$tmptype"
		tmptype=${type%\*}
	done
	
	msg "\t type is $type"
	msg "\t stars is $stars"
	msg "Parsing type_tag : "
	if [[ -z "$type_tag" ]]
	then
		type_tag="$type"
		((cur = 0))
		if [[ $cur -lt $nstars ]]
		then
			((cur++))
			type_tag="$type_tag"_s
			while [[ $cur -lt $nstars ]]
			do
				((cur++))
				type_tag="$type_tag"s
			done
		fi
		msg "\tNo type's tag provided." "\tI will use $type_tag"
	else
		msg "\t type_tag is $type_tag"
	fi
}

parse_include() {
	msg  "Parsing include"
	if [[ -z "$include" ]]
	then
		msg "\tNo include provided"
	else
		msg "\tInclude is $include"
	fi
}

parse_42header_infos() {
	msg "Parsing 42header infos : "
	if [[ -z "$user" ]]
	then
		msg "\tNo user name provided." "\t42header will use the USER environment variable if available"
	fi

	if [[ -z "$email" ]]
	then
		msg "\tNo email provided." "\t42header will use the MAIL environment variable if available"
	fi
}

target_directory=""
source_directory=""
type=""
type_tag=""
stars=""
((nstars = 0))
include=""
user=""
email=""
verbose_mode=""
files=()
((nfiles = 0))

parse_options $@
here=$(pwd)
select_source_directory
select_target_directory
select_files
parse_type
parse_include
parse_42header_infos

sedcommand='s#type(([[:space:]]{1,})(\**))#'${type}'\1'${stars}'#g ; s#type([^d])#'${type_tag}'\1#g ; s#TYPE#'${type_tag^^}'#g'
do_msg "sed command :" "$sedcommand"
for file in "${files[@]}"
do
	filename="$(echo "$file" | sed "s/type/$type_tag/g" -)"
	target_filename="$target_directory"/"$filename"
	ctest=${filename%.c}
	if [[ ! "$filename" = "$ctest" ]]
	then
		42header "$filename" "$user" "$email" > "$target_filename"
	else
		ctest=${filename%.h}
		if [[ ! "$filename" = "$ctest" ]]
		then
			42header "$filename" "$user" "$email" > "$target_filename"
		else
			rm -f "$target_filename"
		fi
	fi
	arg="$source_directory"/"$file"
	do_msg "Templating $file"
	if [[ "$arg" = "$target_filename" ]]
	then
		do_msg "Target file and source file are the same."
		do_msg "Abort templating for $file"
		continue
	fi
	if [ ! -z "$include" ]
	then
		sed -E "s/\!d42include/$include/ ; $sedcommand " $arg >> "$target_filename"
	else
		sed -E "/\!d42include/d ; $sedcommand " $arg >> "$target_filename"
	fi
done
