// Character Arrays and Strings:
/*String is a sequence of characters that are treated as a single data item and terminated by a null character '\0'.
Remember that the C language does not support strings as a data type.
A string is actually a one-dimensional
array of characters in C language. These are often used to create meaningful and readable programs.

The string "home" contains 5 characters including the '\0' character which is automatically
added by the compiler at the end of the string.



The statement
char name[16] = "John";
declares an array name of length 16 and stores the C-string "John" in it •


The statement
char name[] = "John";
declares an array name of length 5 and stores the Cstring "John" in it
*/

#include <stdio.h>
void main()
{
    // Declaring and Initializing String Variable,
    // A string in C is simply a sequence of characters.
    // To declare a string, specify the data type as char and place
    // the number of characters in the array in square brackets after the string name.
    // syntax  char string-name[size];

    char name[20];
    char address[25];
    char city[15];

    // Initialization of Strings The string can be initialized as follows:
    char name[6] = {'p', 'r', 'o', 'g', 'r', 'a', 'm'};

    // The characters of strings are stored in the contiguous (adjacent) memory locations.

    /*Each character of string occupies 1 byte of memory (on 16 bit computing). The size of character is machine
dependent, and varies from 16 bit computers to 64 bit computers. */
}