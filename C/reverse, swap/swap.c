/* Labb 1: Swap = Grund algoritm. To swap 2 elements you have to make a temporary variable (tmp) */

#include <stdio.h>

// swapping place of 2 elements inside an arr

void swap(int *a, int *b){ // func takes 2 arg, a & b = the elements 
    int tmp; // temporary variable, can be named anything

    tmp = *a; // *a = value that 'a' points to -> being saved temporary
    *a = *b; // writes over value 'a', value pointed by 'a' has become the value pointed by 'b' 
    *b = tmp; // saved value in tmp becoes b, copy old value of a to the value pointed by b
}

void printArr(int *a, int n){ // *a = points to 1st element in the list, n = size of 'a'
    int i; // index
    printf("{");
    for(i=0;i<n;i++) 
        if (i<n-1) // n - 1 = size of n minus 1 to get to right index
            printf("%d, ", a[i]); // or *(a+i)
        else printf("%d", a[i]);
    puts("}");
}

/* Pseudocode for reverse function. Last element n becomes the 1st one , (index not element)swapp n-1 with[0]
swap (n-2) with [1], swap (n-3) with [2]element becomes 2nd element ... stop the middle 
Return when start = end with start 0,1,2,... and end = n, n-1, n-2...
*/

void reverse(int *a, int n){
    
    int start=0, end=n-1; // Declaring 2 indexes, n for size of values

    while(start<end){ // loops as long as start<end
        swap(&a[start],&a[end]); // swapping start with end
        start++;
        end--;
       
    }
}

void rotate(int *a, int n){
    
    /* Pseudo code 
    2,4,3,6,1
    tmp = a[0] // save first element of array so it can be overwritten without losing value
    arr[0] -> arr[1] // arr value med index 0 ska få index 1
    arr[1] -> arr[2] // arr value med index 1 ska få index 2
    arr[n-2] = arr[n-1]
    arr[n-1] = tmp

    save 1st element 
    loop from 0 to n-2

    */ 
int tmp, i;

tmp =a[0]; //1st element in arr saved 
for(i=0;i<n-1;i++) 
    a[i] = a[i+1];
    a[n-1]=tmp;

}

int main(){

    int arr[5]= {2,4,3,6,1}; // [5] = AOE (amount of elements)
    
    // char arr[6]= {'H','e','l','l','o','\0'};
    int n = sizeof(arr)/sizeof(arr[0]); // size of i antal bytes, easier if anything gets changed

    printf("Before swap:\n");
    printArr(arr, n); // 5 = n (storlek )
    swap(&arr[1],&arr[3]); // byter index element 1 med värdet i adress med index 3 (byter plats på 4 & 6)
    reverse(arr,n);
    printf("After swap:\n");
    printArr(arr, n);
    rotate(arr,n);
    printf("After rotate:\n");
    printArr(arr, n);

    return 0;
}