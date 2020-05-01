#!/bin/bash
print_msg() {
	echo 
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
	read 
}

do_msg() {
	print_msg "$@"
}

print_usage() {
	print_msg "templator [OPTIONS...] [filenames...]"
	print_msg "Options :" "\t-td --target directory DIR : put templating resulting files in DIR." "\t\tworking directory if not provided."
	print_msg "\t-sd --source_directory DIR : use DIR to look for template files." "\t\tworking directory if not provided."
	print_msg "\t-t --type TYPE [!] : template using TYPE type." "\t\tIf TYPE is ended with * it will be considered as a ptrtype unless -f/--force_no_ptr is provided"
	print_msg "\t-tt --type_tag TAG : will use TAG to template : TAG will be used any time the type keyword is not standing alone in template file"
	print_msg "\t\t(e.g. type_) and in the filename of the resulting file."
	print_msg "\t\tIf not provided : the effective type_tag used will be TYPE[_s*] where there will be as many s as the number of inderections in the provided type."
	print_msg "\t-i --include LINE : includes LINE anywhere the !d42include tag is found in template file."
	print_msg "\t-f --force_no_ptr : toggles the no_ptr mode even if the provided type seems to be a pointer."
	print_msg "\t-p --ptr : toggles the ptr mode even if the provided type seems not to bea pointer."
	print_msg "\t-u --user USER : provides a username for 42header" "\t\t If not provided the environment variable USER is used."
	print_msg "\t-e --email EMAIL : provides an email for 42header" "\t\t If not provided the environment variable MAIL is used."
	print_msg "\t-v --verbose : toggles verbose mode."
	print_msg "\t-h --help : displays this help."
	print_msg "When filenames are provided, this files will be templated, regardless of the presence of pointer mark (aka *) in type".
	print_msg "When filenames are not provided then, templator will grab all the files of the source directory (if you provided one) following one of this mode :"
	print_msg "no_ptr mode : will grab any file the templated file will then be named by replacing any type in filename by type_tag"
	print_msg "ptr mode : for C files (*.h) (*.c), for any filename containing type will consider the file whose filename is the original filename where type is substituted by ptrtype"
	print_msg "If this file exist will use it, else will use the original file".
}

usage_exit() {
	print_usage
	exit 0
}

err_usage_exit() {
	print_msg "$@"
	print_usage
	exit 1
}

clean_dirname() {
	local locname
	printf -v "locname" '%s' "${!1%/}"
	if [[ "$locname" = ${!1} ]]
	then
		printf -v "$1" '%s' "${!1}/"
	fi
}

parse_type() {
	local typename
	typename=$1
	type=${1%\*}
	if [[ ! "$typename" = "$type" ]]
	then
		type_is_ptr=t
		while [[ ! -z "$type_is_ptr" ]]
		do
			((nstar++))
			stars="*""$stars"
			typename=$type
			type=${type%\*}
			if [[ "$type" = "$typename" ]]
			then
				break
			fi
		done
	fi
}


add_target_filename() {
	target_filenames[cur]="$target_directory"$(echo "$1" | sed "s/type/$type_tag/g")
	msg "$1 will be templated as $(basename ${target[cur]}) in $target_directory"
}

add_selected_file() {
	msg "$1.ptr will be use instead of $1"
	selected_files[cur]="$source_directory""$1".ptr
	add_target_filename "$1"		
	((cur++))
}

add_selected_ptrfile() {
	msg "$1 will be used"
	selected_files[cur]="$source_directory""$1".ptr
	add_target_filename "$1"		
	((cur++))
}

select_files() {
	local selected_files=()
	local template_filename=""

	msg "Selecting files"
	((cur = 0))
	if [[ -z "$type_is_ptr" ]]
	# ptr_mode
		msg "In ptr_mode :"
		for file in "${files[@]}"
		do
			if [[ "$file" = *.ptr ]]
			then
				if [[ $nfiles -eq 0 ]]
				then
					continue
				else
					add_selected_ptrfile ${file%\.ptr}
				fi
			fi
			if [[ -f "$source_directory""$file".ptr ]]
			then
				add_selected_ptrfile "$file"
			else
				if [[ -f "$source_directory""$file" ]]
				then
					add_selected_file "$file"
				else
					do_msg "$file nor $file.ptr exist in $source_directory : can not template $file"
				fi
			fi
		done	
	then
	# no_ptr_mode
	msg "In ptr_mode"
		for file in "${files[@]}"
		do
			if [[ "$file" = *.ptr ]]
			then
				if [[ $nfiles -eq 0 ]]
				then
					continue
				else
					add_selected_ptrfile ${file%\.ptr}
				fi
			fi
			if [[ ! $nfiles -eq 0 ]]
			then
				if [[ ! -f "$source_directory""$file" ]]
				then
					do_msg "$file does not exist in "$source_directory" : can not template $file"
					continue
				fi					
			fi
			add_selected_file "$file"
		done	
	fi
	files=$selected_files
}

