// Odd or even with 
#include <stdio.h>
int main()
{
  int n;

  printf("Input an integer: ");
  scanf("%d", &n);

if (n%2 == 0) // om int är jämnt delbart med 2 utan rester
 printf("Even\n");

else 
  printf("Odd\n");

  return 0;
}
