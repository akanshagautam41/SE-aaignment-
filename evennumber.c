#include<stdio.h>

main()
{
	int i;
	printf("Even number 1 to 25:\n");
	
	for(i=1;i<=25;i++)
	{
		if(i%2==0)
		{
			printf("%d \n",i);
		}
	}
	return 0;
}
