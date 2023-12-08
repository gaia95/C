/* Conveting temprature */

#include <iostream>
using namespace std;

int main(){

    int farenheit;
    cout << "Farenheit: ";
    cin >> farenheit;

    double celsius = (farenheit - 32) / 1.8;
    cout << celsius << endl; 
  
    return 0;
}