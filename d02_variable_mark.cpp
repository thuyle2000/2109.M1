#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	//khai bao bien chua diem thi cua 3 mon hoc [ly],[hoa],[sinh]
	int ly, hoa, sinh;
	
	//gan gia tri cho 3 bien
	ly=90;
	hoa=100;
	sinh=77;
	
	//khai bao tiep bien chua diem [tong] va [binhQuan]
	int tong, binhQuan;
	
	//tinh gia tri cho diem [tong] va [binhQuan]
	tong = ly+hoa+sinh;
	binhQuan = tong /3;
	
	//in ra diem cua 3 mon
	printf(" * * * Diem chi tiet * * *\n");
	printf(" >> vat ly  : %d \n", ly);
	printf(" >> hoa hoc : %d \n", hoa);
	printf(" >> sinh vat: %d \n", sinh);
	printf(" * * * ^ ^ ^ ^ ^ ^ ^ * * * \n\n");
	
	//in ra diem [tong] va [binhQuan]	
	printf(">> Tong diem: %d \n", tong);
	printf(">> Binh quan: %d \n", binhQuan);
	
}


