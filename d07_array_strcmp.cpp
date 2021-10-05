#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// vi du demo ve ham xu ly chuoi.
// ham strcmp(s1,s2) : so sanh (theo ma ascii) 2 chuoi s1 va s2
//                     =  0 neu chuoi s1 = s2
//							  =  1 neu chuoi s1 > s2
//							  = -1 neu chuoi s1 < s2

int main(){
	//khai bao 2 chuoi ky tu name1
	char name1[20] = "Thai";
	char name2[20] = "Thanh";
	
	printf("name1 = %s \n", name1);
	printf("name2 = %s \n", name2);
	
	int r1 = strcmp(name1, name2);
	int r2 = strcmp(name2, name1);
	int r3 = strcmp(name1, name1);
	
	printf("strcmp(name1, name2) = %d \n", r1);
	printf("strcmp(name2, name1) = %d \n", r2);
	printf("strcmp(name1, name1) = %d \n", r3);
}


