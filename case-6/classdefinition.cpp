/*
filename: classdedefinition.cpp
details: int *,chr[30] in private,describle operator overloading, member declarations.
author: Badari vinay
date: 11/04/2020
*/
#include<iostream>
#include<string.h>
using namespace std;
class Team
{
      //declaration of variables in private
		  int *batchno;					
	    char name[20];				
	public:
	    //default constructor
		Team()					
	    {
	        cout<<"\t\t Default constructor  called"<<endl;
	    }
	    //parameterized constructor
	    Team(char *teamname)			
	    {
	        strcpy(name,teamname);
	        cout<<"\t\t Parameterized constructor  called"<<endl;
	    }
	    void display()
	    {
	        cout<<"\t\t Team name:"<<name<<endl;
	    }
	    //+ operator overloading
	    Team operator+(Team s)				 
	    {
	        Team temp=name;
	        strcat(temp.name,s.name);
	        return temp;
	    }	
	    // destructor
	    ~Team()							
	    {
		    cout<<"\t\t Team destructor"<<endl;
	    }
	    friend int increment();
};
// function declaration
int increment()
{   
    int a[2]={10,11};
    int *batchno;										
    batchno=&a[0];
    cout<<"\t\t Batch number before incrementation:"<<*batchno<<endl;
    batchno++;							
    cout<<"\t\t Batch number after incrementation: "<<*batchno<<endl;
}
int main(int argc,char *argv[])
{
    if(argc>1) 
	{
		cout<<"\n Usage of file --> \n"
		"\t filename.exe and enter"<<endl<<
		"		or"<<endl<<
		"\t ./filename.out and enter"<<endl;
	}
	else
	{
		//calling parameterized constructor
        Team a1("  Vijayawada");			
        Team a2("	PNP ");
        Team a3;
        a3=a2+a1;				
        a3.display();
        increment();
    }
}
