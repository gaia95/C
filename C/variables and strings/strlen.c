/* strl - takes a string as argument and returns its length. 
Returned value is of type size_t*/
#include <stdio.h>
#include <string.h>
int main()
{
    char s1[20]="Program";
    char s2[20]={'P','r','o','g','r','a','m','\0'};

    // using the %zu format specifier to print size_t
    printf("Length of string a = %zu \n",strlen(s1));
    printf("Length of string b = %zu \n",strlen(s2));

    return 0;
}