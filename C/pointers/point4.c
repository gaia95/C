/* Pointers */


#include <stdio.h>
int main(){

    // Declaration and assigning pointer
    double salary,res; 
    double* ptr;
    ptr = &salary;

    // Getting input  
    printf("Enter your current Salary: ");
    scanf("%lf",&salary);

    printf("Your current salary: %lf\n", salary);

    ++salary;
    printf("Salary increased with 2 kr: %lf\n", ++salary); 

    res = ++salary * 2;
    printf("Your salary after 6 months: %lf\n", res); 

    return 0;
}