target_directory=""
source_directory=""
type=""
type_tag=""
type_tag_provided=""
include=""
user=""
email=""
verbose_mode=""
files=()
target_filenames=()
type_is_ptr=""
force_no_ptr=""
force_ptr=""
((nfiles = 0))
((nstar = 0))
stars=""
while [[ $# -gt 0 ]]
do
	key="$1"
	case "$key" in
		-td|--target_directory)
			target_directory="$2"
			clean_dirname target_directory
			echo $target_directory
			shift
			shift
		;;
		-sd|--source_directory)
			source_directory="$2"
			clean_dirname source_directory
			shift
			shift
		;;
		-t|--type)
			type=${2}
			parse_type "$type"
			shift
			shift
		;;
		-tt|--type_tag)
			type_tag="$2"
			type_tag_provided=t
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
		-f|--force_no_ptr)
			force_no_ptr=t
			shift
		;;
		-p|--ptr)
			force_ptr=t
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
		-h|--help)
			usage_exit ""
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

if [[ ! -z "$force_no_ptr" ]]
then
	if [[ ! -z "$force_ptr" ]]
	then
		err_exit "-p(--ptr) and -f(--forec_no_ptr) are incompatible options"
	fi
	type_is_ptr=""
fi

if [[ ! -z "$force_ptr" ]]
then
	type_is_ptr=t
fi

here=$(pwd)/
source_directory_provided=""
if [[ -z "$source_directory" ]]
then
	msg "No source directory provided." "I will assume you want the result here."
	source_directory="$here"
else
	if [[ ! -d "$source_directory" ]]
	then
	err_exit "source directory : $source_directory is not a directory."
	fi
	source_directory_provided="t"
fi

if [[ -z "$type" ]]
then
	err_exit "No type provided, can not template :("
fi

if [[ ! -z "$type_is_ptr" ]]
then
	echo "ptr type"
fi

if [[ -z "$type_tag" ]]
then
	type_tag="$type"
	if [[ ! $nstars -eq 0 ]]
	then
		type_tag="$type_tag"_s
		((nstars--))
		while [[ ! $nstars -eq 0 ]]
		do
			type_tag="$type_tag"s
			((nstars--))
		done
	fi
	msg "No type's tag provided." "I will use $type_tag"
fi

if [[ $nfiles = 0 ]]
then
	if [[ -z "$source_directory_provided" ]]
	then
		err_exit "No file nor directory provided, cannot template :("
	else
		do_msg "Grabbing all files from $source_directory"
		files=($source_directory*)
		files=($(basename -s '' "${files[@]}"))
	fi
fi


if [[ -z "$target_directory" ]]
then
	msg "No target directory provided." "I will assume you want the result here."
	target_directory="$here"
else
	if [[ ! -d "$target_directory" ]]
	then
		err_exit "target_directory : $target_directory is not a directory."
	fi
fi

select_files

if [[ -z "$include" ]]
then
	msg "No include provided"
fi

if [[ -z "$user" ]]
then
	msg "No user name provided." "42header will use the USER environment variable if available"
fi

if [[ -z "$email" ]]
then
	msg "No email provided." "42header will use the MAIL environment variable if available"
fi

TYPE_TAG=${type_tag^^}
sedcommand="s/type\(\([[:space:]]\{1,\}\)\(\**\)\)/${type}\1${stars}/g ; s/type([^d[:space:]])/${type_tag}\1/g ; s/TYPE/${TYPE_TAG}/g"

for cur in "${!files[@]}"
do
	ctest=${files[cur]%.c}
	htest=${files[cur]%.h}
	if [[ ( ! "${files[cur]}" = "$ctest" ) || ( ! "${files[cur]}" == "$htest" ) ]]
	then
		42header "${files[cur]}" "$user" "$email" > "${target_filenames[cur]}"
	fi
	do_msg "Templating $file"
	if [[ "${files[cur]}" = "${target_filenames[cur]}" ]]
	then
		do_msg "Target file and source file are the same."
		do_msg "Abort templating for $file"
		continue
	fi
	if [ ! -z "$include" ]
	then
		sed -E "s/\!d42include/$include/ ; $sedcommand " "${files[cur]}" >> "${target_filename[cur]}"
	else
		sed -E "/\!d42include/d ; $sedcommand " $arg >> "${target_filename[cur]}"
	fi
done
