#include <stdio.h>
#include "sizes.h"

void sizes(void)
{
    char a = 'a';
    int b = 10;
    float c = 1.1F;
    double d = 1.20202020d;
    /* 
    // Format specifiers for types:
        printf("%c\n", a); // character
        printf("%d\n", b); // integer
        printf("%f\n", c); // float
        printf("%lf\n", d); // double(float?)
    */
    printf("\nSize of character type is %d byte(s).\n", sizeof(a));
    printf("Size of integer type is %d byte(s).\n", sizeof(b));
    printf("Size of floating-point type is %d byte(s).\n", sizeof(c));
    printf("Size of double data type is %d byte(s).\n\n", sizeof(d));
}

/*
    - Different types require different syntax both for declaring and to operate with.
    - Different types take different space in system memory (higher value scope requires more space to store).
*/
