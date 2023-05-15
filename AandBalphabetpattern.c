#include<stdio.h>

main()
{
	int n,i=1;
	char j,k;
	
	printf("Enter Any Value:");
	scanf("%d",&n);
	
	for(j=1;j<=n;j++)
	{
		for(k=1;k<=j;k++,i++)
		{
			printf("%4c",(char) (i+64));
		}
		printf("\n");
	}
}
