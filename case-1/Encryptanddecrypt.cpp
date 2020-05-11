/*File Name     :encryptandDecrypt.cpp
  Author Name   :M.Badari vinay
  Created Date  :09-05-2020
  Description   :To encrypt and decrypt the data in the file*/
  
#include <bits/stdc++.h> 
#include <iostream>
#include <conio.h>
#include<fstream>
#include <string>

using namespace std;

string filename,key,t;          //declaration of string names filename,key used for password and t;
void encrypt()
{
    ifstream myfile;          //ifstream is used to read the file
    myfile.open("vinay.txt"); // here give file name to encrypt 
            ofstream outfile;        //ofstream is used to write in a file (outfile is an instance of ofstream)
        	outfile.open("Encrypted.txt");   
            string line;
            cout<<"=============================="<<endl;

            cout<<"Encrypting............  "<<endl;

            cout<<"=============================="<<endl;
            outfile << key << endl;
            while(getline(myfile , line))        //copying all the words of file into line;
            {
            string text;       
            char space=' ';    
            int index=0;
            int found = line.find(space);
                    while(found != string::npos)
                    {
                        int x=found-index;
                        string word=line.substr(index,x);
                        //cout<<word << index <<found<<endl;
                        reverse(word.begin(), word.end());           
                        //cout<< word <<endl;
                        text=text+word+"*";
                        index=found+1;
                        found = line.find(space,index);
                    }
                    if(index<line.size())
                    {
                        string word=line.substr(index);
                        reverse(word.begin(), word.end());
                        text=text+word;
                    }
                
                outfile << text << endl;
                myfile.ignore();

            }
            myfile.close();     
            outfile.close();
            cout<<"=============================="<<endl;

            cout<<"Encrypted and saved on Encrypted.txt"<<endl;

            cout<<"=============================="<<endl;
        
}
//function to decrpyt
void decrypt()
{
    ifstream myfile;
    myfile.open("Encrypted.txt");
    
        string line;
        
        ofstream outfile;
        outfile.open("Decrypted.txt");

        getline(myfile , line);
        if(key==line)             //if password matches then you can decrpyt the file 
        {
            while (getline(myfile , line))
            {                                   
                string text;                      
                char special_char='*';
                int index=0;
                int found = line.find(special_char);
                //cout<<line<<".."<<endl;                                
                    while(found != string::npos)
                    {
                        int x=found-index;
                        string word=line.substr(index,x);
                        //cout<<word << index <<found<<endl;
                        reverse(word.begin(), word.end());
                        //cout<< word <<endl;
                        text=text+word+" ";
                        index=found+1;
                        found = line.find(special_char,index);
                    }
                    if(index<=line.size())
                    {
                        string word=line.substr(index);
                        reverse(word.begin(), word.end());
                        text=text+word;
                    }
                
                outfile << text << endl;
                myfile.ignore();

            }
            cout<<"=============================="<<endl;

            cout<<"Decrypted and save on file: Decrypted.txt......"<<endl;

            cout<<"=============================="<<endl;
            myfile.close();    
            outfile.close();
        }      
        else
            cout<<"Key does not match :<"<<endl;
}
int main(int argc,char* argv[])
{
    if(argc==1)
    {
        cout<<"use "<<argv[0]<<" -h command"<<endl;
    }
    else if(argc==2 && strcmp(argv[1],"-h")==0)
    {
        cout<<argv[0]<<" -d/-e -f  -k "<<endl;
    }
    else
    {
    	if(strcmp(argv[1],"-e")==0)
    	{
    		if(strcmp(argv[2],"-f")==0)
    		{
    			key=argv[5];
    			encrypt();
    			
			}
			else if(strcmp(argv[4],"-f")==0)
			{
				key=argv[3];
				encrypt();
			}
		}
		else if(strcmp(argv[1],"-d")==0)
		{
			if(strcmp(argv[2],"-f")==0)
			key=argv[5];
				decrypt();
			
			}
			else if(strcmp(argv[1],"-d")==0)
			{
				if(strcmp(argv[4],"-f")==0)
				key=argv[3];
				decrypt();
			}
		}
	}
