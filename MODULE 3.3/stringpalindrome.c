#include<stdio.h>
#include<string.h>

int main()
{
	char a[100],b[100];

printf("Enter Any String \n");
scanf("%s",a);

strcpy(b,a);

strrev(b);

if(strcmp(a,b)==0)
	printf("%s Its palindrome",a);
	
	else
	printf("%s its not palindrome",a);
	
	return 0;
}
