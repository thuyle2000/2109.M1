#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//demo cach su dung ham printf() ket hop voi cac bo tu dinh dang
int main() {
	int a=12345, b=345;

	//binh thuong
	printf("a = [%d] \n", a);
	printf("b = [%d] \n\n", b);

	//ket hop voi bo tu do rong cot (default la canh phai)
	printf("a = [%10d] \n", a);
	printf("b = [%10d] \n\n", b);

	//ket hop voi bo tu do rong cot va dien so 0 vo o trong (default la canh phai)
	printf("a = [%010d] \n", a);
	printf("b = [%010d] \n\n", b);

	//ket hop voi bo tu do rong cot, va canh trai
	printf("a = [%-10d] \n", a);
	printf("b = [%-10d] \n\n", b);


	float f = 123.123456;
	char ten[50]= "Le Thanh Sang";
	//ket hop voi bo tu mo ta lay bao so ky so le, hoac lay bn ky tu dau tien cua 1 chuoi
	printf("f = [%f] \n", f);
	printf("f = [%.2f] \n", f);
	printf("f = [%10.2f] \n\n", f);

	printf("ho ten = [%s] \n", ten);
	printf("ho ten = [%20s] \n", ten);
	printf("ho ten = [%-20s] \n", ten);
	printf("ho ten = [%-20.2s] \n", ten);
	printf("ho ten = [%-20.8s] \n", ten);
}


