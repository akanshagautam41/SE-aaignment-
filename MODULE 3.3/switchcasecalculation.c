int main()  
{  
    int a, b , op;  
  
  printf("Enter Any operator\n");
   printf("Enter any numbers\n");  
   scanf("%d %d %d", &a, &b , &op);
   switch(op)
   {
   	case 1: printf("add %d+%d=%d ",a,b,a+b);
   	break;
   	
   	case 2: printf("sub %d-%d=%d",a,b,a-b);
   	break;
   	
   	case 3: printf("mul %d*%d=%d",a,b,a*b);
   	break;
   	
   	case 4: printf("div %d/%d=%d",a,b,a/b);
   	break;
   	
   	default : printf(" wrong number");
   	break;
   }
  
  return 0;  
}  
