#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <conio.h>

//demo lap trinh re nhanh dieu kien : IF-ELSE-IF bac thang
//phan loai ky tu dua vao ma ascii
int main(){
	char ch;
		
	printf(">> vui long nhap 1 ky tu bat ky: ");
	ch = getche();
	
	printf("\n\n");
	
	if(ch>='0' && ch<='9'){
		printf(" >> %c la ky so ! \n", ch);
	}
	else if(ch>='A' && ch<='Z') {
		printf(" >> %c la chu in hoa ! \n", ch);
	}
	else if(ch>='a' && ch<='z') {
		printf(" >> %c la chu in thuong ! \n", ch);
	}
	else{
		printf(" >> %c la ky hieu dac biet ! \n", ch);
	}	
}


