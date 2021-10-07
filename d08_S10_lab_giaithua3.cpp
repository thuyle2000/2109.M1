#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	int a;
	long kq = 1;
	printf ("Vui long nhap a :");
	scanf ("%d",&a);
	if (a==0||a==1) {
		printf ("Giai  thua cua a = 1\n",a);
	} else  {
		for(int i=2; i<=a ; i++ ) {
			kq *= i ;	
		}
		printf ("Giai thua cua a = %d\n",kq );
	}
}

