#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//demo ve vong lap DO-WHILE
//vi du, yeu cau nhap vao diem thi cuoi khoa.
//       Diem thi thi hop le [0-100]. Neu nhap sai, nguoi chay CT phai nhap lai.

int main() {
	int mark;

	do{
		printf(">> vui long nhap diem kq [0-100]: ");
		scanf("%d", &mark);
	}while(mark<0 || mark>100);


	if(mark>=40) {
		printf("\n => Chuc mung, Ban da vuot qua ky thi kiem tra ! \n");
	} else {
		printf("\n => Rat tiec, Ban can phai thi lai !\n");
	}
}


