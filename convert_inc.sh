#!/bin/bash

for directory in data/maps/Route104 ; do # convertendo script apenas da rota 104 como teste
	pory_exists=$(find $directory -name $"scripts.pory" | wc -l)
	if [[ $pory_exists -eq 0 ]]; 
	then
		inc_exists=$(find $directory -name $"scripts.inc" | wc -l)
		if [[ $inc_exists -ne 0 ]]; 
		then
			echo "Converting: $directory/scripts.inc"
			touch "$directory/scripts.pory"
			echo 'raw `' >> "$directory/scripts.pory"
			cat "$directory/scripts.inc" >> "$directory/scripts.pory"
			echo '`' >> "$directory/scripts.pory"
		fi
	fi 	
done
