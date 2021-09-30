#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <conio.h>

//demo lap trinh re nhanh co dieu kien: IF
int main(){
	
	char ch;
	printf(" vui long nhap 1 ky tu bat ky : ");
	ch = getche();  //lenh nay tuong duong getchar() nhung ko can <enter>
	
	//kiem tra ky tu duoc nhap co phai la ky tu so hay ko
	if( ch >='0' && ch<='9' )
	{
		printf("\n >> %c la ky so ! \n", ch );
	}
	
	printf("\n Ket thuc demo !");
}


