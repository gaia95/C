/* Dice game  */
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main (){

    const short maxVal = 6;
    const short minVal = 1;

    srand(time(0)); 
    short first = (rand() % (maxVal + minVal + 1) + minVal); // gives a random number between 1 - 6
    short second = (rand() % (maxVal + minVal + 1) + minVal);   
    cout << first << ", " << second << endl;
    
    return 0;
}