/*
filename: access specifiers.cpp
details: Program to demonstrate access specifiers
author: Badari vinay
date: 11/04/2020
*/
#include <iostream>
#include<string.h>
using namespace std;
class base
{
 	private:
        int Ij;
 	protected:
 	    int Ik;
 	public:
 	    int Il;
	// Default constructor
 	base() 
 	{
 	   Ij = 1;
 	   Ik = 2;
 	   Il = 3;
 	}
};
class derive: private base
{
	//Ik and Il becomes private members of class derive and x remains private
 	public:
 	    void showdata()
 	    {
 	       cout <<  "\t   *** Using Accessmode as private***    " << endl;
               cout <<  "\t   j is not Accessible because we declared as private " << endl;             
               cout <<  "\t   value of k is   " << Ik << endl;
               cout <<  "\t   value of l is   " << Il << endl;
 	    }
};
class derivea: protected base
{
	//Ik and Il becomes protected members of class derive
 	public:
 	    void showdata()
 	    {
 	       cout<<   "\t   *** Using Accessmode as protected***  " << endl;
 	       cout <<  "\t   j is not Accessible because we declared as private " << endl;
               cout <<  "\t   value of k is   " << Ik << endl;
               cout <<  "\t   value of l is    " << Il << endl;
 	    }
};
class deriveb: public base
{
	 	//Ik becomes protected and Il becomes public members of class derive
 	public:
 	    void showdata()
 	    {
 	       cout<<   "\t   *** Using Accessmode as public*** " << endl;;
 	       cout <<  "\t   j is not Accessible because we declared as private " << endl;
               cout <<  "\t   value of k is   " << Ik << endl;
               cout <<  "\t   value of l is   " << Il << endl;
 	    }
};
int main(int argc,char *argv[])
{
	if(argc==2) 
	{
		// help command
		if(strcmp(argv[1],"-h")==0)     
        	{
			cout<<"\n Usage of file --> \n"
					"\t filename.exe & enter"<<endl<<
					" Program used to demonstrate different access specifiers "<<endl;
		}	
	}
	else
	{
     derive a;
     derivea b;
     deriveb c;
     a.showdata();
     b.showdata();
     c.showdata();
     return 0;
	} 
}
