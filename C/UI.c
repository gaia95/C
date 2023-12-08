/* User input */ 

#include <stdio.h>

int main(){

// Declaring variable where UI is saved
int age;
char name[20]; // 20 = allowed size of array variable
char s[10];

printf("Enter your name: "); // prompting user
scanf("%s", name); // listens and saves UI 
printf("Hello %s.\n", name);

printf("Enter your age: ");
scanf("%d", &age); 

if (age > 24) 
    {printf("Are you having a quater life crisis yet?: ");
        scanf("%s", s);}
        
else printf("You are %d years old.\n", age);

fgets(name, 20, stdin); // fgets is easier when getting string from a user

return 0;
}