/* Structure, memebers and variables - declaration and initialization */

#include <stdio.h>

// Person becomes a data type
struct Person {
    // declaring members of struct 
    double salary;
    int age;

}; // per1, per2 (etc) can also be declared here befor ';'

int main(){

   struct Person per1, per2; // as any datatype, this is like creating a var 

    per1.age = 25; // initializing struct memebers and assigning to person 1 variable
    per1.salary = 50000.0;
    printf("Person 1 age: %d\n",per1.age); // accessing struct memeber 
    printf("Person 1 salary: %.2f\n", per1.salary);

    per2.age = 30;
    per2.salary = 75000.0;
    printf("Person 2 age: %d\n",per2.age);
    printf("Person 2 salary: %.2f\n", per2.salary);

    // Doing all of the aove with feewer lines
    struct Person per3 = {.age= 35, .salary = 80000};
    printf("Person 3 age: %d\n",per3.age);
    printf("Person 3 salary: %.2f\n", per3.salary);

    return 0;
}

