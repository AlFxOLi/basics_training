#include <stdio.h> //Taking pre-made input-output functionality

int main() //main function must be named "main" so compiler knows where your program starts
{
    printf("\nHello, World!\n\n"); // '\n' is one of special operators for printf() that marks new line
    return 0; //Since our main function has been set to return integer, here it is (Most compilers will put this line for me though)
}

/*
    This program encapsulates basic syntax & essential components of c program.
    To compile this into an executable i use 
        $ gcc -o [program_name] [file_name].c
    and execute with
        $ ./[program_name]
*/
