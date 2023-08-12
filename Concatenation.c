/// Concatenation:
/*The term concatenation refers to the merging of two things together. And this merging of
two things will together form a new result. In computer programming concatenation also does the same thing.
It merges two things end to end or we can say that the second thing is added up to the first thing and provides
a new result.*/

// Let us first learn how we can concatenate two strings using for loop by taking an example.
#include <stdio.h>
int main()
{
    char name1[20]; // char array variable is declared
    char name2[20]; // char array variable is declared

    int i, j; // declaration of integer variable
    printf("Enter name1: ");
    scanf("%s", name1);
    printf("\nEnter name2: ");
    scanf("%s", name2);
    // getting the last element of the first array
    for (i = 0; name1[i] != '\0'; i++)
    {
        // empty loop   ///for (i = 0; name1[i] != '\0'; i++);
    }

    for (j = 0; name2[j] != '\0'; j++)
    {
        name1[i] = name2[j];
        i++;
    }
    // inserting null character at the end of the char array
    name1[i] = '\0';
    printf("After concatenation is done, the new concatenated string will be: %s", name1);

    return 0;
}