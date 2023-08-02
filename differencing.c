//////////////////////////////DIFFERENCING  *
/*Dereferencing just means that you use the pointer to get to the other variable. When you dereference, use the * dereferencing operator.
 */

#include <stdio.h>
main()
{

    int age = 15;
    int *pAge = &age;

    // here are two ways to change the value of age
    age = 25;
    *pAge = 26;

    /*This assignment tells C to store the value 25 at the address pointed to by pAge. Because pAge
points to the memory location holding the variable age, 25 is stored in age.*/

    /*You also can use a variable’s value in the same way. Here are two ways to print the
    contents of age:*/
    printf("The age is %d.\n", age);

    printf("the age is %d\n", *pAge);

    // The dereferencing operator is used when a function works with a pointer variable that it is sent.
    /*When a function uses a pointer variable that is sent from another function, you must use the
dereferencing operator before the variable name everywhere it appears.
*/
}