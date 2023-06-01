#include<iostream>
using namespace std;

class calculator{
	public :
		
		int a,b,x;
		
		void display()
		{
	
		cout<<"Enter Any Number\n";
			}
			
			void display2()
			{
				cout<<"Enter Any Number\n";
			}
			
			int add()
			{
				x=a+b;
				cout<<x;
			}
			int sub()
			{
				x=a-b;
				cout<<x;
			}
			int mul()
			{
				x=a*b;
				cout<<x;
			}
			int div()
			{
				x=a/b;
				cout<<x;
			}
};

int main()
{
	calculator z;
	int choice;
	cout<<"1.Addition\n2.Subtraction\n3.Multiplication\n4.Divition\n";
	cin>>choice;
	
	switch(choice)
	{
		case 1: 
		z.display();
		cin>>z.a;
		z.display2();
		cin>>z.b;
		z.add();
		break;
		
		case 2: 
		z.display();
		cin>>z.a;
		z.display2();
		cin>>z.b;
		z.sub();
		break;
		
		case 3: 
		z.display();
		cin>>z.a;
		z.display2();
		cin>>z.b;
		z.mul();
		break;
		
		case 4: 
		z.display();
		cin>>z.a;
		z.display2();
		cin>>z.b;
		z.div();
		break;
	}
	return 0;
}
