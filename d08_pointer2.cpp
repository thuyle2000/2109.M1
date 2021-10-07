#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int a[5] = {5, 20, 100, 8, 9};
	int *p;

	//gan dia chi cua mang a cho con tro p
	p = a; // p = &a[0]
	
	//in ra cac phan tu cua mang a, thong qua con tro p
	for(int i=0; i<5; i++){
		printf(" a[%d] = %d \n", i, *(p+i) ); 
	}
	
	
}


