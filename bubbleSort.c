////////bubble sort

/*The bubble sort isn’t extremely efficient compared to other sorts, but it’s the easiest to understand

The name bubble sort comes from the nature of the sort. During a sort, the lower values “float” up the list
each time a pass is made through the data

During each pass, the lower values “float” to the top of the array
*/
/* This program generates 10 random numbers and then sorts them */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
    int ctr, inner, outer, didSwap, temp;
    int nums[10];
    time_t t;
    // If you don't include this statement, your program will always
    // generate the same 10 random numbers
    srand(time(&t));
    // The first step is to fill the array with random numbers
    // (from 1 to 100)
    for (ctr = 0; ctr < 10; ctr++)
    {
        nums[ctr] = (rand() % 99) + 1;
    }
    // Now list the array as it currently is before sorting
    puts("\nHere is the list before the sort:");
    for (ctr = 0; ctr < 10; ctr++)
    {
        printf("%d\n", nums[ctr]);
    }
    // Sort the array
    for (outer = 0; outer < 9; outer++)
    {
        didSwap = 0; // Becomes 1 (true) if list is not yet ordered
        for (inner = outer; inner < 10; inner++)
        {
            if (nums[inner] < nums[outer])
            {
                temp = nums[inner];
                nums[inner] = nums[outer];
                nums[outer] = temp;
                didSwap = 1;
            }
        }
        if (didSwap == 0)
        {
            break;
        }
    }
    // Now list the array as it currently is after sorting
    puts("\nHere is the list after the sort:");
    for (ctr = 0; ctr < 10; ctr++)
    {
        printf("%d\n", nums[ctr]);
    }
    return (0);
}
