#ifndef EncryptDecrypt_H
#define EncryptDecrypt_H
#include<iostream>
#include<fstream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
class EncryptDecrypt
{
	string filename,key,t;
public:
	EncryptDecrypt()
	{
  	string filename,key,t;
	}		
	~EncryptDecrypt()
    {
        cout<<"deallocating memory";
    }
    void encrypt(char *arg1);
    void decrypt(char *key);
};
#endif
