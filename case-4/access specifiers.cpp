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
        int Iprivatedata1;
        int Iprivatedata2;
 	protected:
 	    int Iprotecteddata1;
 	    int Iprotecteddata2;
 	public:
 	    int Ipublicdata1;
 	    int Ipublicdata2;
	// Default constructor
 	base() 
 	{
 	   Iprivatedata1 = 1;
 	   Iprotecteddata1 = 2;
 	   Ipublicdata1 = 3;
 	}
 	public:
	
		void show()
		{
			cout<<"\nEnter any 3 values for base class: "<<endl;
				cin>>Iprivatedata2;
				cin>>Iprotecteddata2;
				cin>>Ipublicdata2;
			//Every members can be access here, same class
			cout<<"\nAccessing variable within the class"<<endl;
			
			cout<<"Value of Iprivatedata2		: "<<Iprivatedata2<<endl;
			cout<<"Value of Iprotecteddata2		: "<<Iprotecteddata2<<endl;
			cout<<"Value of Ipublicdata2		: "<<Ipublicdata2<<endl;
		}
	
};
class derive: private base
{
 	public:
 	    void showdata()
 	    {
 	       	   cout <<  "\t   *** Using Accessmode as private***    " << endl;
               cout <<  "\t   privatedata1 is not Accessible because we declared as private " << endl;             
               cout <<  "\t   value of protecteddata1 is   	" << Iprotecteddata1 << endl;
               cout <<  "\t   value of publicdata1 is   	" << Ipublicdata1 << endl;
 	    }
};
class derivea: public base
{
 	public:
 	    void showdata()
 	    {
 	           cout<<   "\t   *** Using Accessmode as protected***  " << endl;
 	           cout <<  "\t   privatedata1 is not Accessible because we declared as private " << endl;
               cout <<  "\t   value of protecteddata1 is   	" << Iprotecteddata1 << endl;
               cout <<  "\t   value of publicdata1 is    	" << Ipublicdata1 << endl;
 	    }
};
class deriveb: protected base
{
 	public:
 	    void showdata()
 	    {
 	       	   cout<<   "\t   *** Using Accessmode as public*** " << endl;;
 	           cout <<  "\t   privatedata1 is not Accessible because we declared as private " << endl;
               cout <<  "\t   value of protecteddata1 is   	" << Iprotecteddata1 << endl;
               cout <<  "\t   value of publicdata1 is   	" << Ipublicdata1 << endl;
 	    }

};
class derivec:	public base
{
		public:
		void show()
		{
			cout<<"\nEnter any 2 values for sub_class: "<<endl;
				cin>>Iprotecteddata2;
				cin>>Ipublicdata2;
			cout<<"\nAccessing variable in Sub class"<<endl;
		
			// privatedata2 is not accessible here it is private
			//publicdata2 is public so it is accessible any where
			cout<<"Value of protecteddata2:	 	"<<Iprotecteddata2<<endl;
			//'protecteddata2' is declared as protected, so it is accessible in sub class
			cout<<"Value of publicdata2: 		"<<Ipublicdata2<<endl;
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
	 // create object
	 base d; 
	 d.show();
	 // create object
	 derivec s; 
	 s.show();    
	 cout<<"\nAccessing variable Outside the class"<<endl;
	//'privatedata2' cannot be accessed as it is private
	//'publivdata2' is public as can be accessed from any where
	//can also access derivec b variable  's.publicdata2'
	cout<<"value of publicdata2: "<<d.Ipublicdata2<<endl; 
	//'protecteddata2' is protected and cannot be accesed here
	//cout<<"value of c: "<<d.b<<endl;
     derive a;
     derivea b;
     deriveb c;
     a.showdata();
     b.showdata();
     c.showdata();

	} 
}
