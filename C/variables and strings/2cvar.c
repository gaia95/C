// Operations and handling variabels 

#include <stdio.h>
//#include <math.h>

int main(){

    const int x = 3; // this keyword indicates that variable value can NOT be changed
    int y = 7;
    int sum = x + y;

    printf("Summan av x + y är: %i\n", sum); // %i är också FS för heltal

    // Deklaration av flera tal på samma rad
    int tal1=5, tal2=10, tal3=15;
    printf("Mer tal: %d, %d, %d \n", tal1, tal2, tal3); // måste skriva place holders för alla tal
   
    // Kan även skrivas såhär
    printf("Summan av tal 1, tal 2 och tal 3 är: %d\n", tal1+tal2+tal3);
    

    printf("Är x större än y? Svar: %d\nÄr Tal 1 mindre än tal 2? Svar: %d\n", x>y, tal1<tal2); // return 0(false) or 1(true)

return 0;
}