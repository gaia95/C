/* Using a switch write a C program to display a simple calculator.
   We want to print the data 3 decimals.
   For example for an addition the output should be:

   2.345 + 1.111 = 3.456

   The calculator should also print out : "Error! wrong operator" if the operator is not +,-,*, or ^ (pow) */

#include <stdio.h>
#include <math.h>

int main()
{
  float n1,n2; // Declaring 2 float variables. will be used later as operands.
  char operator; // A char variable. Stores our choice of the operator we want to use.

  printf("Enter an operator(+,-,/,*,^): ");
  scanf("%c",&operator); // Taking input from user. 

  printf("Enter two numbers: ");
  scanf("%f%f",&n1,&n2); // float inpus saved in variables.
  
  switch(operator) // switch statement will decide case to excecute depending on which operator user want.
  {
    case'+' : printf("%.3f + %.3f = %.3f\n", n1,n2,(n1+n2)); // 3f allows 3 decimals after (.)
              break;
    case'-' : printf("%.3f - %.3f = %.3f\n", n1,n2,(n1-n2));
              break;
    case'/' : printf("%.3f / %.3f = %.3f\n", n1,n2,(n1/n2));
              break;
    case'*' : printf("%.3f * %.3f = %.3f\n", n1,n2,(n1*n2));
              break;
    case'^' : printf("%.3f ^ %.3f = %.3f\n", n1,n2,pow(n1,n2));
              break;
    default : printf("Error! Operator is wrong or does not exist.\n");

  }
  
  return 0;
}
