#include<iostream>  
#include<conio.h>    
  
class String  
{  
    char str[20];  
public:  
    void input()   
    {  
        cout<<"Enter your string: ";  
        cin.getline(str,20);  
    }  
    void display()  
    {  
        cout<<"String: "<<str;  
    }  
    String operator+(String s)  
    {  
        String obj;  
        strcat(str,s.str);  
        strcpy(obj.str,str);  
        return obj;  
    }  
};  
void main()  
{  
    String str1,str2,str3;  
    str1.input();  
    str2.input();  
    str3=str1+str2;  
    str3.display();  
    getch();  
}
