#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	int n=6;
	for(int i = 1; i<n; i++) {
		for(int j=1; j<=i; j++) {
			printf("%d", j);
		}
		printf("\n");
	}
	
	printf("\n\n");
	
	n=6;
	for(int i =n; i>0; i--) {
		for(int j=1; j<i; j++) {
			printf("%d", j);
		}
		printf("\n");
	}
}
