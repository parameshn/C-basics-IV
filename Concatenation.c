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

/*
 what happens to string 2 does it cease to exist




In the context of the `strcat()` function in C and C++, the `string2` (referred to as the `source` string) does not cease to exist after it is appended to `string1` (referred to as the `destination` string). The `strcat()` function does not modify or destroy the source string in any way.

After the concatenation is performed, both the `destination` and `source` strings remain intact in memory. The `destination` string now contains the concatenated result, and the `source` string remains unchanged.

Here's an analogy to help understand this better:

Imagine you have two pieces of paper with text on them. One paper is labeled `string1`, and the other paper is labeled `string2`. When you use `strcat()` to append the content of `string2` onto `string1`, you're essentially copying the content of `string2` and writing it at the end of `string1`. However, the original `string2` paper remains unaffected; only the `string1` paper is modified.

In memory terms, the `destination` string's memory is altered to include the appended characters from the `source` string, while the `source` string's memory remains unchanged.

It's important to be aware of memory management and potential buffer overflow issues when working with C-style strings. Care should be taken to ensure that the `destination` string has enough allocated memory to accommodate the concatenated result. If not, it could lead to memory corruption and undefined behavior.*/