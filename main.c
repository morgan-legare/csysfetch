g/ WRITTEN BY MORGAN L
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

int main() {
// SYSTEM CALLS FOR INFO 
	char command[5000];
	strcpy(command, "exists=$(./check.sh) ; if (( exists == 0 )); then ( rm data.txt ; touch data.txt) ; else touch data.txt; fi ; arc=$(uname -a | awk '{print $13, $14}') ; . /etc/os-release ; echo OS: $NAME $arc >> data.txt; kern=$(uname -a | awk '{print $3}') ; echo Kernel: $kern >> data.txt ; core=$(lscpu | grep -i -m 1 'cpu(s):' | awk '{print $2}') ; cpu=$(lscpu | awk '/Model name:/ {print $3, $5, $6, $7, $8}') ; echo CPU: $cpu [cores: $core] >> data.txt ; gpu1=$(lspci | grep -i \"VGA compatible controller: NVIDIA\" | awk '{print $5, $8, $9, $10, $11, $12, $13}') ; gpu2=$(lspci | grep -i \"VGA compatible controller: Intel\" | awk '{print $5, $9, $10, $11, $12, $13}') ; echo GPU: $gpu1 >> data.txt; echo GPU: $gpu2 >> data.txt ; used=$(free -m | awk '/Mem:/ {print $3}') ; total=$(free -m | awk '/Mem:/ {print $2}') ; echo Memory: ${used}MiB / ${total}MiB >> data.txt");	
	system(command);

// FUNCTIONS	
	printLogo();
	displayInfo();			

	return 0;
}
