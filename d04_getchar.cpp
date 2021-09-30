#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//demo ham getchar()
int main(){
	printf(">> DEMO ham getchar() << \n");
	
	char ch;
	printf("nhap 1 ky tu bat ky : ");
	ch = getchar(); // tuong tuong lenh scanf("%c", &ch);
	
	printf("Ky tu vua nhap la [%c] \n", ch);
	
	fflush(stdin);  // xoa het cac ky tu ton dong trong keyboard buffer
	
	printf("nhap tiep 1 ky tu nua : ");
	ch = getchar(); // tuong tuong lenh scanf("%c", &ch);
	printf("Ky tu vua nhap la [%c] \n", ch);
	
}


