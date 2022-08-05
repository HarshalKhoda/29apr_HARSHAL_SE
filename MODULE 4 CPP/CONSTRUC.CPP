#include<iostream.h>
#include<conio.h>
class Addition
{
private:
  float z;

public:

 Addition(float x,float y);
};

Addition::Addition(float a,float b)
{
	z=a+b;
	cout<<"Addition of 2 number is:-"<<z<<endl;
}
class Subtraction
{
private:
  float z;

public:

 Subtraction(float x,float y);
};

Subtraction::Subtraction(float a,float b)
{
	z=a+b;
	cout<<"Subtraction of 2 number is:-"<<z<<endl;
}
class Multification
{
private:
  float z;

public:

  Multification(float x,float y);
};

Multification::Multification(float a,float b)
{
	z=a+b;
	cout<<"Multification of 2 number is:-"<<z<<endl;
}
class Division
{
private:
  float z;

public:

  Division(float x,float y);
};

Division::Division(float a,float b)
{
	z=a+b;
	cout<<"Division of 2 number is:-"<<z<<endl;
}
void main()
{
	clrscr();
	float a,b;
	cout<<"Enter 2 numbers:-\n";
	cin>>a>>b;

	Addition add(a,b);
	Subtraction sub(a,b);
	Multification mul(a,b);
	Division div (a,b);
	getch();



}

