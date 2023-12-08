/* Exercise 3: Friday 28 October - Pointers and adresses */

#include <stdio.h>

int main(){
  // Declartion and definition
  int m=30;
  float fx=300.60;
  char cht='z';

  // Printing the addresses of m, fx and cht. 
  printf("Address of m: %p\n",&m);
  printf("Address of fx: %p\n",&fx);
  printf("Address of cht: %p\n",&cht);

  // Declaring pointers for the variables  
  int *pt1;
  float *pt2;
  char *pt3;

  // Assigning pointers to variables to find their adress in memory
  pt1=&m;
  pt2=&fx;
  pt3=&cht;

  // printing the values of m, fx and cht.
  printf("\nValue of m without using pointer: %d\n",m);
  printf("Value of fx without using pointer: %f\n",fx);
  printf("Value of cht without using pointer: %c\n",cht);

  // printing the values of m, fx and cht using pointers. 
 
  printf("\nValue of m using pointer: %d\n",*pt1);
  printf("Value of fx using pointer: %f\n",*pt2);
  printf("Value of cht using pointer: %c\n",*pt3);

  return 0;

}