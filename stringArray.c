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

    /*You can set the initial value of a character array when you declare it by specifying a string literal. If the array
    is too small for the literal, the literal will be truncated. If the literal (including its null terminator) is smaller
    than the array, then the final characters in the array will be undefined. If you don’t specify the size of the array,
    but do specify a literal, then C will set the array to the size of the literal, including the null terminator.
    */

    char str[4] = {'u', 'n', 'i', 'x'};
    char str[5] = {'u', 'n', 'i', 'x', '\0'};
    char str[3];
    char str[] = "UNIX";
    char str[4] = "unix";
    char str[9] = "unix";

    /*All of the above declarations are legal. But which ones don’t work? The first one is a valid declaration, but
will cause major problems because it is not nullterminated. The second example shows a correct nullterminated string. The special escape character \0 denotes string termination. The fifth example suffers the
size problem, the character array ‘str’ is of size 4 bytes, but it requires an additional space to store ‘\0’. The
fourth example however does not. This is because the compiler will determine the length of the string and
automatically initialize the last character to a null-terminator.
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
The strings not terminated by a ‘\0’ are merely
a collection of characters and are called as character arrays.
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////*/

    /*Reading Strings from Terminal

    We can read string entered by a user at console using two in-built functions such as - scanf() and gets().
Let's take a look at the two functions one-by-one and see how they are used to read the strings typed at the
console.*/
}

/*We can read a string entered by the user using the in-built scanf function. Let's see how it done.
 Using scanf() function to read a string in C */
#include <stdio.h>
int main()
{
    char season[20];
    printf("Enter your favorite season : ");
    scanf("%s", season);
    printf("Your favorite season is : %s", season);
    return 0;
}
/*In C, both declarations `char str[5] = {'u', 'n', 'i', 'x'};` and `char str[5] = {'u', 'n', 'i', 'x', '\0'};` create character arrays (strings) with the same content "unix". However, there is a crucial difference between these two declarations: the null terminator (`'\0'`).

1. `char str[5] = {'u', 'n', 'i', 'x'};`
   In this declaration, you are initializing a character array with the characters 'u', 'n', 'i', and 'x'. There is no explicit null terminator at the end of the array. While this is a valid array of characters, it is not automatically recognized as a C-style string by string functions that rely on null-terminated strings. If you try to treat `str` as a string and use string functions like `strlen`, `printf`, or `strcpy`, you may encounter unexpected behavior or errors because these functions expect null-terminated strings.

2. `char str[5] = {'u', 'n', 'i', 'x', '\0'};`
   In this declaration, you are explicitly adding the null terminator (`'\0'`) at the end of the character array. This creates a proper null-terminated C-style string. String functions will work as expected on this array, recognizing it as a valid string and properly terminating when the null character is encountered.

In summary, while both declarations create character arrays with the content "unix," the second declaration with the explicit null terminator is the correct way to define a C-style string that can be safely used with standard string functions. The first declaration lacks the null terminator, which can lead to unexpected behavior when treating it as a string.*/