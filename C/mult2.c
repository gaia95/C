/* skriv ut alla multiplikation tbeller från 1-10. */

#include <stdio.h>

int main(){
    int j,i, res; // 
    int multi[10][10]; // varför 10? 

    for(i=1; i<=10;i++){ 
        for (j=1; j<=10;j++)
            res = multi[i][j] = i*j;
            printf("%d * %d = %d\n", i,j,res);
        }

        /* for(i=1; i<=10;i++){
             for(j=1; j<=10;j++)
             printf("%d * %d = %d\n", i,j,res); }*/
            
    
    return 0;
}





/*int main(){
    int j,i, rows, colums; // 
    int multi[10][10]; // varför 10? 

    for(i=1; i<=10;i++){ 
        for (j=1; j<=10;j++)
            multi [i][j] = i*j;
        }
        for(i=1; i<=10;i++){
            for(j=1; j<=10;j++)
            printf("%2d * %2d= %2d\n", i,j, multi[multi[i][j]]);
        }
    
    return 0;
}*/