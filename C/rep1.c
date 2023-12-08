#include <stdio.h>

struct Student{
    char name[15];
    int age; 
};  // glöm inte semikolon efter start av struktur

int main(){

// Declaring and initializing 2 instances of the structure
 struct Student st1={"Dennis", 32};
 struct Student st2={"Richie", 50};
 struct Student *pst1, *pst2;

 pst1=&st1; // *pst1 and st1 are equivalent
 pst2=&st2; // *pst2 and st2 are equivalent

printf("%s %d\n", st1.name, st1.age);
printf("%s %d\n", st2.name, st2.age);

// Printing instanses using pointers
printf("%s %d\n", (*pst1).name, (*pst1).age); 
printf("%s %d\n", (*pst2).name, (*pst2).age);

/* Alternativ way using '->' operator
printf("%s %d\n", pst1 -> name, pst1 -> age); 
printf("%s %d\n", pst2 -> name, pst2 -> age);
*/
 
 return 0;
}