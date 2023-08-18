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
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/* This program demonstrates pointers by declaring and initializing
both regular and pointer variables for int, float, and char types
and then displays the values of each. */
#include <stdio.h>
main()
{
    int kids;
    int *pKids;
    float price;
    float *pPrice;
    char code;
    char *pCode;
    price = 17.50;
    pPrice = &price;
    printf("\nHow many kids are you taking to the water park? ");
    scanf(" %d", &kids);
    pKids = &kids;
    printf("\nDo you have a discount ticket for the park?");
    printf("\nEnter E for Employee Discount, S for Sav-More ");
    printf("Discount, or N for No Discount: ");
    scanf(" %c", &code);
    pCode = &code;
    printf("\nFirst let's do it with the variables:\n");
    printf("You've got %d kids...\n", kids);
    switch (code)
    {
    case ('E'):
        printf("The employee discount saves you 25%% on the ");
        printf("$%.2f price", price);
        printf("\nTotal ticket cost: $%.2f", (price * .75 * kids));
        break;
    case ('S'):
        printf("The Sav-more discount saves you 15%% on the ");
        printf("$%.2f price", price);
        printf("\nTotal ticket cost: $%.2f", (price * .85 * kids));
        break;
    default: // Either entered N for No Discount or
        // an invalid letter
        printf("You will be paying full price of ");
        printf("$%.2f for your tickets", price);
    }
    // Now repeat the same code, but use dereferenced
    // pointers and get the same results
    printf("\n\n\nNow let's do it with the pointers:\n");
    printf("You've got %d kids...\n", *pKids);
    switch (*pCode)
    {
    case ('E'):
        printf("The employee discount saves you 25%% on the ");
        printf("$%.2f price", *pPrice);
        printf("\nTotal ticket cost: $%.2f",
               (*pPrice * .75 * *pKids));
        break;
    case ('S'):
        printf("The Sav-more discount saves you 15%% on the ");
        printf("$%.2f price", *pPrice);
        printf("\nTotal ticket cost $%.2f",
               (*pPrice * .85 * *pKids));
        break;
    default: // Either entered N for No Discount or
        // an invalid letter
        printf("You will be paying full price of ");
        printf("$%.2f for your tickets", *pPrice);
    }
    return (0);
}
