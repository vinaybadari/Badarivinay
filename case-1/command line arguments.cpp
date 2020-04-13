/*purpose	:parse the command line and dispaly the output
  filename	:command line arguments.cpp
  Author 	:Badari vinay
  Date   	:08/04/2020
*/
#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

//function to check length of string is '1' or not
bool checkDatatype(string sStr);

//main using command line arguments
int main(int argc,char *argv[])
{
	if((argc<=2) || (strcmp(argv[1],"-h")==0))
		{
			//if loop for comparing the input string with "-h" and displaying the usage	              
	    	{
	    		cout<<"              Usage Of The File           "<<endl;
				cout<<argv[0]<<"datatype1 datatype2 .... datatypeN "<<endl; 
	    	}
	}
    else
    {
	    int iJ=2;
	    cout<<"_______________________________________________________"<<endl;
		cout<<"	 type	"<<"\t"<<"value	"<<"\t"<<"size	"<<endl;
	    //while loop for checking the argcount
		while(iJ<argc)                                      
	    {
		    //atoi function for converting string to int
			int iA=atoi(argv[iJ]);						
		    if(iA==0)									
		    {
			    if(strlen(argv[iJ])==1)
				    cout<<endl<<"\t char";
				else
				    cout<<endl<<"\t string";
				    cout<<"\t\t"<< argv[iJ]<<"\t\t"<<strlen(argv[iJ]);
		    }
		    //else case for displaying int and float values
			else									
		    {
			    float fB=atof(argv[iJ]);
			    if(iA==fB)
			    {
				    cout<<endl<<"\t int"<<"\t\t"<<iA<<"\t\t"<<sizeof(iA);
			    }
			    else
				    cout<<endl<<"\t float"<<"\t\t"<<fB<<"\t\t"<<sizeof(fB)<<endl;
		}
		iJ++;
		}
    }
    }
    
//function to check length of string is '1' or not
bool checkDatatype(string sStr)
{
	int iLength;
	for(iLength=0;sStr.length()==1;iLength++)
	{
		return true;
	}
}
