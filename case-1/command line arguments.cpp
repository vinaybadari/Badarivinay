/*purpose	:parse the command line and dispaly the output
  filename	:command line arguments.cpp
  Author 	:Badari vinay
  Date   	:08/04/2020
*/
#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
int main(int argc,char *argv[])
{
    if(argc>=2)
    {
	    if(strcmp(argv[1],"-h")==0)							//if loop for comparing the input string with "-h"
	    {
            		 cout<<"Usage:The main purpose of this program is to calculate the datatype,value and sizeof the value"<<endl;
   		   	 cout<<"user should give the input the following format:"<<endl;
    			 cout<<"Input:"<<"\t"<<"1"<<"\t"<<"a"<<"\t"<<"sss"<<"\t"<<"4.5643"<<endl;
			 cout<<"output is displayed in the form of:"<<endl;
			 cout<<"Type"<<"\t"<<"value"<<"\t"<<"sizeof"<<endl;
			 cout<<"char"<<"\t"<<"a"<<"\t"<<"1"<<endl;
			 cout<<"int"<<"\t"<<"1"<<"\t"<<"4"<<endl;
			 cout<<"string"<<"\t"<<"sss"<<"\t"<<"3"<<endl;
			 cout<<"float"<<"\t"<<"4.5643"<<"\t"<<"4"<<endl;

	    }
    else
    {
	    int iI=1;
	    cout<<argv[0]<<endl;								//printing the filename.exe by using argv[0]
	    cout<<"_______________________________________________________"<<endl;
		cout<<"	 type	"<<"\t"<<"value	"<<"\t"<<"size	"<<endl;
	    while(iI<argc)                                      //while loop for checking the argcount
	    {
		    int iA=atoi(argv[iI]);							//atoi function for converting string to int
		    if(iA==0)									//if the 'if' loop is true then char and string will be displayed
		    {
			    if(strlen(argv[iI])==1)
				    cout<<endl<<"\t char";
			    else
				    cout<<endl<<"\t string";
				    cout<<"\t\t"<< argv[iI]<<"\t\t"<<strlen(argv[iI]);
		    }
		    else									//else case for displaying int and float values
		    {
			    float fB=atof(argv[iI]);
			    if(iA==fB)
			    {
				    cout<<endl<<"\t int"<<"\t\t"<<iA<<"\t\t"<<sizeof(iA);
			    }
			    else
				    cout<<endl<<"\t float"<<"\t\t"<<fB<<"\t\t"<<sizeof(fB)<<endl;
		}
		iI++;
		}
    }
    				cout<<"____________________________________________________";
    }
}
