#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	char command[250];
	strcpy(command, "clear");
	system(command);

	strcpy(command, "echo -------------");
	system(command);

	strcpy(command, "echo [ csysfetch ]");
	system(command);

	strcpy(command, "echo -------------");
	system(command);

	strcpy(command, "echo");
	system(command);

	strcpy(command, "arc=$(uname -a | awk '{print $13, $14}') ; . /etc/os-release ; echo OS: $NAME $arc");
	system(command);

	strcpy(command, "kern=$(uname -a | awk '{print $3}') ; echo Kernel: $kern");
	system(command);


	strcpy(command, "core=$(lscpu | grep -i -m 1 'cpu(s):' | awk '{print $2}') ; cpu=$(lscpu | grep -i \"Model name:\" | awk '{print $3, $5, $6, $7, $8}') ; echo CPU: $cpu [cores: $core]");
	system(command);


	strcpy(command, "gpu1=$(lspci | grep -i \"VGA compatible controller: NVIDIA\" | awk '{print $5, $8, $9, $10, $11, $12, $13}') ; gpu2=$(lspci | grep -i \"VGA compatible controller: Intel\" | awk '{print $5, $9, $10, $11, $12, $13}') ; echo GPU: $gpu1 ; echo GPU: $gpu2");
	system(command);
	
	strcpy(command, "used=$(free -m | awk '/Mem:/ {print $3}') ; total=$(free -m | awk '/Mem:/ {print $2}') ; echo Memory: ${used}MiB / ${total}MiB");
	system(command);
	strcpy(command, "echo");
	system(command);

	return 0;
}
