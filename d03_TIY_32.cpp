#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	char tenNV[31]; //khai bao chuoi [tenNV] co the chua toi da 30 ky tu
	int namSinh;
	float luongCB;
	
	//nhap lieu
	printf("nhap ho ten nhan vien: ");
//	scanf("%s", tenNV);			// chuoi ko the chua khoang trang 
	scanf("%[^\n]s", tenNV);
	
	printf("nhap nam sinh: ");
	scanf("%d", &namSinh);
	
	printf("nhap luong co ban: ");
	scanf("%f", &luongCB);
	
	
	//xuat thong tin nhan vien ra man hinh
	printf("\n >> Thong tin nhan vien: \n");
	printf(" - Ho ten: %s \n", tenNV);
	printf(" - Tuoi: %d \n", 2021-namSinh);
	printf(" - Luong CB: %f \n", luongCB);
}


