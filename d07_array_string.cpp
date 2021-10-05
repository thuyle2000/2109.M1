#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//vi du demo va chuoi ky tu

int main(){
	//khai bao chuoi ky tu chua ten sinh vien (nho khai bao du 1 byte - \0)
	char name[10];
	
	printf(">> nhap ten cua 1 ban sinh vien : ");
	gets(name);
	
	printf(">> ten sinh vien : %s \n\n", name);
	
	for(int i=0; i<10; i++){
		printf("%d. name[%d] = %c | %d \n", i, i, name[i], name[i]);
	}
}


