#!/bin/bash

DOME="mechani.se"

./script1.bash $DOME /unix/public/cw4a.html > out.temp
TEXT=$(cat out.temp)
echo "$TEXT" > done.txt
TEMPTEXT=""

for fn in $TEXT; do
	temp=$(echo "$fn" | awk '{print $4}')
	temp=$() 
	$TEMPTEXT=$(bash script1.bash $DOME $fn)
	echo $fn
done

