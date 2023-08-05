//////////////////2 dimensional array

/*There could be situations where a table of values will have to be stored. We can think of a table as a matrix
consisting of rows and columns. We represent a matrix by using two subscripts. C allows us to define such
tables of items by using two-dimensional arrays. This can be defined in C as a[3][4]




Two-Dimensional Arrays are declared as follows:

    type array-name[row_size] [column_size];

As with the single-dimensional arrays, each dimension of the array is indexed from zero X(0) to its maximum
size minus one X(N-1); the first index selects the row and the second index selects the column with in that
row.

         Column 0 Column 1 Column 2
         [0][0]   [0][1]   [0][2]
Row 0    125      105      115
        [1][0]   [1][1]    [1][2]
Row 1    225     205       215
        [2][0]  [2][1]    [2][2]
Row 2    325    305       315
       [3][0]  [3][1]    [3][2]
Row 3   425    405       415
Figure : Representation of a two-dimensional array in memory ( 4 x 3 ).

*/

#include <stdio.h>
main()
{

    /// Initialization of Two-Dimensional Arrays.
    /*Like the one-dimensional arrays, two-dimensional arrays may be initialized by following their declaration
with a list of initial values enclosed in braces. For example,*/

    int table[2][3] = {1, 2, 3, 4, 5, 6};

    // The initialization is done row by row. The above statement can be written as
    int table[2][3] = {{1, 2, 3}, {1, 2, 3}}; // by surrounding the elements of the each row by braces.

    // The above statement can be written in the form of a matrix as
    int table[2][3] = {
        {1, 2, 3}, {4, 5, 6}};
    // When the array is completely initialized with all values, explicitly, we need not specify the size of the first  dimension.
    int table[][3] = {
        {1, 2, 3}, {4, 5, 6}}; // is permitted.
    // If the values are missing in an initializer, they automatically set to zero as in 1-dimensional array.
    int table[2][3] = {
        {1, 2},
        {3}};

    // Memory Layout
    /*The subscripts in the definition in the 2-dimensional array represent rows and columns. The elements of all
arrays are stored contiguously in increasing memory locations, essentially in a single list. A 2-dimensional
array is stored “row-wise”, starting from the first row and ending with the last row, treating each row like a
simple array. This is Illustrated below.

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

The elements of all
arrays are stored contiguously in increasing memory locations, essentially in a single list

The statement you provided is correct, and it applies specifically to arrays in C and many other programming languages. When you declare a multi-dimensional array (such as a 2D array) in C, the elements are stored contiguously in memory, forming a single linear sequence.

For example, in a 2D array `arr[row][col]`, the elements are stored in consecutive memory locations as if they were arranged in a 1D array. The row-major order is commonly used, which means that elements of the same row are stored adjacently in memory. This contiguous storage allows for efficient memory access and provides predictable behavior when iterating over the array.

Here's a visual representation of how a 2D array might be stored in memory:

```
arr[0][0] arr[0][1] arr[0][2] arr[1][0] arr[1][1] arr[1][2] ... and so on
```

This property of contiguous storage is particularly important for efficient memory access because it allows the CPU's cache mechanism to work effectively. When you iterate over elements of a multi-dimensional array, the processor can preload adjacent elements into the cache, reducing the number of memory accesses and improving performance.

Keep in mind that although the elements are stored contiguously, the array's syntax and indexing still provide the convenient structure of rows and columns. The compiler handles the translation between the logical indexing you use in your code and the actual memory locations where the elements are stored.
*/

    /*Initializing all specified memory locations:*/
    int a[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};
    // Note that
    a[0][0] = 1, a[1][1] = 6, a[2][2] = 11, a[2][3] = 12;

    /////////////////Partial Array Initialization:
    int a[3][4] = {
        {1, 3},
        {4, 3},
        {5, 6},
    };
    /*Note that first two columns of each row are initialized and the third column of each row will be initialized
with zeros automatically. That is a[0][2], a[1][2], a[2][2], a[3][2] all are initialized with zeros.*/
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /*Reading-Writing 2-Dimensional Arrays:
  To access each item row wise in 2-dimensional array, the row index i should be in the outer loop and column
  index j should be in the inner loop. The C statements to access any element a[i][j] can be written as:*/

    int i, m, a, j, n;
    for (i = 0; i < m; i++) /* m-rows */
    {
        for (j = 0; j < n; j++) /* n-columns */
        {
            a[i][j]; /* M x N accesses */
        }
    }

    // To Read 2-Dimensional Array of Size M x N: By including scanf() just before a[i][j].
    for (i = 0; i < m; i++) /* m-rows */
    {
        for (j = 0; j < n; j++) /* n-columns */
        {
            scanf("%d", &a[i][j]); /* Read M x N items */
        }
    }
    // To Print 2-Dimensional Array of Size M x N: By including printf() just before a[i][j].
    for (i = 0; i < m; i++) /* m-rows */
    {
        for (j = 0; j < n; j++) /* n-columns */
        {
            printf("%d", a[i][j]); /* Print M x N items */
        }
        printf("\n"); /* move to new/next line */
    }

    //Leaving out the subscript reference operator [] in an assignment operator is compile time error.( use 
  //of a = 5 instead of a[3] = 5 )

}
