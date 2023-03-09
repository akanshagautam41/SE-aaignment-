#include<stdio.h>

main()
{
	int n;
	printf("\n enter the value:");
	scanf("%d",&n);
	
	if((n%4==0)||(n%400==0)||(n%100==0))
	{
		printf("\n it leap year");
	}
	else
	{
		printf("\n it not leap year");
	}
	return 0;
}
