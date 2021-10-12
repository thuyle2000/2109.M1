#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Q1();
void Q2();

int main() {

	//tao menu de chon cau hoi muon thuc hien
	char op;

	while(1) {
		fflush(stdin);
		
		printf("\n\n");
		printf("**************************************************\n");
		printf("* Selecting appropriate action:                  *\n");
		printf("* 1. Question 1                                  *\n");
		printf("* 2. Question 2                                  *\n");
		printf("* 3. Quit program                                *\n");
		printf("**************************************************\n");
		printf("\n Please input your choice [1-3]: ");
		op = getchar();
		
		switch(op){
			case '1': Q1(); break;
			case '2': Q2(); break;
			case '3':
				exit(0); // ket thuc chuong trinh
			default:
				printf("Invalid option !");
				break;	
		}
	}

}

//ham chuc nang xu ly question1 (30)
void Q1(){
	printf("\n Question 1: Tinh giai thua cua so nguyen N \n\n");
}

//ham chuc nang xu ly question2 (60)
void Q2(){
	printf("\n Question 2: Quan ly danh sach sinh vien \n\n");	
}

