#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// vi du demo ve doc file van ban
// doc noi dung bai hat trong tap tin co ten :"con_ga_con.txt", xuat len man hinh

int main() {
	char filename[]="f:\\con_ga_con.txt";
	FILE *f;
	char line[81];
	
	//buoc 1. mo file de doc noi dung bai hat
	f = fopen(filename,"r");
	
	//buoc 2. doc het noi dung cua file bai hat bang cach su dung vong lap
	while(!feof(f)){
		fgets(line, 80, f);
		printf("%s", line);
	}
	
	//buoc 3. dong file
	fclose(f);
}


