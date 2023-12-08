/* Multidimensional array - accessing elements using for loop */
#include <stdio.h>

int main(){

    int arr[2][3]={{1,3,5}, {2,4,6}}; // [2] = amount of array in arr, [3] = amount of elements in arr
    
    // because initialized i = 0, printing 1st array automatically
    for (int i=0; i<2;++i){ // <start>; <upprepningar>; <increm>
        for (int j=0; j<3;++j){
            printf("%d ", arr[i][j]);
        }
        
    }
  
    return 0;
}