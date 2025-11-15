// Written by Morgan L
#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>



void printWelcome() { 
	printf("\n-------------\n");
	printf("[ csysfetch ]\n");
	printf("-------------\n\n");
}

int displayInfo() {
	FILE *fptr = fopen("data.txt", "r");
	if (fptr == NULL) {
		return 1;
	}
	char buff[100];
	while (fgets(buff, sizeof(buff), fptr) != NULL) {
		printf("%s", buff);
	}

	fclose(fptr);
	printf("\n");

	return 0;

}









#endif
