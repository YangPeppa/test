#include <iostream>
#include<cmath>
#include<cstdio>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	double a ,b ,c ,d; 
	scanf("%lf %lf %lf",&a,&b,&c);
	d=(b*b-4*a*c);
	if (d<0)
	printf("No real roots!");
	
	return 0;
}
