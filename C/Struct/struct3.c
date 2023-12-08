/* Structure - adding with complex numbers */

#include <stdio.h>

typedef struct Complex {

    double real;
    double imagine;

} complex; // alias for the structure 

int main(){

   complex c1 = {.real = 21.87, .imagine = 30}; // declaring and initializing struct var
   complex c2 = {.real = 13.34, .imagine = 112.23};
   complex sum; 

   sum.real = c1.real + c2.real; // storing sum of real num c1 & c2
   sum.imagine = c1.imagine + c2.imagine; // -""- imaginary 

    printf("Result is: %.2lf + %.2lfi \n", sum.real, sum.imagine); // accessing struct memeber 
    

    return 0;
}