#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void s18();
void s18_1();
void s18_2();
void print_tempo_min_max(float nhiet_do[][5], int i);

int main() {
	char op;

	while(1) {
		printf("\n\n *** MENU - Assignment Session 18 ***  \n");
		printf("1. S18 \n");
		printf("2. S18. 1 \n");
		printf("3. S18. 2 \n");
		printf("4. Exit  \n");
		printf(" Enter your choice [1-4]: ");

		fflush(stdin);
		op = getchar();

		switch(op) {
			case '1':
				s18();
				break;
			case '2':
				s18_1();
				break;
			case '3':
				s18_2();
				break;
			case '4':
				exit(0);
			default:
				printf(">> Wrong choice ! \n\n");
		}
	}
}


void s18() {
	char str[1000], type;
	int i, Count= 0;

	fflush(stdin);
	printf("\n Please Enter any String :  ");
	gets(str);

	printf("\n Please Enter the Character that you want to Search for :  ");
	scanf("%c", &type);

	for(i = 0; i <= strlen(str); i++) {
		if(str[i] == type) {
			Count++;
		}
	}
	printf("\n The Total Number of times '%c' has Occured = %d ", type, Count);

}



void s18_1() {
	char names[5][20], prefix[5];
	char tmp[32];
	int i=0;

	fflush(stdin);
	
	printf("Please enter the 5 names and a prefix \n");
	for(i; i<=4; i++) {
		printf("Enter name %d :  ",i+1);
		scanf("%[^\n]s", &names[i]);
		fflush(stdin);
	}
	printf("prefix:  ");
	scanf("%s", &prefix);
	
	printf("\n\n\n");

	for(i=0; i<=4; i++) {
		strcpy(tmp, prefix);
		strcat(tmp, " ");
		strcat(tmp, names[i]);
		printf("%s \n", tmp);
	}
}


void s18_2() {

	char city[3][30]={"sai gon","ha noi", "can tho"};
	
	float tempo[3][5] = {
		{37.6, 38.5, 37.2, 39.1, 36.5},
		{34.6, 32.5, 38.2, 30.1, 29.5},
		{36.6, 37.5, 37.1, 36.2, 35.78},	
	};
	
	for(int i=0; i<3; i++){
		printf("\n >> Thanh pho %s: \n", city[i]);
		print_tempo_min_max(tempo, i);
	}
}

void print_tempo_min_max(float nhiet_do[][5], int i)
{
	float min = nhiet_do[i][0];
	float max = nhiet_do[i][0];
	
	printf(" Nhiet do trung binh 5 nam gan nhat : \n");
	for(int k=0; k<5; k++){
		printf(" %.2f, ", nhiet_do[i][k]);
	}
		
	for(int k=0; k<5; k++){
		min = min>nhiet_do[i][k] ? nhiet_do[i][k] : min;
		max = max<nhiet_do[i][k] ? nhiet_do[i][k] : max;
	}
	printf("\n");
	printf(">> nhiet do thap nhat: %.2f \n", min);
	printf(">> nhiet do cao nhat: %.2f \n", max);
	
}


