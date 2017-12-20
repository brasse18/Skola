#!/bin/bash

DOM=$1
SITE=$2

ANSER=$(curl -s $DOM$SITE | sed '/<head/,/head>/d' | grep -o 'src=.*"\|href=".*"' | grep -o '".*"' | tr -d '"')
echo $ANSER | tr ' ' '\n' | sed -e 's/^/\//;' -e 's/\/\//\//'
#echo $ANSER | sed -e "s/mechani.se//"
