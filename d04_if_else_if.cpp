#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//demo lap trinh re nhanh dieu kien : IF-ELSE-IF bac thang
//phan loai ket qua thi dua vao diem kiem tra
int main(){
	
	//khai bao bien bo nho [mark] de luu diem kiem tra
	int mark;
	
	printf(">> vui long nhap diem kiem tra cuoi ky [0-100] : ");
	scanf("%d", &mark);
	
	//phan loai diem ktra, de dua ra thong bao tuong ung
	if(mark<0 || mark>100){
		printf(">> Diem nhap ko hop le !!! \n");
	}
	else if(mark >=85){
		//mark thuoc khoang tu 85->100
		printf(">> Xuat sac ! \n");
	}
	else if(mark>=75){
		//mark thuoc khoang tu 75->84
		printf(">> Gioi ! \n");		
	}
	else if(mark>=65){
		//mark thuoc khoang tu 65->74
		printf(">> Kha ! \n");			
	}
	else if(mark>=40){
		//mark thuoc khoang tu 40->64
		printf(">> Trung Binh ! \n");			
	}
	else{
		//mark <40
		printf(">> Chua dat yeu cau ! \n");
	}
}


