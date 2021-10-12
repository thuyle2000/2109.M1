#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
vi du demo ve kieu du lieu nang cao Struct
*/

//buoc 1: dinh nghia kieu du lieu struct BOOK
struct BOOK{
	char title[31];
	char author[31];
	int price;
};


int main(){
	//buoc 2: khai bao bien b1 co kieu struct BOOK
	struct BOOK b1;
	
	//buoc 2: khai bao va khoi tao gia tri bien b2 co kieu struct BOOK 
	struct BOOK b2 ={"Lap trinh C", "Aptech", 100};
	
	//in noi dung cua bien b2 
	printf("\n Thong tin sach thu 2 \n");
	printf("- tua sach: %s \n", b2.title);
	printf("- tac gia: %s \n", b2.author);
	printf("- don gia: %d \n", b2.price);
	
	
	//khoi tao gia tri cho tung thanh phan cua bien b1;
	printf("\n nhap thong tin sach thu 1: \n");
	printf(" nhap tua sach: "); gets(b1.title);
	printf(" nhap ten tac gia : "); gets(b1.author); 
	printf(" nhap don gia: "); scanf("%d", &b1.price);
	
	//in noi dung cua bien b1 	
	printf("\n Thong tin sach thu 1 \n");
	printf("- tua sach: %s \n", b1.title);
	printf("- tac gia: %s \n", b1.author);
	printf("- don gia: %d \n", b1.price);
}


