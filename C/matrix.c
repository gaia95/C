// skriv ut alla multiplikation tbeller från 1-10. 

#include <stdio.h>
int main(){
    
    int rows, col;
    for(rows=1;rows<11;rows++){ // rows counts all rows (start of row , end, incrementation)
        for(col=1;col<11;col++) // col counts all columns 
            printf("%2d ", rows*col); // 2d = 2 decimal -> (blir som 2 spaces)
    
        puts(""); // byter rad efter respektive rad
    }

    return 0;
}


/*
int main(){

    // defining + initializing 2d array. 2=2 arrays inside array, 3= nr of elements 
    int arr[2][3] = {{1,3,5}, {2,4,6}};

    // Accessing element in array. 
    // 1st[] = list you want to access, 2nd[]= which element
    
    printf("%d\n",arr[0][1] ); // array name, list1, element 2
    printf("%d\n",arr[1][2] ); // array name, list2, element 3
        
    return 0;

} */