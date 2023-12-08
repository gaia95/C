/* Arrays - Different ways to declare */
#include <stdio.h>
#include <stdlib.h>

int main(){

    int numbers[]={1,2,3,4,5}; // Array declaration
    printf("Index 3 and 1 hold values: %d , %d\n", numbers[3],numbers[1]); // calls function and desired number with index  
    int lnum[5]; // array declaration and it's capacity. Can only hold 5 elements
    lnum[0]=25; // Initializing the first element value of array
    printf("Value 1: %d\n",lnum[0]);

    return 0;
}
