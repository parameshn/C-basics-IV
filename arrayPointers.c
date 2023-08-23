// Array Names Are Pointers
/*An array name is nothing more than a pointer to the first element in that array. The array name is not
exactly a pointer variable, though. Array names are known as pointer constants. The following
statement defines an integer array and initializes it:*/

#include <stdio.h>
void main()
{
    int vals[5] = {10, 20, 30, 40, 50};
    /*You can reference the array by subscript notation. That much you know already. However, C does
more than just attach subscripts to the values in memory. C sets up a pointer to the array and names
that point to vals. You can never change the contents of vals; it is like a fixed pointer variable
whose address C locks in. Figure 25.1 shows you what C really does when you define and initialize
vals*/

    /////////////The array name is a pointer to the first value in the array.

    /*Because the array name is a pointer (that can’t be changed), you can print the first value in the array
like this:*/

    printf("the value of the array element val = %d", vals[0]);

    // But more important for this chapter, you can print the first array value like this, too:
    printf("the value of the array element val = %d", *vals);

    // As you’ll see in a moment, this is also equivalent and accesses vals[0]:
    printf("the value of the array element val = %d", *(vals + 0));
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Getting Down in the List
    /*Because an array name is nothing more than a pointer to the first value in the array, if you want the
second value, you only have to add 1 to the array name and dereference that location. This set of
printf() lines*/
    printf("The first array value is %d.\n", vals[0]);
    printf("The second array value is %d.\n", vals[1]);
    printf("The third array value is %d.\n", vals[2]);
    printf("The fourth array value is %d.\n", vals[3]);
    printf("The fifth array value is %d.\n", vals[4]);

    // does exactly the same as this set:
    printf("The first array value is %d.\n", *(vals + 0));
    printf("The second array value is %d.\n", *(vals + 1)); // C adds one int size when you add 1 to an int pointer
    printf("The third array value is %d.\n", *(vals + 2));
    printf("The fourth array value is %d.\n", *(vals + 3));
    printf("The fifth array value is %d.\n", *(vals + 4));
    /*If vals is a pointer constant (and it is), and the pointer constant holds a number that is the address to
the array’s first element, adding 1 or 2 (or whatever) to vals before dereferencing vals adds 1 or
2 to the address vals points to.
*/
}