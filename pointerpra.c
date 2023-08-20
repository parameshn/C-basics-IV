#include <stdio.h>
void main()
{
    int age;
    int *page;
    age = 52;
    page = &age; // link address of the age

    printf(" page = %d\n", page);  // Print the memory address of 'age'
    printf(" page = %d\n", *page); // Print the value stored at 'age'
    // page = 62;
    *page = 62; // differences the value of the age

    printf(" page = %p\n", (void *)page); // correct way
    printf(" page = %d\n", *page);

    /*  The negative value you're seeing for the memory address is because the `%p` format specifier used with `printf` in C expects an argument of type `void *`. When you're printing the memory address using `%p`, you need to cast the pointer to `(void *)` to ensure proper interpretation of the memory address.

  Here's the relevant part of the code from your example:

  */
    printf("page = %p\n", (void *)page); // Print the memory address of 'age'
    /*
    In this line, `(void *)page` is a pointer of type `void *` that points to the same memory address as the `page` pointer. Casting the pointer to `(void *)` is necessary to match the expected argument type for `%p`.

    Memory addresses can appear as negative values when they are printed as signed integers. However, memory addresses themselves are typically unsigned values, and you should interpret them as such. When using `%p` to print a memory address, casting the pointer to `(void *)` ensures that it's correctly displayed as an address in hexadecimal format without sign-related issues.

    So, even though the printed value may appear negative, it's not a problem as long as the cast to `(void *)` is done correctly, and you're interpreting it as an address in memory.*/
}