#!/bin/bash

DOME="mechani.se"

./script1.bash $DOME /unix/public/cw4a.html > output.temp
TEXT=$(cat output.temp)

for fn in $TEXT; do
	./script1.bash $DOME $fn >> pros.txt
	echo $fn
done

