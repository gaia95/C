/* Rotate array to the left */

#include <stdio.h>
void rotate_left(int array[], int len);
void rot_left_again(int array[], int len, int rot);

int main(){

    // int a1[] = {1,2,3,4,5,6};

    int a1[] = {1,0,0,1,1,1,0,1};



    // Array before rotation 
    for (int i = 0; i < 6; i++)
        printf("%d ", a1[i]);
    puts("");
   
    rot_left_again(a1, 6, 3);
   
    // Array after rotation 
    for (int i = 0; i < 6; i++) 
        printf("%d ", a1[i]);
    puts("");

    return 0;

}

// Function that allows several rotations. rot = number of rotation
void rot_left_again(int array[], int len, int rot){

    for (int i = 0; i < rot; i++)
        rotate_left(array, len);
    

}

void rotate_left(int array[], int len){

    int temp = array[0]; // 1st item in array saved temporary
    for (int i = 0; i < (len-1); i++) // shifting elements to left by 1 step. Start from 0 -> go up to 2nd last element
        array[i] = array[i+1];         // that item gets the index of one over to the right 
    array[len-1] = temp;               // saves last element after it got overwritten 
    

}




