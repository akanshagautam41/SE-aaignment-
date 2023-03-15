#include<stdio.h>

void fun();

void add()
{
	int a,b,add;
	
	printf("\n\n........MENU........\n\n");
	printf("1. Addition \n");
	printf("2. Subtraction \n");
	printf("3. Multiplication \n");
	printf("4. Division \n");
	
	printf("Enter Your First Number:\n");
	scanf("%d",&a);
	printf("Enter Your Second Number:\n");
	scanf("%d",&b);
	add=a+b;
	printf("total value of two number %d :\n ",add);
}

void sub()
{
	int a,b,sub;
	printf("Enter Your First Number:\n");
	scanf("%d",&a);
	printf("Enter Your Second Number:\n");
	scanf("%d",&b);
	sub=a-b;
	printf("total value of two number %d :\n ",sub);
}
void mul()
{
	int a,b,mul;
	printf("Enter Your First Number:\n");
	scanf("%d",&a);
	printf("Enter Your Second Number:\n");
	scanf("%d",&b);
	mul=a*b;
	printf("total value of two number %d :\n ",mul);
}

void div()
{
	int a,b,div;
	printf("Enter Your First Number:\n");
	scanf("%d",&a);
	printf("Enter Your Second Number:\n");
	scanf("%d",&b);
	div=a/b;
	printf("total value of two number %d :\n ",div);
}
void main()
{
	add();
	sub();
	mul();
	div();
	return 0;
}
