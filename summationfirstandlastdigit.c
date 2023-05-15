#include<stdio.h>
#include<conio.h>

void main()
{
	int num , sum=0 , firstdigit , lastdigit;
	
	printf("Enter Any Number of firstdigit and lastdigit:");
	scanf("%d",&num);
	lastdigit = num%10;
	firstdigit = num;
	
	while(num >=10)
	{
		num=num/10;
		
	}
	firstdigit= num;
	sum=firstdigit + lastdigit;
	
	printf("sum of firstdigit and lastdigit = %d",sum);
	
}
