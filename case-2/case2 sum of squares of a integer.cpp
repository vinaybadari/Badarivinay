/*case 2:Find the formula for given expression and write the program for the given input expression:1+4+9+16+....+100*/
/*purpose	:Program for calculating the sum of the squares of a given number
  filename	:case2.cpp
  Author 	:Badari vinay
  Date   	:08/04/2020
*/

#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
int formula()  // function name : formula 
	      //  parameters    : int
{
	int isum=0;
	int in;
		cout<<"Input	:	";
		cin>>in;
        	isum = (in * (in + 1) * (2 * in+1)) / 6;   // Formula for given expression , n(n+1)(2n+1)/6
        	cout<<"Output	:	"<<isum;
}
int main(int argc,char *argv[])
{
    if(argc>=2)
    {
	    if(strcmp(argv[1],"-h")==0)					//if loop for comparing the input string with "-h"
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
