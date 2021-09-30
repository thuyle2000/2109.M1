#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//demo lap trinh re nhanh co dieu kien : Nested IF
//kiem tra 1 nam bat ky co phai la nam nhuan ko ?

int main() {
	//khai bao bien bo nho [year] chua nam muon kiem tra
	int year;

	printf(">> nhap vao nam muon kiem tra: ");
	scanf("%d", &year);

	if(year % 100 == 0) {
		//nam the ky
		if(year % 400==0) {
			printf(">> %d la nam nhuan the ky ! \n", year);
		} else {
			printf(">> %d la nam the ky ! \n", year);
		}
	}
	else {
		//nam binh thuong
		if(year % 4 == 0) {
			printf(">> %d la nam nhuan ! \n", year);
		} else {
			printf(">> %d la nam binh thuong (365 ngay) ! \n", year);
		}
	}

}


