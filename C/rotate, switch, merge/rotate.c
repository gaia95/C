/* Rotate from letf to right */


   /* Pseudo code 
    2,4,3,6,1
    
    arr[0] -> arr[1] // arr value med index 0 ska få index 1
    arr[1] -> arr[2] // arr value med index 1 ska få index 2
    arr[n-2] = arr[n-1]
    arr[n-1] = tmp

    save 1st element 
    loop from 0 to n-2

    */ 

#include <stdio.h>

void rotate(int *arr, int n){

    int temp,i;

    temp = arr[0]; // saving 1st element of arr temporary
    printf("\nAfter rotation:\n");
    for(i=0;i<n-1;i++)
        arr[i] = arr[i+1]; // assigning new index to elements and gets moved to right/left 
    arr[n-1]=temp;
    printf("%d ", arr[i+1]); // 

}

int main(){

    int i;
    int arr[] = {2,3,4,5,1}; // array initiaztion 
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Before rotation:\n");
    
    // printing original array
    for (i=0;i<n;i++)
        printf("%d ", arr[i]);
    
    rotate(arr, n);
   

    return 0;
}