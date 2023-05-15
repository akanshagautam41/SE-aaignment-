#include<stdio.h>

int main()
{
	int i,size,max;
	printf("Enter Any Max Number:\n");
	scanf("%d",&size);
	int a[5];
	
	for (i=1 ;i<=size ;i++)
	{
		printf("Array element a[i]:");
    	scanf("%d",&a[i]);
	}
	max=a[0];
	
	for (i=1 ;i<=size ;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	printf("\n %d",max);
}
