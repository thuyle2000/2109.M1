#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// vi du demo ve mang chuoi ky tu - version 2
// nhap bang ds chua ten cua n-sinh vien va in ds nay ra man hinh 

int main(){
	int n;
	while(1){
		printf(" vui long nhap so sv muon quan ly [3-10] : ");
		scanf("%d", &n);
		if(n>=3 && n<=10) 
		{
			break;
		}
		printf(" >> du lieu ko hop le, vui long nhap lai ! \n\n");
	}
	printf("\n\n");
	
	fflush(stdin);
	
	//khai bao mang chuoi ky tu [names] chua ten n ban sinh vien, 
	// va ten sv co do dai toi da la 9
	char names[n][10];
	
	//vong lap nhap ten cua n sinh vien
	for(int i=0; i<n; i++){
		printf(" >> nhap ten cua sv thu %d : ", i+1);
		gets(names[i]);
	}
	
	printf("\n\n");
	
	printf("* * * Danh sach ten sinh vien * * * \n");
	for(int i=0; i<n; i++){
		printf("%2d. %s \n", i+1, names[i]);
	}
	
	
	
}


