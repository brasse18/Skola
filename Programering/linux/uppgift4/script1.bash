#!/bin/bash

DOM=$1
SITE=$2
SITEDIR=$(echo "$SITE" | sed 's:[a-z][^/]*[.]html::g')

ANSER=$(curl -s $DOM$SITE | sed '/<head/,/head>/d' | grep -o 'src=.*"\|href="[^"]*"' | grep -o '".*"' | tr -d '"')
ANSER=$(echo "$ANSER" | sed -e '/@/d' -e '/http:/d' -e 's:^[^/]:'$SITEDIR'&:')

ANSER=$(echo "$ANSER" | sed 's/\([a-z][^/]*[/][.][.][/]\)//')

ANSER=$(echo "$ANSER" | tr ' ' '\n')
ANSER=$(echo "$ANSER" | sed -e 's!^!'$DOM' '$SITE' '$DOM' !')

echo "$ANSER" | sort -u

