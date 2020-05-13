#ifndef EncryptDecrypt_H
#define EncryptDecrypt_H
#include<iostream>
#include<fstream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
class EncryptDecrypt
{
public:
  	string filename,key,t;  
    void encrypt(char *arg1);
    void decrypt(char *key);
};
#endif
