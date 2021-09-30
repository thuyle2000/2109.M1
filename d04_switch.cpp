#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

//demo lap trinh re nhanh co dieu kien - switch case
//kiem tra ky tu duoc nhap la nguyen am [aeiou] hay phu am

int main(){
	char ch;
	printf(" >> nhap ky tu chu bat ky: ");
	ch = getche();
	
	printf("\n\n");
	
	if( (ch>='a' && ch<='z') || (ch>='A' && ch<'Z') )
	{
		//ky tu duoc nhap la chu in thuong hoac in hoa
		switch(ch){
			case 'a': case 'e': case 'i': case 'o': case 'u':
			case 'A': case 'E': case 'I': case 'O': case 'U':
				printf(">> [%c] la nguyen am ! \n", ch); break;
			default:
				printf(">> [%c] la phu am ! \n", ch);break;		
		}
	}
	else{
		printf(">> %c ko phai la ky tu chu alphabet !\n", ch);
	}
}


