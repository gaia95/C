/* Reversing elements in array. Algoritm: swapping first element with last, 
 second with last second etc. Since array is uneven, the middle element
 wont need swapping */

 #include <stdio.h>

int main(){
   
   // Declarations & initializing

   int myarr[] = {1,2,3,4,5,6,7,8,9};
   int i;         // index
   int len = 9;
   int temp = 0;
   

   for(i=0; i < (len/2); i++){ // len/2 to know when swapping is not needed, div by 2 cause rest element wont be swapped 
      temp = myarr[i];         // 1st element is saved in temp
      myarr[i] = myarr[len - i -1]; 

      /* extracting right handside items. Using len - i - 1 gets index of last item. (9-1 = 8 --> correct index: 0-8.) i = 0 in 1st iteration.
      Next it will be i = 1 --> len - 1 - 1 which gives us index of second last item.
      */

      myarr[len - i -1] = temp; // overwriting right side values
   }

   for (i=0; i<len; i++)
      printf("Arr index and Value: [%d] = %d\n",i, myarr[i]);

    return 0;
 }