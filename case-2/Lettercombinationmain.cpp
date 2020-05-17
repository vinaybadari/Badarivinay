#include "Lettercombination.h"
#include <iostream>
#include<string.h>

using namespace std;
int main(int argc,char* argv[])
{
	Lettercombination Obj;
    if(argc==2 && strcmp(argv[1],"-h")==0)
    {
        //created help command
        cout<<"Enter Number from 2 to 9 to get lettercombination"<<endl;
    }
    else
    {
   vector<string> keyboard = { "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };
   vector<int> digits = Obj.getNumber();
   vector<string> wordlist(1,"");
   vector<string> temp;

   for ( int i : digits )
   {
      for ( string s : wordlist )
      {
         for ( char c : keyboard[i] ) temp.push_back( s + c );
      }
      wordlist = temp;
      temp.clear();
   }
   for ( string s : wordlist ) cout << s << endl;
}
}
