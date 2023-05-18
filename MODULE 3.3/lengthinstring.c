#include <stdio.h>
int main()
{

    char str[100];
    int i,length=0;
    
    
    printf("Enter any string: \n");
    scanf("%s",str);

    
    for(i=0; str[i]!='\0'; i++)
    {
        length++; 
    }
    
    printf("\nLength of input string is: %d",length);
    
     return 0;
}
