#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//demo thuat toan sap xep insert sort

void insertNum(int a[], int i, int j);

int main() {
	int a[10] = {23, 90, 9, 25, 16, 45, 79, 22, -11, 28};
	int n = 10;
	
	printf("* * * Insert Sort * * * \n");	
	printf(" Day so chua duoc xep thu tu: \n");
	for(int i=0; i<n; i++ ) {
		printf(" %4d", a[i]);
	}

	//thuat toan sap xep insert sort
	/* for-i so sanh tung phan tu cua tap chua dc sap xep*/
	for(int i=1; i<n; i++){
		/* for-j so sanh phan tu [i] voi cac gia tri dc sap xep [j]*/
		for(int j=0; j<i ; j++) {
			if(a[j]>a[i]) {
				/* neu gi tri cua phan tu [j] > [i]: goi ham insertnum() */
				insertNum(a, i, j);
				break;
			}
		}
	}
	
	
	printf("\n\n Day so da duoc xep thu tu: \n");
	for(int i=0; i<n; i++ ){
		printf(" %4d", a[i]);
	}

}

void insertNum(int a[], int i, int j){
	int temp = a[i];
	
	for(; i>j; i--){
		a[i] = a[i-1];
	}
	
	a[j] = temp;
}


