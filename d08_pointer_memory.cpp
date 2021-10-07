#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//vi du demo ve ham cap phat bo nho dong malloc()
int main(){
	int n;
	
	while(1){
		printf(" nhap vao so luong phan tu [3-10]: ");
		scanf("%d", &n);
		if(n>=3 && n<=10) break;
	}
	
	int *p;
	//xin he thong cap phat bo nho de luu tru n- so nguyen
	p = (int*)malloc(n * sizeof(int)); 
	if(p!=NULL){
		//1. nhap du lieu vo mang so nguyen thong qua bien p
		for(int i=0; i<n; i++){
			printf(" nhap phan tu thu %d : ", i+1);
			scanf("%d", p+i);
		}
		
		printf("\n\n");
		printf(" Day so vua nhap : \n");
		//2. xuat day so vua nhap ra man hinh
		for(int i=0; i<n; i++){
			printf(" %d, ", *(p+i) );
		}
		
		//3. sap xep lai day so theo thu tu tang dan 
		int temp;
		for(int i=0; i<n-1; i++){
			for(int j=i+1; j<n; j++){
				if( *(p+i) > *(p+j) ){
					temp = *(p+i);
					*(p+i) = *(p+j);
					*(p+j) = temp;
				}
			}
		}
		
		printf("\n\n");
		printf(" Day so vua nhap sau khi xep thu tu tang dan: \n");
		//4. xuat day so sau khi sap xep ra man hinh
		for(int i=0; i<n; i++){
			printf(" %d, ", *(p+i) );
		}		
		
		//5. tra lai bo nho duoc cap phat cho he thong
		free(p);
	}
	else{
		printf("ERROR : He thong ko co du bo nho de cap phat !\n");
	}
	
}


