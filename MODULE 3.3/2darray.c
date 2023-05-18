#include<stdio.h>

int main()

{
	int a[100][100],b[100][100],add[100][100],i,j,r,c ,sub[100][100],mul[100][100];
	
	printf("Enter the  number of row :");
	scanf("%d",&r);
	printf("Enter The number of coloumn:");
	scanf("%d",&c);
	
	printf("Enter Element of first matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter Element a%d%d : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("Enter Element of Second Matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter Element b%d%d : ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	

	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			add[i][j] = a[i][j] + b[i][j];
		}
	}
	
	printf("\n\n Addition Of Two Matrix:\n\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t  ",add[i][j]);
			if (j == c - 1){
		
			printf("\n\n");
				}
		}
	}
	
		for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sub[i][j] = a[i][j] - b[i][j];
		}
	}
	
	printf("\n\n substraction Of Two Matrix:\n\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t  ",sub[i][j]);
			if (j == c - 1){
		
			printf("\n\n");
				}
		}
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			mul[i][j] = a[i][j] * b[i][j];
		}
	}
	
	printf("\n\n multiplication Of Two Matrix:\n\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t  ",mul[i][j]);
		if (j == c - 1){
		
			printf("\n\n");
				}
		}
	}
}

