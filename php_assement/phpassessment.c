#include<stdio.h>

int main()

{
	int a,b,Addition,Subtraction,Multiplication,division,choice;
	
	printf("\n\n........MENU........\n\n");
	
	printf("1. Addition \n");
	printf("2. Subtraction \n");
	printf("3. Multiplication \n");
	printf("4. Division \n");
	
	printf("Enter Your Choice:");
	scanf("%d",&choice);
	printf("\nEnter Your First Number:");
	scanf("%d",&a);
	printf("Enter Your Second Number:");
	scanf("%d",&b);
	

switch(choice)
{
	case 1 : Addition=a+b;
	         printf("Addition = %d  ",Addition);
	break;
	
	case 2 : Subtraction=a-b;
	         printf("Subtraction = %d",Subtraction);
	break;
	
	case 3 : Multiplication=a*b;
	         printf("Multiplication = %d",Multiplication);
	break;
	
	case 4 : division=a/b;
	         printf("Division Value : %d",division);
	break;
	
	default : printf("invalid choice!!!! ");
	break;
}
}
