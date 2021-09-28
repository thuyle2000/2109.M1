#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	//chuong trinh tinh dien tich va chu vi hinh tron
	
	//dinh nghia hang so PI
	const float PI = 3.1415;
	
	//khai bao bien chua ban kinh r cua hinh tron, va gan cho r=5
	int r = 5;
	
	
	//khai bao bien chua dien tich va chu vi hinh tron
	float dt = PI * r * r;
	float cv = 2 * r * PI;
	
	//in dien tich va chu vi cua hinh tron co ban kinh r ra man hinh
	printf("Hinh tron co ban kinh %d \n", r);
	printf(" >> Dien tich = %f \n", dt);
	printf(" >> Chu vi = %f \n", cv);	
	
	
}


