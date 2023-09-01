/// pointers to 2D array

// syntax *(pointer variable + row element * i th row + j column)

#include <stdio.h>
void main()
{
    int a[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};

    int *p = &a[0][0]; // Pointer to the first element of a

    int i = 1;
    int j = 2;
    int element = *(p + 4 * i + j); // Access a[1][2]

    printf("a[%d][%d] = %d\n", i, j, element); // This will print "a[1][2] = 7"
}

/*This is a 3x4 array, meaning it has 3 rows and 4 columns. When you use int *p = &a[0][0];, you are creating a pointer p that points to the first element of the array, which is a[0][0].

Now, when you want to access an element like a[1][2], you need to navigate through the array's memory layout. The 4 * i part in *(p + 4 * i + j) is used to skip entire rows in memory because each row contains 4 integers.

Here's a step-by-step explanation for *(p + 4 * i + j) with i = 1 and j = 2, trying to access a[1][2]:

4 * i moves to the second row because each row contains 4 integers, so it skips the first row.

j (which is 2) moves two columns to the right within the second row.

By adding these offsets together and dereferencing the result, you correctly access the element a[1][2] without going out of bounds or accessing the wrong element.

So, the multiplication of i by 4 is necessary to account for the number of columns in each row and correctly navigate the memory layout of the 2D array.*/

#include <stdio.h>
void main()
{
    int a[5][6] = {
        {11, 12, 13, 14, 15, 16},
        {21, 22, 23, 24, 25, 26},
        {31, 32, 33, 34, 35, 36},
        {41, 42, 43, 44, 45, 46},
        {51, 52, 53, 54, 55, 56}};

    int *p = &a[0][0]; // Pointer to the first element of a

    int i = 4; // Row index
    int j = 3; // Column index

    int element = *(p + 6 * i + j); // Access a[4][3]  a[4][3] = 54   *( p + 6 * 4 +3) = *(p + 27) = 54

    printf("a[%d][%d] = %d\n", i, j, element); // This will print "a[2][4] = 35"

    element = *(p + i + 5 * j); // Access a[2]4[]

    printf("a[%d][%d] = %d\n", i, j, element);
}
