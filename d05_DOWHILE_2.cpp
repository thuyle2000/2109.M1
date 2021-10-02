#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//demo ve vong lap DO-WHILE
//vi du, yeu cau nhap vao diem thi cuoi khoa.
//       Diem thi thi hop le [0-100]. Neu nhap sai, nguoi chay CT phai nhap lai.

int main() {
	int mark;

	//trong NNLT C: gia tri 0 <=> False / khac 0 <=> True
	do {
		printf(">> vui long nhap diem kq [0-100]: ");
		scanf("%d", &mark);
		if(mark>=0 && mark<=100){
			break; 	//thoat vong lap WHILE neu nhap diem dung !
		}
	}while(1);


	if(mark>=40) {
		printf("\n => Chuc mung, Ban da vuot qua ky thi kiem tra ! \n");
	} else {
		printf("\n => Rat tiec, Ban can phai thi lai !\n");
	}
}


