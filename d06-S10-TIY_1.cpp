#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	int age;
	char name[30] ;
	
	printf("Nhap ten cua ban: ");
	gets(name);
	
	printf("Nhap so tuoi: ");
	scanf("%d", &age);
	
	
	for(int i=1; i<=age; i++){
		printf("%2d. %s \n", i, name);
	}
}

