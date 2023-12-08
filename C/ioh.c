/* Q10 - Input Output Heltal 


Values in array: 10 25 20 15 30
Sum of odd values: 40
Sum of even values: 60
*/

#include<stdio.h>

int main (){

  int list[5];
  int even = 0, odd = 0; // to save even and odd inputs
  int i;
  
  printf("Enter 5 Values: ");
  

  for(i=0;i<5;++i)
  {
    scanf("%d ", &list[i]); // saving input
    if(list[i]%2 == 0)
    {
        even = even + list[i]; 
    }
    else
    {
        odd = odd + list[i];
    }
  }

  printf("Values in array:\n");
  for(i=0;i<5;++i)
  {
    printf("%d ",list[i]);
  }
  puts("");

  printf("Sum of odd values: %d\n", odd);
  printf("Sum of even values: %d\n", even);

  return 0;
}
