/*purpose	:Program for calculating the sum of the squares of a given number
  filename	:sum of inetegers.cpp
  Author 	:Badari vinay
  Date   	:08/04/2020
*/

#include<iostream>
#include<string.h>
using namespace std;
//Function Name : SumOfSquares/
int SumOfSquares()
{
		int isum=0;
		int in;
		cout<<"Input	:	";
		cin>>in;
		// Formula for given expression , n(n+1)(2n+1)/6
		isum = (in * (in + 1) * (2 * in+1)) / 6;   
        cout<<"Output	:	"<<isum;	
}
int main(int argc,char* argv[])
{
	//Declaring variables ar required
   	if((argc==2) && (strcmp(argv[1],"-h")==0))
	{               
		{
		    cout<<"----------Usage Of The File---------------"<<endl;
			cout<<"Enter any integer value  "<<endl; 
		}
	}	
	else
	{
		SumOfSquares();
	}
}
