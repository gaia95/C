/* Functions and if else satser */

#include <stdio.h>
#include <stdlib.h>

// Declaring and initializing function 
int max(int num1, int num2, int num3){
    int result;
    if (num1 >= num2 && num1 >= num3){ // if bigger than both expressions 
        result = num1; // return this
    }
    else if (num2 >= num1 && num2 >= num3){
        result = num2;        
    }
    else {result = num3; 
    }

return result;

}

int main(){

    printf("Biggest value: %d .\n", max(11,10,15)); // passing arguments while calling function
    return 0;
}
