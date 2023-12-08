/* Swapping numbers */
#include <stdio.h>

int main(){

    double fir, sec, tmp;
    printf("Enter number: ");
    scanf("%lf", &fir);
    printf("Enter another number: ");
    scanf("%lf", &sec);

    tmp = fir; // assigning first input number to temporary var 

    fir = sec; // second input value is assigned to first 

    sec = tmp; // replacing first saved value with second in temporary varibale 
    
    printf("Swapping 1st num: %lf\n", fir);
    printf("Swapping 2nd num: %lf\n", sec);

    return 0;
}