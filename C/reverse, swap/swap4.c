/* Swapping two values using function and call by value(method to pass value). 
To swap -> save the input in temorary variable and then assign the value to a different one.
 */
#include <stdio.h>

// Swapping logic

void swap(int x, int y){ // variable x and y hold copies of the input value in var 'a' and 'b'
    int temp; 

    temp = x; // x value is assigned to temp
    x = y;
    y = temp; // assigning value of temp to y
    printf("After swap: a= %d, b= %d\n",x,y); // void function returns nothing therefore print statement

}

int main(){

    int a,b;
    printf("Enter values for a and b:\n");
    scanf("%d%d", &a, &b); // listening for values, saves in adress

    printf("Before swap: a= %d, b= %d\n",a,b);

    swap(a, b); // function call and calling by value

    return 0;
}