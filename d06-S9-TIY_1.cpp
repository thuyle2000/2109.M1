#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){

	for(int i=100; i>0; i=i-5){
		printf("%d  ", i);
	}
	
	printf("\n\n");
	
	for(int i=20; i>0; i--){
		printf("%d  ", i*5);
	}
}

