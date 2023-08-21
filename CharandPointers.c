// Characters and Pointers

#include <stdio.h>
#include <string.h>
void main()
{
    char name[] = "Andrew B. Mayfair"; /* name points to A */
    char *pName = "Andrew B. Mayfair"; /* pName points to A */

    printf("name = %s\n", name);
    printf("name = %c\n", *pName);
    printf("name = %s\n", pName);

    pName = "Theodore M. Brooks";
    printf("name = %s\n", name);
    printf("name = %c\n", *pName);
    printf("name = %s\n", pName);

    char *pNum = "12345652";
    printf("num = %s\n", pNum);
    printf("num = %p\n", (void *)pNum);

    /*name = Andrew B. Mayfair
name = A
name = Andrew B. Mayfair
name = Andrew B. Mayfair
name = T
name = Theodore M. Brooks
num = 12345652
num = 00007ff7ada3303b
*/
}

/*
Certainly, I'd be happy to explain further.

The %s format specifier in the printf function expects a pointer to a null-terminated character array, commonly known as a C-style string. A C-style string is a sequence of characters stored in memory, followed by a null terminator ('\0') that marks the end of the string.

When you provide a pointer to printf using %s, it starts reading characters from the memory address you provided and continues to do so until it encounters a null terminator. This is how printf knows where the string ends.

However, when you pass a single character using %s, like in printf("pName = %s\n", *pName);, printf treats that single character as a memory address to a null-terminated string. Since you're passing the character 'A', which is not a valid memory address for a string, printf will keep trying to read characters from memory starting at address A until it either encounters a null terminator or reaches a memory location where it doesn't have permission to read. This can result in various unintended consequences*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*Yes, you're correct. In C, you can directly assign a string literal to a pointer to char (`char *`) without needing an intermediate character array. The assignment of a string literal to a pointer is a common practice in C programming.

For example:

```c
char *pName = "Theodore M. Brooks";
```

In this code, the string literal `"Theodore M. Brooks"` is stored in a read-only section of memory, and the pointer `pName` is assigned the address of the first character `'T'`. This allows `pName` to point to the beginning of the string.

Keep in mind that when you use this approach, `pName` will point to a read-only memory location containing the string literal. Therefore, you should not attempt to modify the characters through the pointer `pName`. If you need a modifiable string, you should use a character array, like this:

```c
char name[] = "Theodore M. Brooks";
```

In this case, the string is stored in a mutable array, which you can modify as needed.*/