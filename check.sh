# WRITTEN BY MORGAN L
# THIS SCRIPT CHECKS IF THE FILE DATA.TXT EXISTS

FILE=./data.txt 
	if [ -f "$FILE" ]; then
		 echo "0"
 	else
		 echo "1" 
fi
