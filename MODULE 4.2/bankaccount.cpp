#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

class bank{
	
	 int accountnumber;
	 char accountholdername[] , accounttype[];
	 float bal;
	 
	 public:
	 
	 bank(int acc_no , char *name , char *acc_type, float balance)
	 {
	 accountnumber = acc_no	;
	 strcpy(accountholdername,name);
	 strcpy(accounttype,acc_type);
	 bal=balance;
	 }
	 
	 void deposite();
	 void withdraw();
	 void show();
	 
};

void bank :: deposite()  // deposte amount
{
	int depositeamount;
	cout<<"Enter Deposite amount:"<<endl;
	cin>>depositeamount;
	bal+=depositeamount;
	
}

void bank :: withdraw()  // withdraw amount
{
	int withdrawamount;
	cout<<"Enter Withdraw amount:"<<endl;
	cin>>withdrawamount;
	if(withdrawamount>bal)
	cout<<"Cannot withdraw amount:"<<endl;
	bal-=withdrawamount;
}

void bank :: show()  // show account details
{
	cout<<"======================="<<endl;
	cout<<"Account number : "<<accountnumber <<endl;
	cout<<"Account holder name: "<<accountholdername <<endl;
	cout<<"Account type: "<<accounttype<<endl;
	cout<<"Account balance : "<<bal<<endl;
}

int main()
{

int acc_no	;
char name[100],acc_type[100] ;
float balance ;
cout<<"Enter Your Account Details: "<<endl;
cout<<"Acount Number :"<<endl;
cin>>acc_no;
cout<<"Account holder name: "<<endl;
cin>>name;
cout<<"Account type :"<<endl;
cin>>acc_type;
cout<<"Account balance :"<<endl;
cin>>balance;

 bank b(acc_no , name , acc_type ,balance);
b.deposite();
b.withdraw();
b.show();
}
