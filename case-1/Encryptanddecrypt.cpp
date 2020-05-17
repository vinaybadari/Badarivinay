/*File Name     :encryptandDecrypt.cpp
  Author Name   :M.Badari vinay
  Created Date  :09-05-2020
  Description   :To encrypt and decrypt the data in the file*/
  
#include <bits/stdc++.h> 
#include <iostream>
#include <conio.h>
#include<fstream>
#include <string>
#include"EncryptDecrypt.h"
using namespace std;
void EncryptDecrypt::encrypt(char* cfile,char *arg1)
{ 
    ifstream infile(cfile);
    if(infile)
 	{
 	ofstream outfile;        
    outfile.open("Encrypted.txt"); 
	if(!outfile) 
	{
		cout<<"Error in opening file";
	 } 
    string line;
    cout<<"=============================="<<endl;
    cout<<"Encrypting............  "<<endl;
    cout<<"=============================="<<endl;
    outfile <<key<<arg1<<endl;
	while(getline(infile , line))      
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
                infile.ignore();
	}
        infile.close();     
        outfile.close();
        cout<<"=============================="<<endl;
        cout<<"Encrypted and saved on Encrypted.txt"<<endl;
        cout<<"=============================="<<endl;
	}
        else
        {
        	cout<<"file not exits";
		}
}
void EncryptDecrypt::decrypt(char* cfile, char *key)
{
	ifstream infile(cfile);
	if(infile)               
    {
   	string line;    
    ofstream outfile;
    outfile.open("Decrypted.txt");
    getline(infile , line);
    if(key==line)
 	{
 		while (getline(infile, line))
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
                infile.ignore();
			}
            cout<<"=============================="<<endl;
            cout<<"Decrypted and save on file: Decrypted.txt......"<<endl;
            cout<<"=============================="<<endl;
            infile.close();    
            outfile.close();
		}  
        else
        {
            cout<<"key not found"<<endl;
    	}
	}
	else
	{
		cout<< "no such file"<<endl;
	}
}
