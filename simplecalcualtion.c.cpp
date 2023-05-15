#include<stdio.h>

int main()
{
	int a=50,b=10,add,mul,sub,div,mod;
	printf("\n find the value of a&b:");
	scanf("%d %d",&a,&b);
    add=a+b;
	mul=a*b;
	sub=a-b;
	div=a/b;;
	mod=a%b;
	printf("add %d \nmul %d \nsub %d \ndiv %d \nmod %d",add,mul,sub,div,mod);
	return 0;
}
