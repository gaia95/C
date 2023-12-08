/* Functions. Commonly declared before the main() function */ 
#include <stdio.h>

// Declaring and initializig body of function. parameters = data type followed by a variable.

int addnum(int num1, int num2){ 
    int asum = num1 + num2; // 
    return asum;
}

int mulnum(int num1, int num2){ 
    int msum = num1 * num2;
    return msum;
}

// Body, whats happening
int main(){  
    
    int sresult = addnum(2,3); // saves result of operation in variable
    printf("Result of the addition: %d\n", sresult);

    int mresult = mulnum(2,6);
    printf("Result of the multiplication: %d\n", mresult);

    int ssresult = addnum(3,8); // arguments for parameters
    printf("Results: %d\n", ssresult);
    return 0;
}