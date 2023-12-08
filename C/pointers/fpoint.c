/* Function Pointers - work like normal pointers but point to a function instead. 
Functions are also stored in memory but in form of instruction */

#include <stdio.h>

void fun(int a){
    printf("A: %d\n",a);
}

double add(double x, double y){
    return x+y;
}

int main(){
   
    void (*funp)(int); // Declaring function pointer

    funp = &fun; // storing memory adress of function 'fun' in 'funp'
    (*funp)(4); // function call and giving arg
    
    double (*addp)(double, double) = &add; // pointer for add func
    double a = 20, b = 30;

    double result = addp(a,b);
    printf("Result: %f\n", result);

    return 0; 
}