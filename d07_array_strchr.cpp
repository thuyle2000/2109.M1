#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <conio.h>

// vi du demo ve ham xu ly chuoi.
// ham strchr(s1,ch) : tim ky tu ch trong chuoi s1, neu co ket qua tra ve khac Null
                   

int main(){
	//khai bao chuoi chua cac nguyen am
	char vowels[] = "aeiouAEIOU";
	char kt;
	
	printf("Vui long nhap 1 ky tu bat ky : ");
	kt = getche();
	
	if( strchr(vowels, kt) ){
		printf("\n >> %c la nguyen am !\n", kt);
	}
	else{
		printf("\n >> %c khong phai la nguyen am !\n", kt);
	}
	
}


