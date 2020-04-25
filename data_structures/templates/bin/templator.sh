#!/bin/bash

type="int"
inclusion=""
sedcommand="s/type([^d])/${type}\1/g ; s/TYPE/${type^^}/g"

for arg in $@
do
	filename=$(echo "$arg" | sed "s/type/$type/g" -)
	if [ ! -z $inclusion ]
	then
		sed -E "s/\!d42inclusion/$inclusion/ ; $sedcommand " $arg > $filename
	else
		sed -E "/\!d42inclusion/d ; $sedcommand " $arg > $filename
	fi
done
rm -f $tmpfile
