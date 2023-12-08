/* Reversing elements in array. Algoritm: swapping first element with last, 
etc. */

#include <stdio.h>
void reverse(int arr[], int lenght);

int main(){
   
    // Declarations & initializing
    int myarr[] = {1,2,3,4,5,6,7,8,9};
    int myarr2[] = {6,5,4,3,2,1};

    reverse(myarr, 9);
    reverse(myarr2, 6);

    // Printing Arrays 
    for (int i=0; i < 9; i++)
        printf("Array 1: [%d] = %d\n",i, myarr[i]);

    puts("");
    
    for (int i=0; i < 6; i++)
      printf("Array 2: [%d] = %d\n",i, myarr2[i]);
    
    return 0;
}

// function takes in an array and the length of the array
void reverse(int arr[], int lenght){

int temp = 0;
   
for(int i=0; i < (lenght/2); i++){

    temp = arr[i]; // 1st element is saved in temp
    arr[i] = arr[lenght - i -1];
    arr[lenght - i -1] = temp; // overwriting right side values

   }
 
}