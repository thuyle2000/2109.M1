#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	float salary;
	char grade;
	printf("salary of employee:");
	scanf("%f",&salary);
	
	fflush(stdin); //xoa bo dem keyboard buffer 
	
	printf("grade of employee:");
	scanf("%c", &grade);

	if(grade=='A') {
		printf("salary of employee= %f",salary+300);
	} else if(grade=='B') {
		printf("salary of employee= %f",salary+200);
	} else {
		printf("salary of employee =%f",salary+150);
	}
}

