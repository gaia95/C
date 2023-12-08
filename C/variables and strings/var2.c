/* Deeclaration and initialization of variables and functions */

#include <stdio.h>
#include <stdlib.h>

// Defining variables, telling compiler that they exist and will be used 
// Integer, character, decimal, result as an integer
// Declaration Definition/initialization = asigning a value to variable 

int num = 10;
char ch = 'M';
double n1 = 1.5393;
float f1 = 2.5;
int result;

int add(){
    result = num + n1 + f1;
    return result;
}

int main(){

    add();
    printf("%d, %f, %lf\n", num, f1, n1); // int, double, float, important to have them in the right order!!
    printf("%c\n",ch);

    return 0;
}


