/*
filename: access specifiers.cpp
details: Program to demonstrate access specifiers
author: Badari vinay
date: 11/04/2020
*/
#include <iostream>
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
 	public:
 	    void showdata()
 	    {
 	           cout <<  "   *** Using Accessmode as private***    " << endl;
               	   cout <<  "   j is not Accessible because we declared as private " << endl;             
               	   cout <<  "   value of k is   " << Ik << endl;
                   cout <<  "   value of l is   " << Il << endl;
 	    }
};
class derivea: protected base
{
 	public:
 	    void showdata()
 	    {
 	           cout<<   "   *** Using Accessmode as protected***  " << endl;
 	           cout <<  "   j is not Accessible because we declared as private " << endl;
               	   cout <<  "   value of k is   " << Ik << endl;
                   cout <<  "   value of l is    " << Il << endl;
 	    }
};
class deriveb: public base
{
 	public:
 	    void showdata()
 	    {
 	           cout<<   "   *** Using Accessmode as public*** " << endl;;
 	           cout <<  "   j is not Accessible because we declared as private " << endl;
                   cout <<  "   value of k is   " << Ik << endl;
                   cout <<  "   value of l is   " << Il << endl;
 	    }
};
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
     derive a;
     derivea b;
     deriveb c;
     a.showdata();
     b.showdata();
     c.showdata();
     return 0;
	} 
}
