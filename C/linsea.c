/* Linear search: searching after item in list.
Loop through elements and compare to find item. Return element if it's == to key.
If != return -1. (False)
*/

#include <stdio.h>

int linearsearch(int *a, int n, int key){ 
    
    int i; // index
    for(i=0;i<n;i++)
        if(key == a[i]) // compares if given key and elements in array are the same
            return i; // returning item if comparision is the same
        
        return -1; // False if nothings found 
}

int linearecursive (int *a, int size, int key){
    if (size == 0) return -1;  // size of array
    else if (a[size-1] == key) return size-1; // returning item with index if last element of arr & key are equal
    else return linearecursive(a,size-1, key); // if key not found, calling function again
}

// linear search to find all keys in array
void linearall (int *a, int size, int key, int *r, int *c){
  int i,j=0,flag=0;
    for (i=0;i<size;i++){
      if(a[i]==key){
        r[j++] = i;
        *c = *c +1;
      }
    }
}

int main(){

    int arr[] = {2,4,2,7,4,5,6,3,4,5,0,9};
    
    int n = sizeof(arr)/sizeof(arr[0]); // calculating size of array (amount of elements)
    int found[n], nbc=0;
    int res;
    int i,k=4;
    for (i=0;i<n;i++)
        found[i]=0;

    printf("Number of elements in array:%d\n", n);
    printf("%d\n",linearsearch(arr,n,k));
    printf("%d\n",linearecursive(arr,n,k));

    linearall(arr,n,k,found, &nbc);

    if (nbc==0) // vad är nbc?
        printf("Key %d not found\n", nbc,k);
    else {
        printf("Found %d key(s) at indexes: \n", nbc,k);
        for (i=0;i<nbc;i++)
            printf("%d ",found[i]);
    }

    puts(" ");
}
