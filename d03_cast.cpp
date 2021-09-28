#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int a=10, b=3;
	float r1 = a/b;
	float r2 = (float)a/b;
	printf("%d / %d = %f \n", a, b, r1);
	printf("(float)%d / %d = %f \n", a, b, r2);
	printf("-8 * 4 % 2 -3 = %d \n", -8 * 4 % 2 -3);
}


