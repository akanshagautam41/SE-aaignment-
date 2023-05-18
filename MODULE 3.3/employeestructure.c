#include<stdio.h>

struct employee{
	int no;
	char name[20];
	char address [50];
	int age;
	
};

int main()
{
	struct employee emp;
	emp.no = 1234567;
	printf("employee no is:%d \n",emp.no);
	
	strcpy(emp.name,"radhika");
	printf("Employee name is :%s \n ",emp.name);
	
	strcpy(emp.address,"vadodara");
	printf("Employee Address:%s \n",emp.address);
	
	emp.age = 25;
	printf("Employee age is :%d \n",emp.age);
	
}
