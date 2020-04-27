/*
filename: classdedefinition.cpp
details: int *,chr[30] in private,describle operator overloading, member declarations.
author: Badari vinay
date: 11/04/2020
*/
#include<iostream>
#include<string.h>
#include"headerfile.h"
using namespace std;

	copyconstructor :: copyconstructor(int m)
	{
	*ptr=m;
	}
    copyconstructor :: copyconstructor(const char *str,int p)
    {
        s_copy = new char[strlen(str)+1]; //Dynamic memory allocation
        strcpy(s_copy, str);
	ptr=new int;
	*ptr=p;
	
    }

 	copyconstructor :: copyconstructor(copyconstructor &s,copyconstructor &p)
    {
	cout<<"deepcopy"<<endl;
	s_copy=new char[strlen(s.s_copy)+1];
        strcpy(s_copy, s.s_copy);
	ptr=new int;
	*ptr=p.getx();
    }
	int copyconstructor :: getx()
	{
		return *ptr;
	}
    /* concatenate method */
    void copyconstructor :: concatenate(const char *str,int m)
    {
        strcpy(s_copy, str); //Concatenating two strings
	*ptr=m;
    }
    /* destructor */
   copyconstructor :: ~copyconstructor ()
    {

    } 
    void copyconstructor ::  operator ++()
	{
		
		++*ptr;
	}		
    void copyconstructor :: display()
    {
        cout<<s_copy<<endl;
	cout<<*ptr<<endl;
    }
    void copyconstructor ::  display1()
    {
	cout<<*ptr<<endl;
    }
/* main function */
int main(int argc,char* argv[])
{
	 if(argc==2)
    {
    	//if loop for comparing the input string with "-h"
	    if(strcmp(argv[1],"-h")==0)	 				
	    {
            cout<<"                                     USAGE                                          "<<endl;
            cout<<"This program demonstrates a class has two private member variables int*,char[20] and "<<endl;
			cout<<"Usage of constructors ,destructors,operator overloading and members functions to complete the class declaration and definition "<<endl;
	    }
    }
    else
	{
    copyconstructor c1("Copy",9);
    copyconstructor c2=c1; //Copy constructor
    c1.display();
    c2.display();
    cout<<"operato overloading"<<endl;
    copyconstructor c3(20);
     ++c3;
    c3.display1();
    c1.concatenate("Constructor",8);    //c1 is invoking concatenate()
    c1.display();
    c2.display();
	}
    return 0;
}
