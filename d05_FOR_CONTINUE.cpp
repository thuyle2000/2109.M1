#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//demo ve lenh CONTINUE -
//vi du : kiem tra mat ma nhap dung hay ko ?
//        voi so lan duoc thu lai toi da la 3 lan.
int main() {
	printf("* * * Demo continue * * *\n");
	
	int password = 123;
	int userPass;
	int fail = 1;

	for(int i=0; i<3; i++) {
		printf(">> vui long nhap mat ma: ");
		scanf("%d", &userPass);
		if(password!=userPass) {
			printf(" Mat ma ko dung, vui long nhap lai ! \n");
			continue;
		}
		fail=0;
		break;
	}//ket thuc FOR

	if(fail==0) {
		printf("\n >> Chuc mung ban da dang nhap thanh cong !\n");
	} else {
		printf("\n >> Rat tiec, chung toi se khoa tai khoan cua ban ! \n");
	}
}


