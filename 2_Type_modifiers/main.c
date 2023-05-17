#include <stdio.h>

int main (void)
{
    //Integers (Ridiculous amount of variantions)
    signed char signedChar = 'a';
    unsigned char unsignedChar = 'a';
    signed int signedInt = 0;
    unsigned int unsignedInt = 4294967295u;
    signed short int signedShortInt = 0;
    unsigned short int unsignedShortInt = 0;
    signed long int signedLongInt = 0l;
    unsigned long int unsignedLongInt = 0ul;
    signed long long int signedLongLongInt = 0ll;
    unsigned long long int unsignedLongLongInt = 0ull;
    //Floating-point
    float Float = 0.000001f;
    double longFloat = 0.000000000000001d;

    printf("\nSize of 'signed char' is %d byte(s) long,\n    and its range is from -128 to +127.\n\n", sizeof(signedChar));
    printf("Size of 'unsigned char' is %d byte(s) long,\n    and its range is from 0 to +255.\n\n", sizeof(unsignedChar));
    printf("Size of 'signed int' is %d byte(s) long,\n    and its range is either from -2,147,483,647 to +2,147,483,647 in 32-bit or greater systems,\n    or from -32,767 to +32,767 in 16-bit or lesser systems.\n\n", sizeof(signedInt)); //I have a question, for God... Why!?
    printf("Size of 'unsigned int' is %d byte(s) long,\n    and its range is either from 0 to 4,294,967,295 in 32-bit or greater systems,\n    or from 0 to +65,535 in 16-bit or lesser systems.\n\n", sizeof(unsignedInt));
    printf("Size of 'signed short int' is %d byte(s) long,\n    and its range is from -32,767 to +32,767.\n\n", sizeof(signedShortInt));
    printf("Size of 'unsigned short int' is %d byte(s) long,\n    and its range is from 0 to +65,535.\n\n", sizeof(unsignedShortInt));
    printf("Size of 'signed long int' is %d byte(s) long,\n    and its range is from -2,147,483,647 to +2,147,483,647.\n\n", sizeof(signedLongInt));
    printf("Size of 'unsigned long int' is %d byte(s) long,\n    and its range is from 0 to +4,294,967,295.\n\n", sizeof(unsignedLongInt));
    printf("Size of 'signed long long int' is %d byte(s) long,\n    and its range is from -9,223,372,036,854,775,807 to +9,223,372,036,854,775,807.\n\n", sizeof(signedLongLongInt));
    printf("Size of 'unsigned long long int' is %d byte(s) long,\n    and its range is from 0 to +18,446,744,073,709,551,615.\n\n", sizeof(unsignedLongLongInt));
    printf("Size of 'float' is %d byte(s) long,\n    and it contains 6 digits\n\n", sizeof(Float));
    printf("Size of 'double' is %d byte(s) long,\n    and it contains 15 digits \n\n", sizeof(longFloat));

return 0;
}

/*
short/long modifiers affect byte size
signed/nsigned modifiers affect value range
What I found interesting:
    - char is in fact integer type
    - plain integer is different in size depending on compiler and system architecture (processor bus size in particular)
    - floats are really weird, especially long double
*/
