/*purpose	:Program for calculating the sum of the squares of a given number
  filename	:sum of inetegers.cpp
  Author 	:Badari vinay
  Date   	:08/04/2020
*/

#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
// function name : formula 
//  parameters    : int

int formula()  
{
	int isum=0;
	int in;
		cout<<"Input	:	";
		cin>>in;
        	// Formula for given expression , n(n+1)(2n+1)/6
		isum = (in * (in + 1) * (2 * in+1)) / 6;   
        	cout<<"Output	:	"<<isum;
}
int main(int argc,char *argv[])
{
    if(argc>=2)
    {
	    if(strcmp(argv[1],"-h")==0)					
	    {
            cout<<"Usage:The main purpose of this program is to find the formula for given expression "<<endl;
            cout<<"	input	:	4"<<endl;
            cout<<"	output	:	30"<<endl;
	    }
    }
	else
	{
         formula();
    }
    
}
