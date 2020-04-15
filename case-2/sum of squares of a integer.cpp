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
		int inum;
		cout<<"Input	:	";
		cin>>inum;
		// Formula for given expression , n(n+1)(2n+1)/6
		isum = (inum * (inum + 1) * (2 * inum+1)) / 6;   
		// shows the sum of squares of given number
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
