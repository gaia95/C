/* Structure - subtracting with complex numbers */

#include <stdio.h>

typedef struct Complex {

    double real;
    double imagine;

} complex; // alias for the structure 

int main(){

   complex c1 = {.real = 21.87, .imagine = 30}; // declaring and initializing struct var
   complex c2 = {.real = 13.34, .imagine = 112.23};
   complex c3 = {.real = 15.47, .imagine = 55.53};
   complex diff; 

   diff.real = c1.real - c2.real - c3.real ; // storing difference of real num c1 & c2
   diff.imagine = c1.imagine - c2.imagine - c3.imagine; // -""- imaginary 

    printf("Result is: %.2lf - %.2lfi \n", diff.real, diff.imagine); // accessing struct memeber 
    

    return 0;
}