/*filename	:PrivateMemAccess.cpp
  Author 	:Badari vinay
  Date   	:09/04/2020 
  */
#include <iostream>
#include<stdlib.h>
using namespace std;

// forward declaration of class B. so, that it can specify in friend declaration.
class B;
class A 
{
    private:
      	 // declaring int iNumA as Private variable.
		  int iNumA; 
    public:
    	//constructor for class A
      	A()
		{ 
			cout<<" Class A constructor called"<<endl; 
      		setA();
    		getA();
	  	}
	  	
	  	//setter function
	  	void setA() 
		{
	  		cout<<"\tEnter A value: ";
    		cin>>iNumA;
		} 
		//getter function
		int getA()
		{
			return iNumA;
		}
		// destructorclass for class A with virtual keyword
	  	virtual ~A() 
		{
	  		cout<<"\n Class A destructor called"<<endl;
		}
		
      // friend function declaration
      friend int add(A, B);
};

class B 
{
    private:
       int iNumB;
    public:
       	B()
	   	{ 
	   		cout<<" Class B constructor called"<<endl;
	   		/*this->numB=numB;
			cout<<"\tEnter B value: ";
    		cin>>numB;	*/
    		setB();
    		getB();
	   	}
	   	void setB(){
	  		cout<<"\tEnter B value: ";
    		cin>>iNumB;
		  }
		int getB(){
			return iNumB;
		}
		// destructorclass for class B without any virtual keyword
	    ~B()
	   	{
			cout<<"\n Class B destructor called"<<endl;
		}
       	// friend function declaration
       	friend int add(A , B);
};

// Function add() is the friend function of classes A and B
// that accesses the member variables iNumA and numB
int add(A objA, B objB)
{
   	return (objA.iNumA + objB.iNumB);
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
    A objA;
    B objB;
    
    cout<<"\n Sum: "<< add(objA, objB) <<endl;
    return 0;
	}
}
