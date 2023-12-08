/* Multidimensional array - rows represents arrays and columns element inside array */
#include <stdio.h>

int main(){

    int arr[2][3]={{1,3,5}, {2,4,6}}; // [2] = amount of array in arr, [3] = amount of elements in arr
    
    /*accessing elements: 1st [] = 1st array inside 'arr', 2nd [] = 1st element in inner arr */
 
    printf("Accessed element: %d\n", arr[0][0]); //  [0] = 1st arr, [0] = 1st element
    printf("Accessed element: %d\n", arr[1][2]); // [1] = 2nd arr, [2] = thrid element
    
    // Giving new value to elements with array index
    arr[0][2] = 7; //
    arr[1][1] = 8;
    
    printf("Accessed element: %d\n", arr[0][2]);
    printf("Accessed element: %d\n", arr[1][1]);
    
    return 0;
}