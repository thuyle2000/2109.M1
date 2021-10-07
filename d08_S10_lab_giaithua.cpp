#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// tinh va in ra giai thua n (version 1)
int main(){
	int a=1, b=1, c=1;
	printf ("insert a: ");
	scanf ("%d", &a);
	
	// n! = 1 * 2 * 3 * 4 * ... (n-1) * n
	// 5! = 1*2*3*4*5
	
	do{
		b=b*c;
		c++;
	}
	while(c<=a);
	
	printf("b=%d",b);
}

