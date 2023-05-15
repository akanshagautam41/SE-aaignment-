#include<stdio.h>
int main()
{
	int i,j,k,n;
	printf("Enter Your Value:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(k=1;k<n-i;k++)
		{
			printf(" ");
			
		}
		for(j=0;j<i;j++)
		{
			printf(" * ");
		}
		printf("\n");
	}
}
