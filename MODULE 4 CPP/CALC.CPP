
#include<iostream.h>
#include<conio.h>
class calc
{
	int a,b,c,ch;
	public:
	void calculator()
{       cout<<"Choices:>1.Addision\n2.Subtraction\n3.Multipication\n4.Division\n_____________________________________________________________________________"<<endl;

	cout<<"\nEnter your number:";
	cin>>a;
	cout<<"Enter your 2 number:";
	cin>>b;
	cout<<"Enter Choice for calculation:";
	cin>>ch;
	if(ch==1)
	{
		c=a+b;
		cout<<"Addition is :>"<<c;

	}
	if(ch==2)
	{
		c=a-b;
		cout<<"Subtraction is :>"<<c;
	}
	if(ch==3)
	{

		c=a*b;
		cout<<"Multipication is :>"<<c;

	}
	if(ch==4)
	{
		c=a/b;
		cout<<"Division is :>"<<c;

	}
	if(ch>4)
	{
		cout<<"Invalid choice:<";

	}
}
};
void main()
{

	clrscr();
	calc obj;
	obj.calculator();
	getch();
}






