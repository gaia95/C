/* Pointers - change value of variable using pointer variable */

#include <stdio.h>
int main(){

    int age = 25;
    int* ptr = &age; //assigning pointer to var
    printf("1st Value of  age: %d\n",age);

    *ptr = 31; // assigning new value 

    printf("New Value of age: %d\n", age);
       
    return 0;
}