/* Strings in C++*/

#include <iostream> // standard library 
#include <string> //new c++ string class                             
#include <cstring>//old c-style                                      

using namespace std;

int main () {
string str1 = "Hello"; // Declaration: <datatype>, <variable>, <value>
string str2 = "World";
string str3;
 
 int len ;
 // copy str1 into str3                                             
 str3 = str1;
 cout << "str3 : " << str3 << endl;

 // concatenates str1 and str2                                      
 str3 = str1 + str2;

 // total length of str3 after concatenation                        
 len = str3.size();
 cout << "Size of str3 : "<< len << endl;

 return 0;
 }

