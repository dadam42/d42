#!/bin/bash
print_msg() {
	echo 
	for msg in "$@"
	do
		echo "$msg"
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

target_directory=""
source_directory=""
type=""
type_tag=""
include=""
user=""
email=""
verbose_mode=""
files=()
((nfiles = 0))
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

here=$(pwd)
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

if [[ $nfiles = 0 ]]
then
	if [[ -z "$source_directory_provided" ]]
	then
	err_exit "No file nor directory provided, cannot template :("
	else
	do_msg "Grabbing all files from $source_directory"
	files=($source_directory/*)
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

if [[ -z "$type" ]]
then
	err_exit "No type provided, can not template :("
fi

if [[ -z "$type_tag" ]]
then
	msg "No type's tag provided." "I will use $type"
	type_tag="$type"
fi

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

sedcommand="s/type([^d_])/${type}\1/g ; s/type([^d])/${type_tag}\1/g ; s/TYPE/${type_tag^^}/g"

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
