#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void CTareaperimer();
long giaithua (int a );

int main() {

	CTareaperimer();
	//2.	Viet mot chuong trinh in ra giai thua cua mot so nguyen.

	int a;

	printf ("\n\n Vui long nhap so nguyen a (>=0) :");
	scanf ("%d",&a);

	printf(" Giai thua cua so %d = %d \n ", a, giaithua(a) );
}



//1. chuong trinh tinh dien tich va chu vi hinh chu nhat
void CTareaperimer() {
	int a;
	int b;

	printf("Chuong trinh Tinh chu vi va dien tich hinh chu nhat \n ");
	printf("Vui long nhap chieu dai: ");
	scanf ("%d",&a);
	printf ("Vui long nhap chieu rong: ");
	scanf ("%d",&b);

	printf (" Chu vi = %d\n",(a+b)*2);
	printf (" Dien tich = %d\n",a*b);

}

//2.	Viet mot chuong trinh tinh giai thua cua mot so nguyen.
long giaithua (int a) {
	long b = 1;
	for (int i=2 ; i<=a ; i++) {
			b*=i ;
	}
	return(b)  ;
}

