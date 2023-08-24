////////////////////////pointers

/*As with any other type of variable, you must define a pointer variable before you can use it


you need to learn two new operators.
    operator               description
     &               address of operator
     *               differencing operator


     You’ve seen the * before. How does C know the difference between multiplication and
dereferencing? The context of how you use them determines how C interprets them. You’ve also seen
the & before scanf() variables. The & in scanf() is the address-of operator. scanf() requires
that you send it the address of non-array variables.

*/

#include <stdio.h>
main()
{

    // defining  an integer and a floating-point variable:
    int num;
    float value;

    // defining an integer pointer variable and a floating-point pointer variable, you simply insert an *
    int *pNum;
    float *pValue;

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /*All data types have corresponding pointer data types—there are character pointers, long integer
pointers, and so on.

Pointer variables hold addresses of other variables. That’s their primary purpose. Use the address-of
operator, &, to assign the address of one variable to a pointer. Until you assign an address of a
variable to a pointer, the pointer is uninitialized and you can’t use it for anything.*/

    int age = 12;     /* Stores a 12 in age */
    int *pAge = &age; /* Links up the pointer */

    // The variable pAge points to age if pAge holds the address of age.

    /*You have no idea exactly what address C will store age at. However, whatever address C uses,
pAge will hold that address. When a pointer variable holds the address of another variable, it
essentially points to that variable.*/

    /*Just because you define two variables back to back doesn’t mean that C stores them
    back to back in memory. C might store them together, but it also might not.
    */

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /*Never try to set the address of one type of variable to a pointer variable of a different
    type. C lets you assign the address of one type of variable only to a pointer defined
    with the same data type.*/

    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /*The * isn’t part of a pointer variable’s name. You use the * dereferencing operator for several
things, but in the pointer definition, the * exists only to tell C that the variable is a pointer, not a
regular variable. The following four statements do exactly the same thing as the previous two
statements. Notice that you don’t use * to store the address of a variable in a pointer variable unless
you are also defining the pointer at the same time.
*/

    int year;                      // Defines a regular integer
    int *pYear;                    // Defines a pointer to an integer
    year = 1442;                   // stores the 1442 to year
    pYear = &year;                 // Links up the pointer
    printf("  %p", (void *)pYear); //// prints the pointer value/contents of the pointer in hexadecimal format.
    printf(" \n  %d", pYear);      // prints the pointer value/contents of the pointer in decimal format.

    printf(" \n  %p", pYear);
    /*Yes, you're correct. You can directly use printf(" \n %p", pYear); instead of printf(" %p", (void *)pYear); in this case. When you're using %p format specifier to print a pointer's value, there's no need to explicitly cast the pointer to (void *).*/

    printf(" \n %d", *pYear); // prints the value pointed by pYear
                              /*  000000f303fffb20
                             67107616
                             000000f303fffb20
                            1442
                           */
    /*The first printf statement (%p) prints the memory address of the year variable in hexadecimal format.
The second printf statement (%d) prints the memory address stored in the pYear pointer in decimal format.
The third printf statement (%d with *pYear) prints the value stored in the year variable.

Yes, you are correct. Both addresses point to the same variable (year), but their representation is different due to how they are printed and displayed.*/

    printf("\nAddress of pYear: %p", (void *)&pYear); // To get the memory address of the pointer that holds the address of the year variable
    // Address of pYear: 000000f303fffb18
}

/*
////the use of address of operator


That's correct. In C, the "address of" operator, represented by the ampersand symbol `&`, can be used with array elements but not with array names. Here's why:

1. **Address of Array Elements**: You can use the address of operator to get the memory address of individual elements within an array. For example:

```c
int arr[5] = {1, 2, 3, 4, 5};
int *ptr = &arr[2]; // Get the address of the third element
```

In this case, `&arr[2]` gives you the memory address where the third element of the array is stored.

2. **Array Names as Pointers**: In C, the name of an array can also act as a pointer to its first element. When you use the array name without an index, it is automatically treated as a pointer to the first element of the array. This is why you don't need to use the address of operator with array names to get their addresses.

For example:

```c
int arr[5] = {1, 2, 3, 4, 5};
int *ptr = arr; // The array name "arr" is automatically treated as a pointer to its first element
```

Using the address of operator with the array name in this context would be redundant and unnecessary.

So, to summarize, you can use the address of operator with individual array elements to obtain their memory addresses, but when dealing with the array name itself, you don't need the address of operator because the array name is already treated as a pointer to the first element.*/