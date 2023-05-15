#include<stdio.h>
int main()
{
	int n,r=0,i,a;
	
	printf("Enter Any Value:\n");
	scanf("%d",&n);
	
	a=n;
	 for(;n>0;)
	 {
	 	i=n%10;
	 	r=r*10+i;
	 	n=n/10;
	 	
	 }
	 
	 printf("Reverse of %d is : %d\n",a,r);
	 
	 return 0;
}
