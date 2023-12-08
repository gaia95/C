/* Q&A 2: Skriv ett program som skriver ut ojämna tal från 1-31
med hälp av en loop.

OUTPUT: 1 3 5 7 9 11 13 15 17 19 21 23 25 27 29 31 */

#include <stdio.h>
#include <string.h>

int main(){
int i; // index inside for loop for the elements, also saves the odd values.
    
    // skriver ut ojämna tal så länge variabel inte har loopat igenom alla element
    for (i=1; i<32;i++){ 
        if(i%2 == 1){ // om index tal inte är delbart med 2 = udda tal.
            printf("%d ",i); // skriver ut de udda talen.
        }
    }

    puts(""); // new line
    return 0;
}