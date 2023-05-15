#include<stdio.h>

int main()
{

int a,b;
printf("\n enter a value:");
scanf("%i",&a);
printf("\n enter b value:");
scanf("%i",&b);
a=a+b;
b=a-b;
a=a-b;
printf("\n after swapping value \n a:%i \n b:%i",a,b);
return 0;
}

