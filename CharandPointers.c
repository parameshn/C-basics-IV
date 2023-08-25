// Characters and Pointers

#include <stdio.h>
#include <string.h>
void main()
{
    char name[] = "Andrew B. Mayfair"; /* name points to A */
    char *pName = "Andrew B. Mayfair"; /* pName points to A */

    printf("name = %s\n", name);
    printf("name = %c\n", *(pName + 1));
    printf("name = %s\n", pName);

    pName = "Theodore M. Brooks";
    printf("name = %s\n", name);
    printf("name = %c\n", *(pName));
    printf("name = %s\n", pName);

    char *pNum = "12345652";
    printf("num = %s\n", pNum);
    printf("num = %p\n", (void *)pNum);

    /*name = Andrew B. Mayfair
name = n
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

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Be Careful with Lengths

/*It’s okay to store string literals in character arrays as just described. The new strings that you assign
with = can be shorter or longer than the previous strings. That’s nice because you might recall that
you can’t store a string in a character array that is longer than the array you reserved initially.
You must be extremely careful, however, not to let the program store strings longer than the first
string you point to with the character pointer. This is a little complex, but keep following along—
because this chapter stays as simple and short as possible. Never set up a character pointer variable
like this:*/
main()
{
    char *name = "Tom Roberts";
    /* Rest of program follows... */

    // and then later let the user enter a new string with gets() like this:
    gets(name); /* Not very safe */

    /*The problem with this statement is that the user might enter a string longer than Tom Roberts, the
first string assigned to the character pointer. Although a character pointer can point to strings of any
length, the gets() function, along with scanf(), strcpy(), and strcat(), doesn’t know that
it’s being sent a character pointer. Because these functions might be sent a character array that can’t
change location, they map the newly created string directly over the location of the string in name. If
a string longer than name is entered, other data areas could be overwritten.*/

    /*If you want to store user input in a string pointed to by a pointer, first reserve enough storage for that
    input string. The easiest way to do this is to reserve a character array and then assign a character
    pointer to the beginning element of that array:*/

    char input[81];     // Holds a string as long as 80 characters
    char *iptr = input; // Also could have done char *iptr = &input[0]

    /*Now you can input a string by using the pointer as long as the string entered by the user is not longer
than 81 bytes long:*/

    gets(iptr); /* Makes sure that iptr points to the string typed by the user */

    /*You can use a nice string-input function to ensure that entered strings don’t get longer than 81
characters, including the null zero. Use fgets() if you want to limit the number of characters
accepted from the user. fgets() works like gets(), except that you specify a length argument.
The following statement shows fgets() in action:
*/
    fgets(iptr, 81, stdin); /*Gets up to 80 chars and adds null zero */

    /*The second value is the maximum number of characters you want to save from the user’s input.
Always leave one for the string’s null zero. The pointer iptr can point to a string as long as 81
characters. If the user enters a string less than 81 characters, iptr points to that string with no
problem. However, if the user goes wild and enters a string 200 characters long, iptr points only to
the first 80, followed by a null zero at the 81st position that fgets() added, and the rest of the
user’s input is ignored*/

    // You also can assign the pointer string literals using the assignment like this:
    iptr = "Mary Jayne Norman";
}
