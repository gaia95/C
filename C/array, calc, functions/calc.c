/* Calculator */
#include <stdio.h>
#include <stdlib.h>

int main(){
    
    double num1, num2;
    char op; // operator

    printf("Enter a number: "); // UI
    scanf("%lf", &num1); // lf scans for a double. saves it in var with adress in the memory. 
    printf("Enter operator: ");
    scanf(" %c", &op);
    printf("Enter a number: ");
    scanf("%lf", &num2);

   /* Does this not work?
    if (op != %c){
        printf("Not an operator. Try again!");
    } */

    if(op == '+'){
        printf("%lf\n", num1 + num2);
    }
    else if (op == '-'){
        printf("%lf\n", num1 - num2);
    }
    else if (op == '/'){
        printf("%lf\n", num1 / num2);
    }
    else if (op == '*'){
        printf("%lf\n", num1 * num2);
    }
    else {
        printf("\nInvalid Operator.\n");
    }

    return 0;
}