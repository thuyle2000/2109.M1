#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int basic,hra,ta,other;
	float da,pf,it,net;
	printf("\n gia tri cua basic=$",basic);
	scanf("%d",&basic);
	
	da=(basic*12)/100;
	printf("\n gia tri cua da= $%g \n",da);
	
	printf("\n gia tri cua hra=$",hra);
	scanf("%d",&hra);
	
	printf("\n gia tri cua ta=$",ta);
	scanf("%d",&ta);
	
	printf("\n gia tri cua other=$",other);
	scanf("%d",&other);
	
	pf=(basic*14)/100;
	printf("\n gia tri cua pf= $%g \n",pf);
	
	it=(basic*15)/100;
	printf("\n gia tri cua it= $%g \n",it);

	
	net= basic + da + hra + ta + other - (pf + it);
	printf("\n net salary: $%f \n",net); 
}
