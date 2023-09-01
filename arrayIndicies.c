/*1. Rows and Columns as Structural Aspects:

When we talk about "rows" and "columns" in the context of 2D arrays, we are describing the conceptual organization of data within the array.
In a 2D array, rows represent horizontal collections of elements, and columns represent vertical collections of elements.
These terms help us visualize and understand how the data is arranged within the array, especially when the array represents tabular or grid-like data.
For example, consider this 2D array representing a simple 3x4 grid of numbers:*/
void main()
{
    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};
}
// In this array, we can talk about the "3 rows" and "4 columns" to describe its structure.

/*2. Array Indices for Access:

While rows and columns describe the structure, actual access to individual elements within the array is done using array indices.
In C, array indices are zero-based integers that indicate the position of an element within the array.
For example, to access specific elements within the array, you use array indices:

arr[0][0] accesses the element at the first row (row 0) and the first column (column 0), which is 1.
arr[1][2] accesses the element at the second row (row 1) and the third column (column 2), which is 7.
arr[2][3] accesses the element at the third row (row 2) and the fourth column (column 3), which is 12.
Here, the array indices (0, 1, 2, 3) directly specify the positions of elements within the array, regardless of the conceptual "rows" and "columns."

So, in summary, "rows" and "columns" help us conceptualize the structure of a 2D array, while array indices are the specific zero-based integers we use to access individual elements within the array when writing code.*/