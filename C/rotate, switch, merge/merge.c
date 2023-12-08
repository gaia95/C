/* Merging list */

#include <stdio.h>


int main(){
    
    int a1[]={34,2,5,56,3,7,8}; 
    int a2[]={74,4,1,10,23,4,6}; 
    int i,n1,n2;

    // count the numbers of elements for each arrays
    n1=sizeof(a1)/sizeof(a1[0]);
    n2=sizeof(a2)/sizeof(a2[0]);

    int a3[n1+n2];

    // Copy the n1 first elements of a1 to a3
    for (i=0;i<n1;i++)
        a3[i]=a1[i];
    
    // Copy the n1 first elements of a2 to a3
    for (i=0;i<n2;i++)
        a3[i+n1]=a2[i];

    printf("Merged lists: ");
    for (i=0;i<n1+n2;i++)
        
        printf("%d, ", a3[i]);

    puts("");
    return 0;
}


