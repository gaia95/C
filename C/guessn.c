/* Exercise: Write a mini game for guessing number 
between 1 to 100 */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    
srand(time(0));
int num=rand()%100; // random numbers generated and saved in num 
int n,count=1;

do{ 
    printf("Guess a number between 1 to 100: ");
    scanf("%d",&n); // reads input from user

    
    if(n>num){ // user guess to big
        printf("Enter a smaller number!!!!\n");
    }
    else if(n<num){ // user guess to small
        printf("Enter a greater number!!!!\n");
    }
    else if(n==num){ // user guess correct
      printf("You got it right %d after %d attempts!!!!\n",num,count); // count amount of tries 
    }
    
    count++; // adds amount of guesses 
    printf("***********************************************\n");
}
while(n != num);

 return 0;
 
}
