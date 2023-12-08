/* Functions With user input.
- you can declare functions and then put them to use later
or initialize them at once */ 

#include <stdio.h>
int addnum(int a, int b); // declration without actual body

int addnum(int a, int b){ // Declartion and initialization 
    int result;  
    result = a + b;
    return result;
}

int main(){

    int n1, n2, sum; // declaring variable
    printf("Enter two numbers: "); // UI
    scanf("%d %d", &n1, &n2); // & = adress for variables after values been saved

    sum = addnum(n1, n2); // function call and saving UI
    printf("Sum = %d \n", sum);

    return 0;
}