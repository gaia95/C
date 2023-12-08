//Exercise: Reverse an inputted number.
// INPUT: 123, OUTPUT: 321

#include<stdio.h>
int main()
{
  int num,i,rev = 0;
  printf("Enter a number: ");
  scanf("%d",&num);

  for(i=num;num!=0;i=i/10){
    
    rev = rev*10 + i%10;
    rev = num %10;
    rev = rev*10+i;

  }

  printf("The reverse of number %d is %d. ", num, rev);

  return 0;
}
