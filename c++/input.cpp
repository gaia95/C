#include <iostream>
using namespace std;

int main(){

    double value, x, y; // assigning as double incase input is a float
    cout << "Enter a value: "; 
    cin >> value; // reading data from console 

    cout << "Enter 2 more values: ";

    // saving the 2 next input values 
    cin >> x >> y;
    cout << value + x + y << endl;
   
    return 0;


}