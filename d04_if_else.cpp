#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//demo lap trinh re nhanh theo dieu kien : IF-ELSE
//kiem tra 1 so duoc nhap la so chan hay so le
int main(){
	int n;
	printf("vui long nhap 1 so nguyen bat ky:  ");
	scanf("%d", &n);
	
	if(n%2==0){
		printf(" >> %d la so chan \n", n);
	}
	else{
		printf(" >> %d la so le \n", n);
	}
	
}


