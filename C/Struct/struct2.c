/* Typedef in Structures - declaration and initialization. 
typedef is used to make the code shorter.*/

#include <stdio.h>

// creating an alias
typedef struct Person {
    double salary;
    int age;

} person; // person can now be used as an alias for struct

int main(){

   person per1; // creating struct variable 
   
   per1.age = 25; // initializing struct memebers and assigning to person 1 variable
   per1.salary = 50000.0;
   printf("Person 1 age: %d\n",per1.age); // accessing struct memeber 
   printf("Person 1 salary: %.2f\n", per1.salary);

    return 0;
}