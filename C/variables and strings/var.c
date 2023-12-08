/* Variables, Declaration, Definition/initialization (they are the same thing)*/
#include <stdio.h>
#include <stdlib.h>

int main(){

// Declaration and Initializations. Storing characters in variabel
char name[]= "Lina"; // []brackets = list to store several characters in variabel.
int age = 24;
int by = 1997;

// Value stored in the variabels will replace placeholders with the value.
printf("Hi my name is %s.\n", name); // %s is placeholder for strings
printf("I am %d years old.\n", age); // %d is placeholder for integers and atm var 'age'
printf("I was born in %d. \n", by);

age = 25; // changes the current value to something else
printf("I'm turning %d soon.\n", age);

char scentence[] = "Sweden"; // creates an array to store characters
printf("The value saved in the variable 'scentence' is: %s. \n", scentence);


// possible to print like this but better and easier with variables 
printf("Printing %s %d\n", "a number:", 100); 

return 0;
}