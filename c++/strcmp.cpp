/* Q7: string handling - create string "Hello" in an array namned greeting. */

#include <iostream>
#include <string>

using namespace std;

int main(){
char greeting[6] = {'H','e','l','l','o','\0'}; //C-style 
// char greeting[] = "Hello"; // C++ style

string str1, str2;
str1 = "Hello ";
str2 = "World";

cout << greeting << endl;
cout << str1 << str2 << endl;
cout << str1 + str2 << endl;
cout << str1.size() << endl;
str2 = str1;

cout << "Adress of str1:";
cout << &str1 << endl;

str1 = "Hello";
str2 = "World";

if (str1 > str2)
    cout << "str1 is greater than str2" <<endl;
else 
    cout << "str2 is greater than str1" <<endl;

return 0;

}
