#include<constream.h>
class sbibank

{
	public:
	char name[20];
	char accounttype[20];
	int accno;
	int balance;

	void inputdata()
	{
		cout<<"STATE BANK OF INDIA";
		cout<<"\n____________________________________";
		cout<<"\nEnter The Name Of Depositor :";
		cin>>name;
		cout<<"\nEnter The Account Type :";
		cin>>accounttype;
		cout<<"\nEnter Account Number :";
		cin>>accno;
		cout<<"\nEnter The Balance Ammount In The Account :";
		cin>>balance;
	}

void deposite()
{
	int depobal;
	cout<<"\nEnter The Amount to Diposite :";
	cin>>depobal;
	balance=balance+depobal;
	cout<<"\nYour currunt balance is :"<<balance;
	cout<<"\n____________________________________________________";
}
void balchack()
{
	int withdrawl;
	cout<<"\nEnter Ammount of Withdraw :";
	cin>>withdrawl;
	balance=balance-withdrawl;
	cout<<"\nAmount After Withdraw is :"<<balance;
	cout<<"\n_____________________________________________________";
}

void display()

{
	cout<<"\nName Is:"<<name;
	cout<<"\nThe Balance Is In account Is :"<<balance;


}
};
void main()
{
	clrscr();
	sbibank obj;
	obj.inputdata();
	obj.deposite();
	obj.balchack();
	obj.display();
	getch();

}































































