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

    // defining e an integer pointer variable and a floating-point pointer variable, you simply insert an *
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

    int year;      // Defines a regular integer
    int *pYear;    // Defines a pointer to an integer
    year = 1442;   // stores the 1442 to year
    pYear = &year; // Links up the pointer
}
