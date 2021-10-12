#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
vi du demo ve kieu du lieu nang cao cau truc
viet chuong trinh quan ly ds sinh vien - version 3
	- moi sv bao gom thong tin chi tiet: ma so, ho ten, nam sinh, diem kq thi
	- chuong trinh bao gom chuc nang:
	  - nhap thong tin sv
	  - in toan bo ds sinh vien
	  - in ra 2 sv co diem cao nhat
*/

//b1: dinh nghia kieu du lieu cau truc STUDENT mo ta thong tin chi tiet cua 1 sv
struct STUDENT {
	char id[11];
	char name[31];
	int yob;
	float mark;
};


//khai bao prototype cua ham QLSV()
void QLSV();

int main() {
	QLSV();
}


//ham quan ly danh sach sinh vien
void QLSV() {
	int n;

	while(1) {
		printf(" vui long nhap so luong sinh vien muon quan ly [3-10]: ");
		scanf("%d", &n);
		if(n>=3 && n<=10) {
			break;
		}
	}

	//b2: tao 1 bien mang ds, chua n-sinh vien
	struct STUDENT ds[n];

	//b3: vong nhap du lieu cho n-sinh vien
	printf("\n\n Nhap danh sach sinh vien \n");
	for(int i=0; i<n; i++) {
		fflush(stdin);
		printf(" nhap thong tin sinh vien thu %d : \n", i+1);

		printf(" - id: ");
		gets(ds[i].id);
		printf(" - ten: ");
		gets(ds[i].name);
		printf(" - nam sinh: ");
		scanf("%d", &ds[i].yob);
		printf(" - diem thi: ");
		scanf("%f", &ds[i].mark);
	}


	//b4: vong lap in ra bang danh sach sinh vien
	printf("\n\n Danh sach sinh vien \n");
	for(int i=0; i<n; i++) {
		printf("%2d. ", i+1);
		printf("%-10s ", ds[i].id );
		printf("%-30s ", ds[i].name );
		printf("%4d ", ds[i].yob );
		printf("%6.2f \n", ds[i].mark );
	}

	//b5: sap xep lai bang ds theo thu tu giam dan cua cot diem
	struct STUDENT temp;
	for(int i=0; i<n-1; i++){
		for(int k=i+1; k<n; k++){
			if(ds[i].mark < ds[k].mark){
				//hoan doi du lieu cua 2 dong i va k
				temp = ds[i];
				ds[i] = ds[k];
				ds[k] = temp;
			}
		}
	} // ket thuc thuat toan sap xep
	

	//b6: in ds 2 sinh vien co diem cao nhat
	printf("\n\n Danh sach 2 sinh vien co diem cao nhat \n");
	for(int i=0; i<2; i++) {
			printf("%2d. ", i+1);
			printf("%-10s ", ds[i].id );
			printf("%-30s ", ds[i].name );
			printf("%4d ", ds[i].yob );
			printf("%6.2f \n", ds[i].mark );
	}// ket thuc vong FOR
	

}

