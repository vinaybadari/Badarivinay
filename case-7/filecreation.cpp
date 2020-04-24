/*
filename: filecreation.cpp
details: Program to perform filehandling in 'notes.ini' file
author: Badari vinay
date: 15/04/2020
*/
#include<iostream>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<fstream>
using namespace std;

class ManageConfig{
	
		 string key;
         string value;
           
		void addConfig()
		{                
          cout<<"Enter Config Key : ";
            cin>>key;  
			//getline(cin,key);  
		//	cin.ignore();                    
            cout<<"Enter Config Value : ";
		//	getline(cin, value);
			cin>>value;
            FILE  *file;
            file= fopen("notes.ini","a");
            fprintf(file,"%s = %s\n",key.c_str(),value.c_str());
            fclose(file);
            cout<<"New Config pair is added";
        }
		void listConfig()
		{
                FILE *file;
                file= fopen("notes.ini", "r");
                cout<<"Here is the content of Config file : "<<endl;
                while(fscanf(file,"%s = %s\n", &key[0], &value[0])!= EOF)
				{
                	cout<<key<<"="<<value<<endl;                  
				}
                fclose(file);
                cout<<endl;
        }
 		
 		void editConfig()
		{
                 string fkey;
                cout<<"Enter key to find value : ";
                cin>>fkey;
              //  cin.ignore();
                 string rvalue;
                cout<<"\nEnter value for key : ";
              //  getline(cin, rvalue);
              	cin>>rvalue;
                 string config=" ";
                FILE *file;
                file= fopen("notes.ini", "r");
                while(fscanf(file,"%s = %s\n", &key[0], &value[0])!= EOF)
				{
                        if(strcmp(fkey.c_str(), key.c_str())==0){
                                config += fkey+" = "+rvalue+"\n";
                            }
                        else{
                                config += key +" = "+ value+"\n";
                        }
                }
                fclose(file);
                ofstream out("notes.ini");
    			out << config;
    			out.close();
    			cout<<"Config edited"<<endl;
        }

        void deleteConfig(){
    			 string fkey;
                cout<<"Enter key to find value : ";
                cin>>fkey;
                
				 string config="";
                FILE *file;
                file= fopen("notes.ini", "r");
                while(fscanf(file,"%s = %s\n", &key[0], &value[0])!= EOF)
				{ 
                        if(strcmp(fkey.c_str(), key.c_str())!=0){
                                config += key +" = "+ value+"\n";
                    	}
                    	else{
                    		cout<<"Config Deleted"<<endl;
						}
                }
                fclose(file);
                ofstream out("notes.ini");
    			out << config;
    			out.close();
        }
        public: ~ManageConfig(){
			 FILE *file;
                file= fopen("notes.ini", "r");
                string config="";
                while(fscanf(file,"%s = %s\n", &key[0], &value[0])!= EOF)
				{
                	config+=key+" = "+value+"\n";                  
				}
                fclose(file);
                if(strcmp(config.c_str(),"")==0){
                	remove("notes.ini");
                	cout<<endl<<"File Deleted"<<endl;
				}
			}
		
public:
		   void choices(){
                while(true){

                        cout<<"Manage Config file : "<<endl;
                        cout<<"   1:   AddConfig"<<endl;
                        cout<<"   2:   listconfig"<<endl;
                        cout<<"   3:   editConfig"<<endl;
                        cout<<"   4:   deleteConfig"<<endl;
                        cout<<"   5:   To Exit     "<<endl;
                        cout<<"   Please Enter Your Choice : ";

                        int option;
                        cin>>option;

                        switch (option) {

                                case 1:
                                        addConfig();
                                        break;
                                case 2:
                                		listConfig();
                                		break;
                                case 3:
                                		editConfig();
                                		break;
                                case 4: 
                                		deleteConfig();
                                		break;
                                case 5:
                                        cout<<endl<<"Good bye!";
                                        return;
                                default:
                                        cout<<" Please try again! Invalid option!!! \n";
                                        break;
                        }
                }
        }
};
        
        

int main(int argc, char *argv[]){
	if(argc==2) 
	{
		if(strcmp(argv[1],"-h")==0)     //created a help command
        {
			cout<<"\n Usage of file --> \n"
					"\t filename.exe & enter"<<endl<<
					"\t -Program to perform filehandling in 'notes.ini' file. "<<endl<<
					"\t -select an option from the list "<<endl<<
					"\t -submit data based on the requirement "<<endl<<
					"Note: please don't give any spaces as input of the code maybe fall into infinite loop."<<endl;
		}	
	}
	else
	{
        ManageConfig obj;
        obj.choices();
	}
	return 0;
}
