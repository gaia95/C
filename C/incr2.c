/* Incrementation. ++ is an operator -> increase the value of a variable by 1. */

#include <stdio.h>

int main(){
     
    int x = 0, y = 0;
    int z = 0, res1 = 0, res2;
    
    // Postfix incrementation (x is being used as argument in function call): 
    printf("x Before: %d\n", x++); // current value of x is used first in expression: %d = 0
    printf("x After: %d\n", x); // then -> value incremented with 1 -> 0 + 1 -> x = 1. %d = 1
    
    // Prefix incrementation: 
    printf("y Before: %d\n", ++y); // y value incr first: y = 0 set to 1 -> y = 1. -> used as arg in statement -> %d = 1
    printf("y A fter: %d\n", y); // incr value is assigned to y -> used in the expression -> %d = 1

    // using in statement 
    res1 = ++z * 10; // z incr first: z = 0 -> z = 1. value of z * 10 = 10
    printf("Result z: %d\n", res1);

    res2 = ++x * 10; // x = 20 because x is incre 2 times then * 10
    printf("Result x: %d\n", res2);

    return 0;

}