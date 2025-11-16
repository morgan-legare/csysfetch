// WRITTEN BY MORGAN L
#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
const char* RESET = "\033[m";

// COLOR OPTIONS FOR LOGO/SYSTEM INFO
#define RED "\033[0;91m";
#define GREEN "\033[0;92m";
#define YELLOW "\033[0;93m";
#define BLUE "\033[0;94m";
#define PURPLE "\033[0;95m";
#define CYAN "\033[0;96m";
#define DEFAULT_COLOR "\033[0;97m";

// TO CHANGE COLOR OF LOGO/SYSTEM INFO, CHANGE DEFAULT_COLOR TO ONE OF THE ABOVE COLORS 
const char* LOGO_COLOR = DEFAULT_COLOR;
const char* INFO_COLOR = DEFAULT_COLOR; 

// PRINTS THE COLORED LOGO 
void printLogo() { 
	printf("%s\n=============\n%s", LOGO_COLOR, RESET);
	printf("%s[ csysfetch ]\n%s", LOGO_COLOR, RESET);
	printf("%s=============\n\n%s", LOGO_COLOR, RESET);
}

// DISPLAYS THE SYSTEM INFO
int displayInfo() {
	FILE *fptr = fopen("data.txt", "r");
	if (fptr == NULL) {
		return 1;
	}
	char buff[100];
	while (fgets(buff, sizeof(buff), fptr) != NULL) {
		printf("%s  %s%s", INFO_COLOR, buff, RESET);
		
	}

	fclose(fptr);
	printf("\n");

	return 0;

}
#endif
