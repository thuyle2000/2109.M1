#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// vi du demo ve ham xu ly chuoi.
// ham strlen(s1) : dem so ky tu trong chuoi s1 

int main(){
	//khai bao 2 chuoi ky tu name1
	char name1[20] = "Dang Quoc Thai";
	char name2[20] = "";
	
	printf("name1 = %s \n", name1);
	printf("name2 = %s \n", name2);
	
	int n1 = strlen(name1);
	int n2 = strlen(name2);
	
	printf("So ky tu cua [%s] = %d \n", name1, n1);
	printf("So ky tu cua [%s] = %d \n", name2, n2);
}


