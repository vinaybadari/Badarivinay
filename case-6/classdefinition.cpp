/*
filename: classdedefinition.cpp
details: int *,chr[30] in private,describle operator overloading, member declarations.
author: Badari vinay
date: 11/04/2020
*/
#include<iostream>
#include<string.h>
using namespace std;
class CopyConstructor
{
   
    char *s_copy;
    int *ptr;
    public:
	CopyConstructor(int m)
	{
	*ptr=m;
	}
    CopyConstructor(const char *str,int p)
    {
        s_copy = new char[strlen(str)+1]; //Dynamic memory allocation
        strcpy(s_copy, str);
	ptr=new int;
	*ptr=p;
	
    }

 CopyConstructor(CopyConstructor &s,CopyConstructor &p)
    {
	cout<<"deepcopy"<<endl;
	s_copy=new char[strlen(s.s_copy)+1];
        strcpy(s_copy, s.s_copy);
	ptr=new int;
	*ptr=p.getx();
    }
	int getx()
	{
		return *ptr;
	}
    /* concatenate method */
    void concatenate(const char *str,int m)
    {
        strcpy(s_copy, str); //Concatenating two strings
	*ptr=m;
    }
    /* destructor */
   ~CopyConstructor ()
    {

    } 
    CopyConstructor operator ++()
	{
		
		++*ptr;
	}		
    void display()
    {
        cout<<s_copy<<endl;
	cout<<*ptr<<endl;
    }
    void display1()
    {
	cout<<*ptr<<endl;
    }
};
/* main function */
int main()
{
    CopyConstructor c1("Copy",9);
    CopyConstructor c2=c1; //Copy constructor
    c1.display();
    c2.display();
    cout<<"operato overloading"<<endl;
    CopyConstructor c3(20);
     ++c3;
    c3.display1();
    c1.concatenate("Constructor",8);    //c1 is invoking concatenate()
    c1.display();
    c2.display();
    return 0;
}
