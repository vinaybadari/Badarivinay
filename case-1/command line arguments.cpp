/*
filename: command line arguments.cpp
details: Program to parse the command line and dispaly the output
author:Badari vinay
date:07/04/2020
*/

#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
//Function to check the datatype of Arguments.
void TypeCheck(char *argv)
{
	
		    //atoi function for converting string to int
			int iInt=atoi(argv);						
		    if(iInt==0)									
		    {
			    if(strlen(argv)==1)
			    {
				    cout<<endl<<"\t char";
				    cout<<"\t\t"<<argv<<"\t\t"<<strlen(argv);
			    }
				else
				{
				    cout<<endl<<"\t string";
				    cout<<"\t\t"<< argv<<"\t\t"<<sizeof(argv);
		        }
	        }
		    //else case for displaying int and float values
			else									
		    {
			    float fFloat=atof(argv);
			    if(iInt==fFloat)
			    {
				    cout<<endl<<"\t int"<<"\t\t"<<iInt<<"\t\t"<<sizeof(iInt);
			    }
			    else
				    cout<<endl<<"\t float"<<"\t\t"<<fFloat<<"\t\t"<<sizeof(fFloat)<<endl;
		}
		}
int main(int argc,char *argv[])
{
	if((argc==2)&&(strcmp(argv[1],"-h")==0))
	{
	//if loop for comparing the input string with "-h" and displaying the usage	
	    	//if(strcmp(argv[1],"-h")==0)                 
	    	{
	    		cout<<"              Usage Of The File           "<<endl;
				cout<<argv[0]<<"  datatype1  datatype2 .... datatypeN "<<endl; 
	    	}
	}
	else if(argc==1)
	{
		cout<<"In parameters give -h to display usage "<<endl;
	}
	
	else 
	{
		cout<<"\t type"<<"\t"<<"\t Value"<<"\t"<<"\t Size"<<endl;
		for(int i=1;i<argc;i++)                         
		{
			
			TypeCheck(argv[i]);
		}
	}
	
}
