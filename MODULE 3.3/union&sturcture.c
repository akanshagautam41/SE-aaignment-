#include<stdio.h>

// declartion of structure
struct emp{
	
	int id;
	char name[20];
	float salary;
};

// declartion of union

union per{
	
	int id;
	char name[20];
	float salary;
};

int main()
{
	struct emp e1;
	
	union per u1;
	
	printf("Its Sturcture: \n");
	e1.id =  12;
	printf("\n Your id is: %d",e1.id);
	
    strcpy(e1.name, "Akansha");
	printf("\n Your Name is : %s ",e1.name);
	
	e1.salary = 30000.0;
	printf("\n Your Salary is : %.lf",e1.salary);
	
	printf("Its Union : \n");
	
	u1.id= 25;
	printf("\n Your Id is : %d",u1.id);
	
    strcpy(u1.name,"dolly");
 	printf("\n Your Name is : %s",u1.name);
	
	u1.salary = 50000.0;
	printf("\n Your Salary is : %.lf \n",u1.salary);
	
	printf("========================================");
	
	  printf("\nsize of  structure is: %d\n", sizeof(e1));  
    printf("size of union is : %d\n", sizeof(u1));  
}


