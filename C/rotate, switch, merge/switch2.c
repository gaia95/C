/* Swtich - Ask user to enter a week number (1-7)
using a switch and for loop to print corresponding day of the week
*/

#include <stdio.h>

int main (){

    enum week{Monday=1, Tuesday, Wednesday, Thursday,Friday, Saturday, Sunday};

int day;

for(day=Monday; day<=Sunday;day++)
    printf("%d ",day);
puts("");

switch (day){
    case 1: 
        puts("Monday");
        break;
    case 2: 
        puts("Tuesday");
        break;
    case 3: 
        puts("Wendesday");
        break;
    case 4: 
        puts("Thursday");
        break;
    case 5: 
        puts("Friday");
        break;
    case 6: 
        puts("Saturday");
        break;
    case 7: 
        puts("Sunday");
        break; 
    default:
        puts("Invalid input! Please enter week number.");

    } 

return 0;   

}


