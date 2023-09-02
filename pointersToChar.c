/*Declaration of Pointers to Characters:

Pointers to characters are declared using the char* data type.
For example:*/
#include <stdlib.h>
main()
{
    char *strPtr; // Declares a pointer to a character (C-string).

    /*Initialization of Pointers to Characters:

Pointers to characters can be initialized in several ways:

a. By assigning them the address of a character array (string):*/

    char myString[] = "Hello";
    char *strPtr = myString; // Initialize the pointer with the address of myString.

    // b. By assigning them the address of a string literal:
    char *strPtr = "World"; // Initialize the pointer with the address of a string literal.

    /* 3 Accessing Characters in a C-String:

You can access individual characters in a C-string using pointer dereferencing or pointer arithmetic.

To access the first character:*/
    char firstChar = *strPtr;

    // To access subsequent characters using pointer arithmetic:
    char secondChar = *(strPtr + 1); // Accesses the second character.

    /*C-strings are null-terminated, which means they end with a null character ('\0'). You can use this fact to iterate through a string:*/
    while (*strPtr != '\0')
    {
        // Process the character pointed to by strPtr.
        strPtr++; // Move the pointer to the next character.
    }

    /* 4  String Manipulation with Pointers to Characters:

C-strings allow you to manipulate and modify strings easily using pointers and various string manipulation functions from the C standard library (e.g., strcpy, strcat, strlen, strcmp, etc.).

Example: Copying a string using strcpy:*/
    char source[] = "SourceString";
    char destination[20]; // Make sure it's large enough to hold the source string.
    char *srcPtr = source;
    char *destPtr = destination;
    strcpy(destPtr, srcPtr); // Copy the source string to the destination.

    /* 5 Dynamic Memory Allocation for C-Strings:

Pointers to characters allow you to allocate memory dynamically for strings using functions like malloc, calloc, and strdup. This is useful for creating strings of varying lengths at runtime.

Example: Dynamic memory allocation for a string:*/
    char *dynamicString = (char *)malloc(20 * sizeof(char)); // Allocate memory for a string of 20 characters.
    if (dynamicString != NULL)
    {
        strcpy(dynamicString, "Dynamic String");
        // ...
        free(dynamicString); // Don't forget to free the allocated memory when done.
    }
}
/*6  Passing C-Strings to Functions:

Pointers to characters are commonly used when passing strings to functions because they allow for efficient passing by reference (i.e., without making a copy of the entire string).

Example: A function that takes a C-string as an argument:*/

void printString(char *str)
{
    printf("%s\n", str);
}
main1()
{
    // Usage
    char myString[] = "Hello, World!";
    printString(myString); // Pass the string to the function.
}

/*In summary, pointers to characters (C-strings) are a powerful tool in C for working with strings. They offer flexibility in memory allocation, efficient manipulation, and easy passing of strings to functions. However, it's crucial to manage memory carefully when using dynamic memory allocation and to be aware of null-termination when working with C-strings to avoid common string-related issues like buffer overflows.*/