#include<stdio.h>
int main()
{
	int n=1,f=1,i;
	printf("Enter Any Value:\n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	printf("factorial is %d",f,n);
}
