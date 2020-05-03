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
	echo "$#"
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
			-n|--noauto)
				auto_mode=""
				shift
			;;
			-p|--pointertype)
				ptr_type=t
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

clean_directory_name() {
	msg "Clearing $1 : ${!1}"
	declare -g $1=${!1%/}
	msg "Cleared $1 : ${!1}"
}

select_source_directory() {
	here=$(pwd)
	msg "Selecting source directory : "
	if [[ -z "$source_directory" ]]
	then
		msg "\tNo source directory provided." "\tI will assume you want the result here."
		source_directory="$here"
	else
		source_directory_provided=t
		if [[ ! -d "$source_directory" ]]
		then
			err_exit "\tsource directory : $source_directory is not a directory."
		fi
		source_directory_provided="t"
	fi
	clean_directory_name source_directory
	msg "\tSource directory is $source_directory"
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
	fi
	clean_directory_name target_directory
	msg "\tTarget directory is $target_directory"
}

select_files() {
	local files_provided
	local files_has_ptr_extension
	local selected_file
	local cleaned_name
	local files_selected
	local loc_target_filename

	files_provided=""
	if [[ "$nfiles" = 0 ]]
	then
		if [[ -z "$auto_mode" ]]
		then
			err_exit "No auto mode but no file provided : can not template :("
		fi
		if [[ -z "$source_directory_provided" ]]
		then
			err_exit "No file nor source directory provided : can not template :("
		fi
		do_msg "No file provided, grabbing all files in $source_directory/"
		files=($source_directory/*)
		files=($(basename -s '' "${files[@]}"))
	else
		files_provided=t
	fi
	
	files_selected=()
	((filedx_selected=0))
	for filedx in "${!files[@]}"
	do
		msg "Considering selecting ${files[$filedx]}"
		file_has_ptr_extension=""
		cleaned_name="${files[$filedx]%\.ptr}"
		if [[ "${files[$filedx]}" != "$cleaned_name" ]]
		then
			file_has_ptr_extension=t
		fi
		selected_file="$cleaned_name"
		if [[ ( ( ! -z "$auto_mode" ) && ( ! -z "$ptr_type" ) ) && ( ( ! -z "$files_provided" ) || ( -z "$file_has_ptr_extension" ) ) ]]
		then
			if [[ -f "$source_directory"/"$cleaned_name".ptr ]]
			then
				selected_file="$cleaned_name".ptr
			fi
		fi
		if [[ ( ! -z "$auto_mode" ) && ( -z "$files_provided" ) && ( ! -z "$file_has_ptr_extension" ) ]]
		then
			msg "Skipping ${files[$filedx]}"
			continue
		fi
		if [[ ( ! -z "$files_provided" ) && ( ! -f "$source_directory"/"$selected_file" ) ]]
		then
			do_msg "Must template $selected_file but file does not exist in $source_directory" "\tSkipped"
			continue
		fi
		files_selected[$filedx_selected]="$selected_file"
		target_filenames[$filedx_selected]="$(echo "$cleaned_name" | sed "s#type#"$type_tag"#g")"
		msg "Selected $selected_file as ${target_filenames[$filedx_selected]}"
		((filedx_selected++))
	done
	files=("${files_selected[@]}")
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
	mode=std
	if [ "$tmptype" != "$type" ]
	then
		ptr_type=t
		while [ "$tmptype" != "$type" ]
		do
			((nstars++))
			stars="*""$stars"
			type="$tmptype"
			tmptype=${type%\*}
		done
	fi
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

list_selected_files() {
	local filedx

	if [[ ! -z "$verbose_mode" ]]
	then
		do_msg "${#files[@]} files to template : "
		for filedx in "${!files[@]}"
		do
			do_msg "Will template ${files[$filedx]} as ${target_filenames[$filedx]}"
		done
	fi
}

verbose_mode=""
type=""
type_tag=""
auto_mode=t
ptr_type=
files=()
((nfiles = 0))
source_directory=""
source_directory_provided=""
target_directory=""
include=""
user=""
email=""
parse_options "$@"
stars=""
((nstars = 0))
parse_type
here=""
source_directory_provided=""
select_source_directory
select_target_directory
target_filenames=()
select_files
list_selected_files
parse_include
parse_42header_infos

sedcommand='s#type(([[:space:]]{1,})(\**))#'${type}'\1'${stars}'#g ; s#type([^d])#'${type_tag}'\1#g ; s#TYPE#'${type_tag^^}'#g'
for filedx in "${!files[@]}"
do
	source_file="$source_directory"/"${files[$filedx]}"
	target_file="$target_directory"/"${target_filenames[$filedx]}"
	if [[ "$source_file" -ef "$target_file" ]]
	then
		do_msg "Target file and source file are the same."
		do_msg "Abort templating for ${files[$filedx]}."
		continue
	fi
	if [[ ! "${files[$filedx]}" =~ \.(c|h)(.ptr)? ]]
	then
		42header "$source_file" "$user" "$email" > "$target_file"
	fi
	do_msg "Templating ${files[$filedx]}"
	if [ ! -z "$include" ]
	then
		sed -E "s/\!d42include/$include/ ; $sedcommand " "$source_file" >> "$target_file"
	else
		sed -E "/\!d42include/d ; $sedcommand " "$source_file" >> "$target_file"
	fi
done
