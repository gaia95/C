/* Binary Search - List has to be in order to be able to do a BS */

#include <stdio.h>

int binsea(int *arr, int x, int start, int end){  // array, item, start & end index
    
    int mid; 
    while (start<end){  // medans start index är mindre än slut
        mid=(start+end)/2; // find mid of array
        if (x==arr[mid]) // if item == mid element in arr -> return value
            return mid;
        else if(x>arr[mid]) // if item is bigger than mid ina arr
            start=mid+1; //assign start index to value with index beside mid
        else
            end=mid-1; // -""- as above fast motsatt håll
    }
}

int main(){

    int arr[] = {1,2,3,4,5,6,7};
    int len = sizeof(arr)/sizeof(arr[0]); // calcing size of array 
    int x = 4;          // item to be found, can also be changed in function call
    int res = binsea(arr, x, 0, len-1);

    printf("Index of 6: \n", binsea(arr, 6, 0, 6));

    if (res == -1)
        printf("Item not found.\n");
    else 
        printf("Item found at index %d\n", res);

    return 0;
}