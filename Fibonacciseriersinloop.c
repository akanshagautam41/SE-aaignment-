#include<stdio.h>
int main()
{
	int N=0,N1=1,N2,i,a;
	
	printf("Enter Any Value :\n");
	scanf("%d",&a);
	
	printf("\n%d%d",N,N2);
	
	for(i=2;i<a;i++)
	{
		N2=N+N1;
		printf("\n%d",N2);
		N=N1;
		N1=N2;
	}
	return 0;
}
