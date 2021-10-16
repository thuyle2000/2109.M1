#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//vi du demo ve ghi file van ban
//ghi 1 bai hat vo 1 tap tin co ten :"con_ga_con.txt"
int main() {
	char filename[]="f:\\con_ga_con.txt";
	FILE *f;

	//buoc 1. mo file de luu bai hat
	f = fopen(filename,"w");

	//buoc 2. ghi cac dong trong bai hat vo file
	fputs("Bai hat Dan Ga Con \n",f);
	fputs("================== \n",f);
	fputs("Ga ma chua biet gay \n",f);
	fputs("La con Ga Con \n",f);
	fputs("Ga ma gay sang \n",f);
	fputs("La con ga Cha \n\n",f);
	fputs("Di lang thang trong san \n",f);
	fputs("Giong con ga giong con ga \n",f);
	fputs("Di lang thang trong san \n",f);
	fputs("Co con ga co con ga \n",f);
	fputs("... ",f);
	
	//buoc 3. dong tap tin
	fclose(f);
	
	printf("Finish !!!");
	

}


