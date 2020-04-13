/*
filename: classdedefinition.cpp
details: int *,chr[30] in private,describle operator overloading, member declarations.
author: Badari vinay
date: 11/04/2020
*/
#include<iostream>
#include<cstring>
#include<stdlib.h>
using namespace std;
class Student
{
//declaration of variables in private
private:
	char cName[20];
	int *iNumb;
public:
	//default constructor
	Student()
	{
		cout<<"\t\t Default constructor invoked"<<endl;
	}
	//parametrised constructor
	Student(char *str)
	{
		cout<<"\t\t Parametrised constructor invoked"<<endl;
		strcpy(cName,str);//coping string
	}
	//Display function
	void Display()
	{
		cout<<"\t\t Rollno: "<<*iNumb<<endl;
	}
	//Show function
	void Show()
	{
		cout<<"\t\t Name: "<<cName<<endl;
	}
	//overloading oprator'+'
	Student operator+(Student s)
	{
		Student temp=cName;
		strcat(temp.cName,s.cName);	//adding two strings
		return temp;
	}
	//setValue function
	void setValue(int *iVal)
	{
		iNumb=iVal;
	}
	//setName function
	void setName(char cName[])
	{
		cName=cName;
	}
	//destructor 
	~Student()
	{
		cout<<"\t\t Destructor invoked"<<endl;
	}
};

int main(int argc,char **argv)
{
	if(argc==2) 
	{
		if(strcmp(argv[1],"-h")==0)     
        {
			cout<<"\n Usage of file --> \n"
					"\t filename.exe & enter"<<endl<<
					"\t Program used to access pointer to integer and char variables. "<<endl<<
					"\t insert an integer and any two strings. ";
		}	
	}
	else
	{	
		int iValue; 
		char fname[30],sname[30]; 
		cout<<"\t\t Enter Rollno:";
		cin>>iValue;
		cout<<"\t\t Surname: ";
		cin>>fname;
		cout<<"\t\t Middle name: ";
		cin>>sname;
		//object declaration
		Student str1(fname);
		Student str2=(sname);
		Student str3;
		Student s;
		str3=str1+str2;
		s.setValue(&iValue);
		s.Display();
		str3.Show();
	}
}
