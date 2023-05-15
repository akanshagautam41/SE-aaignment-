#include<stdio.h>

int main()
{
	int n,i,sum=0;
	
	printf("Enter Any value :");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(i%2==1)
		{
			sum=sum+i;
		}
	}
	printf("Sum of all odd numbers %d: %d",n,sum);
	return 0;
}
