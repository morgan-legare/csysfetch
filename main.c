#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	char command[250];
	strcpy(command, "echo $USER");
	system(command);

	strcpy(command, "lscpu | grep -i \"Model name:\" | awk '{print $3, $5, $6, $7, $8}'");
	system(command);

	strcpy(command, "lspci | grep -i \"VGA compatible controller: NVIDIA\" | awk '{print $5, $8, $9, $10, $11, $12, $13}'");
	system(command);
	return 0;
}
