/*filename	:PrivateMemAccess.cpp
  Author 	:Badari vinay
  Date   	:09/04/2020 
  */
#include<iostream>
#include<string.h>
using namespace std;
class employee                                        
{
	private:
		int iID;
		string sName;
	        float fSalary;
	public:
	    //parameterized constructor
	    employee(int i,string n,float s)
	    {
		      iID=i;
		      sName=n;
		      fSalary=s;
	    }
	    void display()
	    {
	        cout<<"employee id      : "<<iID<<endl;
	        cout<<"employee name    : "<<sName<<endl;
	        cout<<"employee salary  : "<<fSalary<<endl;
	    }
};
//base class
class base													
{
    public:
        //base class constructor
        base()									
        {
            cout<<"base class constructor"<<endl;
        }
        //virtual member function
        virtual void function()					
        {
            int iVirtualValue=10;
            cout<<"base class function value:"<<iVirtualValue<<endl;
        }
        //virtual destructor
        virtual ~base()							
        {
            cout<<"base class destructor"<<endl;
        }
};
class derived:public base			
{
    public:
        //derived class constructor
        derived()								
        {
            cout<<"derived class constructor"<<endl;
        }
        void function()
        {
           int iValue=20;
           cout<<"derived class function value:"<<iValue<<endl;
        }
        //derived destructor
        ~derived()							
        {
            cout<<"derived class destructor"<<endl;
        }
};
int main(int argc,char *argv[])
{
    if(argc==2)
    {
        //if loop for comparing the input string with "-h"	
	    if(strcmp(argv[1],"-h")==0)	  						
	    {
            cout<<"                                    USAGE                                          "<<endl;
            cout<<"	the private variables in a class and usage of constructing 	"<<endl;
            cout<<" 	and destructing objects with and without virtual "<<endl;
	    }
    }
    else
	{   
        employee e1(191511005,"Badari vinay",25000);
        cout<<"****  DIFFERENT WAYS TO INITIALIZE PRIVATE VARIABLES IN A CLASS ****"<<endl;
        e1.display();
		cout<<"---------------------------------------------------------------------------------"<<endl;
		cout<<"**** ORDER OF THE CONSTRUCTION AND DESTRUCTION OF OBJECTS WITH AND WITHOUT VIRTUAL ****"<<endl;
		//creating the derived class dynamically using base pointer
        base *b=new derived();					
        b->function();
        //derived object creation
        derived d;								
        d.function();
        //freeing the allocated memory
        delete b;								
	}
}
