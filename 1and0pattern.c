#include<stdio.h>

int main()
{
	
	int n,k,i;
	
	printf("Enter Any Value:");
	scanf("%d",&n);
	
	for(k=1;k<=n;k++)
	{
		for(i=1;i<=k;i++)
		{
			printf("%2d",(i & 1));
			
		}
		
		printf("\n");
		
	}
	
	

	
}
