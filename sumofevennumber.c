#include<stdio.h>

int main()
{
	int i,n,sum=0;
	
	printf("Enter Any Value:\n");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++)  
    {  
       if(i%2==0)
       {
       	sum=sum+i;
	   }
    }  
    printf("Sum of all even numbers %d: %d", n, sum);  
    return 0;  
}  
