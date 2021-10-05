#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//tinh va in ra day so fibonacci n-phan tu - Version 2
//day so fibonacci : 0, 1, 1, 2, 3, 5, 8, 13, 21, 34 .. 
int main() {
	int i, n;

	while(1) {
		printf("Enter the number of Fibonanci sequences (>3): ");
		scanf("%d", &n);
		if(n>3) break; //nhap dung thoat vong lap !		
	}


	printf("Fibonacci Series %d-numbers : \n", n);
	int t1 = 0, t2 =1;
	int t_tieptheo =0;

	for (i = 1; i <n; ++i) {
		printf("%d, ", t_tieptheo);
		t1 = t2;
		t2 = t_tieptheo;
		t_tieptheo = t1 + t2;
	}

	printf("%d. ", t_tieptheo);
	
}

