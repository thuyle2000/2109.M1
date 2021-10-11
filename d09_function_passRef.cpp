#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//vidu ve phuong phap truyen tham so - kieu dia chi tham chieu
//viet ham hoan doi gia tri cua 2 bien a va b 

//khai bao prototype ham swap()
void swap(int *a, int *b);

int main(){
	int a, b;
	
	printf("nhap a: "); scanf("%d", &a);
	printf("nhap b: "); scanf("%d", &b);
	
	//goi ham hoan doi gia tri cua a va b
	swap(&a, &b);
	
	printf("\n\n>> trong ham main(), sau khi goi ham swap(a, b): \n");
	printf("   a = %d, b = %d \n", a, b);
}

/*
dinh nghia ham - hoan doi gia tri 2 so a va b
- ten ham: swap()
- doi so: 2 so nguyen a va b
- kieu ham : void
*/
void swap(int *a, int *b)
{
	int temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
	
	//in gia tri a va b
	printf("\n\n>> Trong ham swap(a, b): ");
	printf("   a= %d, b=%d \n", *a, *b);
}
