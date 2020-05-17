/*File Name     :Lettercombination.cpp
  Author Name   :M.Badari vinay
  Created Date  :16-05-2020
  Description   :possible letter combinations that the number could represent. 
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <string.h>
#include "Lettercombination.h"
using namespace std;
vector<int> Lettercombination::getNumber()
{
   int Iletter;
   cout<<" Enter how many numbers"<<endl;
   cin>>Iletter;
   string line;

   cout << "Enter a " << Iletter <<"-digit number using the digits 2-9 only: ";
   cin>>line;
   while( line.size() != Iletter || line.find_first_not_of( "23456789" ) != string::npos )
   {
      cout << "Invalid number; try again: ";
      cin>>line;
   }

  vector<int>digits(Iletter);
   for ( int i = 0; i < Iletter; i++ ) digits[i] = line[i] - '0';
   return digits;
}
