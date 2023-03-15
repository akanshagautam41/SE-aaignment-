#include<stdio.h>

int main()

{
	int a,b,Addition,Subtraction,Multiplication,division;
	char choice;
	
	printf("\n\n........MENU........\n\n");
	printf("1. Addition \n");
	printf("2. Subtraction \n");
	printf("3. Multiplication \n");
	printf("4. Division \n");
	printf("Enter Your Choice:");
	scanf("%c",&choice);
	
	switch(choice)
	{
	
	case 'a': printf("\nEnter Your First Number:");
	          scanf("%d",&a);
	          printf("Enter Your Second Number:");
	          scanf("%d",&b);
	          Addition=a+b;
	          printf("Addition = %d",Addition);
	break;
	
	case 'b': printf("\nEnter Your First Number:");
	          scanf("%d",&a);
	          printf("Enter Your Second Number:");
	          scanf("%d",&b);
	          Subtraction=a-b;
	          printf("Subtraction = %d",Subtraction);
	break;
	
	case 'c': printf("\nEnter Your First Number:");
	          scanf("%d",&a);
	          printf("Enter Your Second Number:");
	          scanf("%d",&b);
	          Multiplication=a*b;
	          printf("Multiplication = %d",Multiplication);
	break;
	
	case 'd': printf("\nEnter Your First Number:");
	          scanf("%d",&a);
	          printf("Enter Your Second Number:");
	          scanf("%d",&b);
	          division=a/b;
	          printf("Division = %d",division);
	break;
	
	default : printf("invalid choice!!!! ");
}
}
