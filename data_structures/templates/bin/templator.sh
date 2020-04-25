#!/bin/bash

# The name your type is called in functions' name
# Essentially usefull if your type is a pointer
type_tag="int"
# The name of your type in C
type_name="int"
inclusion=""
sedcommand="s/type([^d_])/${type_name}\1/g ; s/type([^d])/${type_tag}\1/g ; s/TYPE/${type_tag^^}/g"

for arg in $@
do
	filename=$(echo "$arg" | sed "s/type/$type_tag/g" -)
	if [ ! -z $inclusion ]
	then
		sed -E "s/\!d42inclusion/$inclusion/ ; $sedcommand " $arg > $filename
	else
		sed -E "/\!d42inclusion/d ; $sedcommand " $arg > $filename
	fi
done
rm -f $tmpfile
