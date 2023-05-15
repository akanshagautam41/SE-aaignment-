#include<stdio.h>

main()
{
	int n,sum=0,m;
	
	printf("Enter Any Number:");
	scanf("%d",&n);
	 
	 while(n>0)
	 {
	 	
	 	m=n%10;
	 	sum=sum+m;
	 	n=n/10;
	 	
	 }
	 
	 printf("sum is =%d",sum);
	 return 0;
}
