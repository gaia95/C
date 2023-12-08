/* Pointers - working with computer memory. Pointers store the memory adress of a variable. */
 
#include <stdio.h>
int main(){

    int age = 25;
    int ua; // var for user input 

    int* ptr;
    int* ptr2;
    ptr = &age, ptr2 = &ua; //assigning pointer to var

    printf("Memory Adress of 'age': %p\n", &age);
    printf("Adress of it's value: %p\n", &age); // %p = format specifier for pointer to print adress. & = to access memory adress
    printf("Value: %d\n", *ptr); // accessing value of var 'age' using pointer
    
    printf("Enter your age: ");
    scanf("%d",&ua); // &ua = instructing compiler to store input value specified by var
   
    printf("Memory Adress of 'ua': %p\n", &ua);
    printf("Adress of it's value: %p\n", ptr2);
    printf("Value: %d\n", *ptr2); // acessing value 
    
    return 0;
}
