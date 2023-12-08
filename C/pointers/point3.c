/* Pointers - Mistakesb  (can only store memory adress ) - revising / changing pointer */

#include <stdio.h>
int main(){

    int num;

    int* ptr ;

    // DO NOT !!!
    ptr = num;  // invalid cause num != memory adress
    *ptr = &num;  // invalid cause *ptr gives value meanwhile &num gives memo adress

    // DO
    ptr = &num;  // valid cause both represent memory adress

    printf("%d\n" );

    return 0;
}