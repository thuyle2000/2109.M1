#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// vi du demo ve bien con tro (pointer)
int main(){
	int *p1;
	float *p2;
	char *p3;
	
	
	printf("*p1 = %10x [%10d] \n", p1, p1);
	printf("*p2 = %10x [%10d] \n", p2, p2);
	printf("*p3 = %10x [%10d] \n", p3, p3);
	
	
	int a=10, b=34;
	float f1=5.6789, f2 = 1543.98;
	char c='A';
	
	//gan dia chi cua bien a -> p1, dc bien f1-> p2, dc cua bien c -> p3
	p1 = &a;
	p2 = &f1;
	p3 = &c;
	
	//in lai noi dung cua bien p1, p2, p3
	printf("\n\n Noi dung p1, p2, p3 sau khi duoc gan dc cua bien a, f1 va c: \n");
	printf("*p1 = %10x [%10d] \n", p1, p1);
	printf("*p2 = %10x [%10d] \n", p2, p2);
	printf("*p3 = %10x [%10d] \n", p3, p3);
	
	
	//gan dia chi cua bien b -> p1, dc bien f2-> p2, dc cua bien c -> p3
	p1 = &b;
	p2 = &f2;
	
	//in lai noi dung cua bien p1, p2
	printf("\n\n Noi dung p1, p2 sau khi duoc gan dc cua bien b, va f2: \n");
	printf("*p1 = %10x [%10d] \n", p1, p1);
	printf("*p2 = %10x [%10d] \n", p2, p2);	
	
	//in gia tri cua bien b va f2 thong qua toan tu * cua con tro p1 va p2
	printf("\n\n");
	printf("b = %d \n", *p1);
	printf("f2 = %f \n", *p2);
	
	printf("\n\n");
	printf(" b = %d \n", b);
	//gán cho b = 25;
	*p1 = 25;
	printf(" sau phep gan  *p1 = 25 \n", b);
	printf(" b = %d \n", b);	
	
	//in lai noi dung cua bien p1, p2
	printf("\n\n Noi dung p1, p2, p3 : \n");
	printf("*p1 = %10x [%10d] \n", p1, p1);
	printf("*p2 = %10x [%10d] \n", p2, p2);
	printf("*p3 = %10x [%10d] \n", p3, p3);
	p1++;		// p1= p1 + (1*4) : 4 byte bo nho duoc cap phat cho kieu so nguyen int
	p2+=2;   // p2= p2 + (2*4) : 4 byte bo nho duoc cap phat cho kieu float
	p3++; 	// p3= p3 + (1*1) : 1 byte bo nho duoc cap phat cho kieu char
	
	printf("\n\n Noi dung p1, p2 sau lenh [ p1++; p2+=2; p3++ ] \n");
	printf("*p1 = %10x [%10d] \n", p1, p1);
	printf("*p2 = %10x [%10d] \n", p2, p2);
	printf("*p3 = %10x [%10d] \n", p3, p3);
}


