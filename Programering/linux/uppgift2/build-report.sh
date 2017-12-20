#!/bin/bash

NAME="report.txt"

echo > "${NAME}"
while read anser; do
    	CMD="$(echo ${anser} | awk '{$1= ""; print $0}')"
    	NR="$(echo ${anser} | awk '{print $1}')"
    	TEMP="$(eval ${CMD})"
    	echo "$TEMP" | awk -v GG="${NR}" '$0=GG"a "$0' >> "${NAME}"
    	echo "${NR}b$CMD"  >> "${NAME}"
    	echo -e "${NR}c \n" >> "${NAME}"
done <ansers.ans

