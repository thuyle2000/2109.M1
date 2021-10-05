#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	char input;
	printf("input: ");
	scanf("%c", &input);
	switch(input) {
		case'A' :
		case'a':
			printf("Ada");
			break;
		case'B':
		case'b':
			printf("Basic");
			break;
		case'C':
		case 'c':
			printf("Cobol");
			break;
		case'D':
		case'd':
			printf("dBASE |||");
			break;
		case'f':
		case'F':
			printf("Fortran");
			break;
		case 'p':
		case'P':
			printf("Pascal");
			break;
		case 'v':
		case'V':
			printf("Visua C++");
			break;
		default:
			printf("Wrong input");
	}
	return(0);
}
