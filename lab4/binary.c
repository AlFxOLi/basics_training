#include <stdio.h>

void binary(void)
{
    /*
    two's complement method for representing negative numbers (signed variables):
        -flip bits
        -increment
    example:
    5 = 000101
    -5 = 000101 -> 111010 -> 111011
                   ^            ^
                flip bits    increment

    5 + (-5) = 000101
              +111011
              -------
            (1)000000 = 0

    4 + (-2) = 000100
              +111110
              -------
            (1)000010 = 2
    */

    //Bitwise operations
    signed int four = 4; // 4 = 000100
    signed int eight = 8; // 8 = 001000
    signed int answer = 0; // 0 = 000000

    answer = four & eight; 
    //   000100
    // & 001000
    //   000000 = 0
    printf("\n4 AND 8 = %d\n", answer);

    answer = four | eight;
    //   000100
    // | 001000
    //   001100 = 12
    printf("4 OR 8 = %d\n", answer);

    answer = four ^ eight;
    //   000100
    // ^ 001000
    //   001100 = 12
    printf("4 XOR 8 = %d\n", answer);
    
    answer = four << 1;
    //   000100 
    //   << 1
    //   001000 = 8
    printf("4 << 1 = %d\n", answer);

    answer = eight >> 1;
    //   001000 
    //   >> 1
    //   000100 = 4
    printf("8 >> 1 = %d\n\n", answer);

}
