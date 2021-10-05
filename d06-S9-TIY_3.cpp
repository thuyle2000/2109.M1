#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	int i, n;

	int t1 = 0, t2 =1;

	int t_tieptheo = t1 + t2;

	printf("Enter the number of Fibonanci sequences: ");
	scanf("%d", &n);

	printf("Fibonacci Series: %d, %d, ", t1, t2);

	for (i = 3; i <= n; ++i) {
		printf("%d, ", t_tieptheo);
		t1 = t2;
		t2 = t_tieptheo;
		t_tieptheo = t1 + t2;
	}

}

