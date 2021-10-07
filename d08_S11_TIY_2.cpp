#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char input[100];
    int count = 0;
    
    printf("Enter a line of text, the program will count the number of vowels in your line: \n => ");
    gets(input);
    
    for(int i = 0; i <= strlen(input); i++){
    	switch(input[i]){
    		case 'u':
    		case 'o':
    		case 'e':
    		case 'a':
    		case 'i':
    		case 'U':
    		case 'O':
    		case 'E':
    		case 'A':
    		case 'I':
    			count++; break;
		}
	}
	
	printf("\nYour line of text have %d vowels", count);	
}
