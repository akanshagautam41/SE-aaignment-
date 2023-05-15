#include<stdio.h>
int main()
{
	char i,j;
	int n;
	
	printf("Enter Any Number:\n");
	scanf("%d",&n);
	
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%2c",'A'+j);
		}
		printf("\n");
	}
}
