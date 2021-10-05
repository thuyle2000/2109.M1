#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// vi du demo ve ham xu ly chuoi.
// ham strcpy(s1, s2) : s1 = s2 

int main(){
	//khai bao 2 chuoi ky tu name1, name2
	char name1[15] = "Quoc Thai";
	char name2[15];
	
	printf("name1 = %s \n", name1);
	printf("name2 = %s \n", name2);
	
	strcpy(name2, name1);
	printf("\n >> After strcpy(name2, name1): \n");
	printf("name1 = %s \n", name1);
	printf("name2 = %s \n", name2);
		
}


