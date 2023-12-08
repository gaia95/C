/* Incrementation. ++ is an operator -> increase the value of a variable by 1. */

#include <stdio.h>

int main(){
    int x =1, j=1, res1, res2;
    
    // prefix incr: ++x is done first
    res1 = 5 + ++x; // x = 1 + incr -> 1 + 1 = 2 then -> 2 + 5 = 7
    printf("Result 1: %d\n",res1);

    // postfix incr, cloning j and using in statement -> 5 + 1 = 6. j gets new value -> 1 + 1 = 2
    res2 = 5 + j++; 
    printf("Result 2: %d\n",res2);
    return 0;

}