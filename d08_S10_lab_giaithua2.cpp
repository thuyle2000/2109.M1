#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// tinh va in ra giai thua n (version 2)
int main() {
	int a=1;
	long b=1;

	while(1) {
		printf (" insert a [0-15]: ");
		scanf ("%d", &a);
		if(a>=0 && a<=15){
			break;
		}
	}

	// a! = 1 * 2 * 3 * 4 * ... (a-1) * a
	// 5! = 1*2*3*4*5

	for(int i=1; i<=a; i++){
		b = b * i;
	}

	printf(" >> %d!  = %d \n",a, b);
}

