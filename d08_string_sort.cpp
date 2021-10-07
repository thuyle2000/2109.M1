#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// vi du demo ve mang chuoi ky tu - version 3
// nhap bang ds chua ten cua n-sinh vien, sap xep lai bang ten theo thu thu alphabeta
// va in ds nay ra man hinh 

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
	
	//1. vong lap nhap ten cua n sinh vien
	for(int i=0; i<n; i++){
		printf(" >> nhap ten cua sv thu %d : ", i+1);
		gets(names[i]);
	}
	
	
	// 2. in danh sach ten sv sau khi nhap lieu
	printf("\n\n");
	printf("* * * Danh sach ten sinh vien * * * \n");
	for(int i=0; i<n; i++){
		printf("%2d. %s \n", i+1, names[i]);
	}
	
	//3. sap xep lai bang ten theo thu tu alphabeta
	char temp[10];
	for(int i=0; i<n-1; i++){
		for(int k=i+1; k<n; k++){
			if(strcmp(names[i], names[k])>0){
				strcpy(temp, names[i]);		 //luu ten cua sv dong i vo bien temp
				strcpy(names[i], names[k]); //luu ten cua sv dong k vo dong i
				strcpy(names[k], temp);		 //luu ten cua sv dong i(temp) vo dong k
			}
		}
	}
	
	// 4. in danh sach ten sv sau khi sap xep thu tu tu a-z
	printf("\n\n");
	printf("* * * Danh sach ten sinh vien theo thu tu alphabeta * * * \n");
	for(int i=0; i<n; i++){
		printf("%2d. %s \n", i+1, names[i]);
	}	
	
}


