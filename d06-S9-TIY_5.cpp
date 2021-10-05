#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	int n=7;
	for(int i =n; i>0; i--) {
		for(int j=0; j<i; j++) {
			printf("* ");
		}
		printf("\n");
	}
}

