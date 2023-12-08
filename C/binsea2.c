/* Binary search algorithm: Returns the index of item in array a
searching for the element between left and right index. Appliying BS algorithm 
occuringly to steer the search. Returns -1 if elements not in array. */

#include <stdio.h>

// function arguments: an array, element/item in question, left and right index
int binary_search(int a[], int item , int lef, int rig);

int main(){

  int unsorted[] = {9,5,13,3,8,7,2,12,6,10,4,11,1}; // in nsorted list u can search from left to right, takes longer
  int sorted[] = {1,2,3,4,5,6,7,8,9,10,11,12,13}; // with sorted list u can split it into quadrants and compare
  
  // calling function, saved in var for short
  int index = binary_search(sorted, 12, 0, 12); // arr, item, left and right index
  printf("index of item 12: %d\n", index);
  printf("index of item 4: %d\n", binary_search(sorted, 4, 0, 12));
  printf("index of item 14: %d\n", binary_search(sorted, 14, 0, 12)); // return -1 cause non existent 
  
  
  return 0;
}

int binary_search(int a[], int item , int lef, int rig){

  int mid = lef + (rig - lef) / 2; // finding mid point in considered portion of arr, 1st - last index
  
  if (lef > rig) return -1; // if element is not in array. passing a left index

  if (a[mid] == item)         // if arr at mid == item we want item is found -> returning index
    return mid;
  else if (a[mid] > item)     // if arr at mid > item we want -> search at left portion of it
    return binary_search(a, item, lef, mid - 1); // mid - 1 to get new right index for search
  else                                        // if item is > mid index -> we search in right portion 
    return binary_search(a, item, mid + 1, rig); // mid + 1 to get index of element beside it 
  
}

