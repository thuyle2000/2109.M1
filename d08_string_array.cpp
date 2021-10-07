#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// vi du demo ve mang chuoi ky tu
// nhap bang ds chua ten cua 5 sinh vien va in ds nay ra man hinh 
int main(){
	
	//khai bao mang chuoi ky tu [names] chua ten 5 ban sinh vien, 
	// va ten sv co do dai toi da la 9
	char names[5][10];
	
	//vong lap nhap ten cua 5 ban sinh vien
	for(int i=0; i<5; i++){
		printf(" >> nhap ten cua sv thu %d : ", i+1);
		gets(names[i]);
	}
	
	printf("\n\n");
	
	printf("* * * Danh sach ten sinh vien * * * \n");
	for(int i=0; i<5; i++){
		printf("%s \n", names[i]);
	}
	
	
	
}


