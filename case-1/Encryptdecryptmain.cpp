#include "encryptDecrypt.h"
#include <iostream>
#include<string.h>

using namespace std;
int main(int argc,char *argv[])
{
    EncryptDecrypt Obj;
    if(argc==1)
    {
        cout<<"type -h as a command to view usage of a program"<<endl;
    }
    else if((argc==2)&&(strcmp(argv[1],"-h")==0))
    {
        cout<<"-------------------Usage-----------------";
        cout<<"Enter -e/-d -f [filename] -k [key]"<<endl;
        cout<<"Enter -e/-d -k [key] -f [filename]"<<endl;
    }
    else
    {
            if(strcmp(argv[1],"-e")==0)
            {
                if((strcmp(argv[2],"-f")==0)&&(strcmp(argv[4],"-k")==0))
                {
                    Obj.encrypt(argv[3],argv[5]);
                }
                if((strcmp(argv[2],"-k")==0)&&(strcmp(argv[4],"-f")==0))
                {
                    Obj.encrypt(argv[5], argv[3]);
                }
            }
            else if(strcmp(argv[1],"-d")==0)
            {
                if((strcmp(argv[2],"-f")==0)&&(strcmp(argv[4],"-k")==0))
                {
                    Obj.decrypt(argv[3],argv[5]);
                }
                if((strcmp(argv[2],"-k")==0)&&(strcmp(argv[4],"-f")==0))
                {
                    Obj.decrypt(argv[5],argv[3]);
                }
            }
            else
                cout<<"Please enter -h to get the usage"<<endl;
    }
    return 0;
}
