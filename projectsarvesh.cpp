#include<iostream>
#include<conio.h>
#include<fstream>
#include<string>
using namespace std;
class type
{
	 string name;
	 int accno;
	 public:
	 	void setname(string n)
	 	{
	 		name=n;
		 }
		 void setaccno(int a)
		 {
		 	accno=a;
		 }
		 string getname()
		 { 
		 return name;
		 }
		 int getaccno()
		 {
		 	return accno;
		 }
		 
};
class savinga:public type
{
public:
	//void create account;
	int deposit;
	//int widrawl;
 	int balance;
	//void report;
	public:
		savingacc()
		{ balance=1000;
		}
		void setdeposit(int d)
		{
			deposit=d;
		cout<<deposit<<endl;
		}
		void setbalance(int b)
		{
			balance=b;
			cout<<balance;
		}
		void widrawl()
	{
		int money;
		cout<<"enter amount of money"<<endl;
		cin>>money;
		if(balance-money>50)
		{
			balance=balance-money;
			
			cout<<"transaction successfull"<<endl;
		}
			else
			{
					cout<<"not transaction successfull"<<endl;
			}
		}
	
	void deposit1()
	{
		int money;
		cout<<"enter amount of money"<<endl;
		cin>>money;
		balance=balance+money;
	}
	void display()
	{
		cout<<"balance"<<endl<<balance;
	}

};
	class currentacc:public type
	{
		public:
			int deposit;
			int balance;
	int widrawl;
	//void report;
	public:
		currentacc()
		{
			balance=1000;
		}
		void setdeposit(int d)
		{
			deposit=d;
		cout<<deposit;
		}
		void setbalance(int b)
		{
			balance=b;
			cout<<balance;
		}
		void deposit1()
		{
			int money;
			cout<<"enter money"<<endl;
			balance=balance+money;
		}
	void display()
	{
		cout<<"balance in your account"<<endl<<balance;
	}
};
class details{
	public: int password;
	int acnno;
	int balancev;
	void show()
	{
			cout<<" kindly enter your uid";
    			cin>>password;
    			if(password==12044)
    			{
    				ifstream infile;
    				infile.open("sarvesh.txt",ios::in);
    				infile>>acnno;
    				infile>>balancev;
    				cout<<"YOUR ACCOUNT NO IN RECORD";
    				cout<<"\t"<<acnno<<endl;
    				cout<<"YOUR BALANCE IN RECORD";
    				cout<<balancev<<endl;
    				infile.close();
				}
				else if(password==12045)
				{
					ifstream infile;
					infile.open("sarvesh2.txt",ios::in);
					infile>>acnno;
					infile>>balancev;
					cout<<"YOUR account IN RECORD:";
    				cout<<acnno<<endl;
    				cout<<"YOUR BALANCE IN RECORD:";
    				cout<<balancev<<endl;
    				infile.close();
					
				}
				else if(password==12046)
				{
					ifstream infile;
					infile.open("sarvesh3.txt",ios::in);
					infile>>acnno;
					infile>>balancev;
					cout<<"YOUR ACCOUNTNO IN RECORD :";
    				cout<<acnno<<endl;
    				cout<<"YOUR CURRENT BALANCE:";
    				cout<<balancev<<endl;
    				infile.close();
				}
				else
				{
					cout<<"YOU HAVE ENTERED A WRONG PASSWORD";
				}
			}
	};
	int main()
{
	int choice;
	cout<<"enter type"<<endl<<"1 current"<<endl<<"2 saving";
	cin>>choice;
	cout<<endl;
	switch(choice)
	{
		case 1:
		
		{
		currentacc ob;
		string h;
		int k;
		cout<<"enter name of account holder";
		cin>>h;
		ob.setname(h);
	cout<<"acount no";
	cin>>k;
	ob.setaccno(k);
	cout<<"account name"<<ob.getname()<<endl;
	cout<<"account no"<<ob.getaccno()<<endl;
	//cout<<"account no"<<ob.getaccno();
//	cout<<"balance"<<ob.
   do
   {
   	cout<<"1 depposit:"<<endl<<"2 widrawl"<<endl<<"3 exit"<<endl<<"Enter choice";
   	int choice;
	   cin>>choice;
   	switch(choice)
   	{
   	case 1:
	   ob.deposit1();
	   ob.display();	
	   break;
	   case 2:
	   	
	   	//ob.checque();
	   	ob.display();
	   
	   	break;
		   }
		}while(choice<2);
		break;
}

	case 2:
	
  	 {
	   savinga obj;
   		string h;
		int k;
		cout<<"enter name of account holder";
		cin>>h;
		obj.setname(h);
	cout<<"acount no";
	cin>>k;
	obj.setaccno(k);
	cout<<"account name"<<obj.getname();
	cout<<"account no"<<obj.getaccno();
//	cout<<"balance"<<ob.
   do
   {
   	cout<<"deposit"<<endl<<"2 withdrawl"<<endl<<"3 exit"<<endl<<"Enter choice";
   	cin>>choice;
   		switch(choice)
   	{
   	case 1:
   		
		   
	   obj.deposit1();
	   //obj.interest(15);
	   obj.display();
	   break;

	   case 2:
	
	   	obj.widrawl();
	   	obj.display();
	   	break;
	
			}
		}while(choice!=3);
		break;
	}
}


cout<<"Do you want to know about your bank account details(y/n)  ";
char c;
cin>>c;
if(c=='y'||c=='Y')
{
	details d;
	d.show();
}
else
cout<<"THANKYOU";
return 0;
}
	




	
