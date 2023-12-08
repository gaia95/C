/* Swapping Values in c++*/

#include <iostream>

using namespace std;

int main(){

    int a = 1, b = 2, temp;

    cout << "A before swap: " <<  a << endl;
    cout << "B before swap: " <<  b << endl;

    temp = a; // empty value from variable
    a = b; // give it new value
    b = temp; // assign b to temp value


    cout << "A after swap: " <<  a << endl;
    cout << "B after swap: " <<  b << endl;


}