// Deklaration, Format specifiers and printing

#include <stdio.h> 

int main(void) {

    int num = 10;
    float fnum = 6;
    char ch = 'H';

    // % = nykelord för format specifiers. tillsammans med bokstav -> == place holders för variablers value
    
    printf("Mitt heltal är %d och tecken är %c.\n", num, ch);
    printf("Värdet i variabeln 'num' är: %d\n", num);
    printf("Värdet i variabeln 'fnum' är: %f\n", fnum);
    printf("Värdet i variabeln 'ch' är: %c\n", ch);
    printf("Värden kan även skrivas ut på samma rad: %d, %f, %c\n", num, fnum, ch); 

    // Deklarerar nya värden. Old values gets over written.
    num = 5;
    fnum = 3;
    ch = 'M';

    printf("Värdet i variablarna har na värden: %d, %f, %c\n", num, fnum, ch);
    

return 0;

};
