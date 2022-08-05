#include<iostream>
#include<conio.h>
class Person{
	private:
		st name;
		int age;
	public:
		void setPerson(int a, st n){
			name = n;
			age = a;
		}
		void displayPerson(){
			cout<<"Name:  "<<name<<endl;
			cout<<"Age:    "<<age<<endl;
		}
		
	
};
class Student: Person{
	private:
		float percentage;
	public:
		void setStudent(st n, int a, float p){
			percentage = p;
			setPerson(a,n);
		}
		void displayStudent(){
			cout<<"Student details are: \n";
			displayPerson();
			cout<<"Prcentage is:  "<<percentage<<endl;
		}
};
class  Teacher: Person{
	private:
		float salary;
	public:
		void setTeacher(st n, int a, float s){
			salary = s;
			setPerson(a,n);
		}
		void displayTeacher(){
			cout<<"Teachers details are: \n";
			displayPerson();
			cout<<"Salary:  "<<salary<<endl;
		}
};


int main(){
	Student s;
	s.setStudent("John", 12,80);
	s.displayStudent();
	Teacher t;
	t.setTeacher("Abraham", 15, 9000.98);
	t.displayTeacher();
}