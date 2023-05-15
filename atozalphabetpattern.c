#include<stdio.h>

main()
{
	int i,j,n;
	char ch= 'A';
	
	printf("Enter Any Value :\n");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;i++)
		{
			printf("%c",ch);
		}
		printf("\n");
	}
}
