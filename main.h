// WRITTEN BY MORGAN L
#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// TO CHANGE COLOR OF LOGO CHANGE THE 95 IN COLOR TO A DIFFERENT ANSI COLOR CODE
// COMMON ONES ARE: RED = 91, GREEN = 92, YELLOW = 93, BLUE = 94, PURPLE = 95, CYAN = 96, WHITE 97
const char* COLOR = "\033[0;92m";
const char* RESET = "\033[m";


// PRINTS THE COLORED LOGO 
void printLogo() { 
	printf("%s\n=============\n%s",COLOR, RESET);
	printf("%s[ csysfetch ]\n%s", COLOR, RESET);
	printf("%s=============\n\n%s", COLOR, RESET);
}


// DISPLAYS THE SYSTEM INFO
int displayInfo() {
	FILE *fptr = fopen("data.txt", "r");
	if (fptr == NULL) {
		return 1;
	}
	char buff[100];
	while (fgets(buff, sizeof(buff), fptr) != NULL) {
		printf("  %s", buff, "%s");
	}

	fclose(fptr);
	printf("\n");

	return 0;

}
#endif
