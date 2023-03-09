#include<stdio.h>

int main()
{
	/*float si,p,r,t;
	printf("\n enter the value of simple interest:");
	scanf("%f %f %f",&p,&r,&t);
	si=p*r*t/100;
	printf("\n find the value of si %f",si);
	return 0;*/
	
	float si,p,r,t;
	printf("\n enter the value of simple interest p:");
	scanf("%f",&p);
	printf("\n enter the value of simple interest r:");
	scanf("%f",&r);
	printf("\n enter the value of simple interest t:");
	scanf("%f",&t);
	si=p*r*t/100;
	printf("\n find the value of si %f",si);
	return 0;
}
