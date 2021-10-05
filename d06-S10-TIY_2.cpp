#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	int n=10;
	for(int i =2; i<=n; i++) {
		for(int j=1; j<i; j++) {
			printf("%d", j);
		}
		printf("\n");
	}

}

