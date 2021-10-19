#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void Q1();
void Q2();

struct DOCTOR {
	char id[11];
	char name[31];
	char specialist[31];
	int exp_years;
};

int main() {
	char op;
	while (1) {
		fflush(stdin);

		printf("\n\n");
		printf("**************************************************\n");
		printf("* Selecting appropriate action:                  *\n");
		printf("* 1. Question 1                                  *\n");
		printf("* 2. Question 2                                  *\n");
		printf("* 3. Quit program                                *\n");
		printf("**************************************************\n");
		printf("\n Please input your choice [1-3]: ");
		op = getchar();

		switch (op) {
			case '1':
				Q1();
				break;
			case '2':
				Q2();
				break;
			case '3':
				exit(0); // ket thuc chuong trinh
			default:
				printf("Invalid option !");
				break;
		}
	}
}

void Q1() {
	int number, remain, temp, digits, sum ;

	printf("Please enter the number : ");
	scanf("%d", &number);
	fflush(stdin);

	temp = number;	//cat so vua nhap [number] vo bien temp
	
	//buoc 1. dem xem so [number] co bao nhieu ky so. 
	//vi du: 45=> co 2 ky so, 137=> co 3 ky so, 3458=>co 4 ky so, 678999=> co 6 ky so
	digits=0;
	while (number > 0) {
		number = number/ 10;
		digits++;
	}
	
	//buoc 2. tinh tong so mu cua tung ky so cua so [number] voi n-ky so [digits]
	//vi du : 123 => tinh tong 1^3+ 2^3+ 3^3, 23783=>tinh tong 2^5+3^5+7^5+8^5+3^5
	number = temp;
	sum=0;
	while (number > 0) {
		remain = number % 10;
		sum = sum + pow(remain, digits);
		number = number / 10;
	}

	if (temp == sum) {
		printf("=> %d is the armstrong number !", temp);
	} else {
		printf("=> %d is not the armstrong number !", temp);
	}
}

void Q2() {
	//Input the number of doctors for management
	int n;
	while (1) {
		printf("\nEnter the number of doctors : ");
		scanf("%d", &n);
		if (n >= 3 && n < 10) {
			break;
		}
	}
	fflush(stdin);

	struct DOCTOR list[n];

	printf("Please enter the data for\n");
	for (int i = 0; i < n; i++) {
		printf("Doctor no %d: \n", i + 1);
		printf("   id: ");
		gets(list[i].id);
		fflush(stdin);

		printf("   name: ");
		gets(list[i].name);
		fflush(stdin);

		printf("   Specialist: ");
		gets(list[i].specialist);
		fflush(stdin);

		printf("   exp-years: ");
		scanf("%d", &list[i].exp_years);
		fflush(stdin);
	}

	//sort doctors which have over 10 years experiences
	printf("\n\nList of Doctors (over ten years experience)\n");
	for (int i = 0; i < n; i++) {
		if (list[i].exp_years > 10) {
			printf("     => ");
			printf("id: %s, ", list[i].id);
			printf("name: %-20s, ", list[i].name);
			printf("specialist: %-20s, ", list[i].specialist);
			printf("exp-years: %2d \n", list[i].exp_years);
		}
	}
}
