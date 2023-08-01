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

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/* This program searches a sorted list of customer IDs in order to
get credit totals */
#include <stdio.h>
main()
{
    int ctr;       // Loop counter
    int idSearch;  // Customer to look for (the key)
    int found = 0; // 1 (true) if customer is found
    /* Defines the 10 elements in each of the parallel arrays */
    int custID[10] = {313, 453, 502, 101, 892, 475, 792, 912, 343, 633};
    float custBal[10] = {0.00, 45.43, 71.23, 301.56, 9.08, 192.41, 389.00, 229.67, 18.31, 59.54};
    int tempID, inner, outer, didSwap, i; // For sorting
    float tempBal;
    // First, sort the arrays by customer ID */
    for (outer = 0; outer < 9; outer++)
    {
        didSwap = 0; // Becomes 1 (true) if list is not yet ordered
        for (inner = outer; inner < 10; inner++)
        {
            if (custID[inner] < custID[outer])
            {
                tempID = custID[inner];   // Must switch both arrays
                tempBal = custBal[inner]; // or they are no longer
                // linked
                custID[inner] = custID[outer];
                custBal[inner] = custBal[outer];
                custID[outer] = tempID;
                custBal[outer] = tempBal;
                didSwap = 1; // True because a swap took place
            }
        }
        if (didSwap == 0)
        {
            break;
        }
    }
    /* Interact with the user looking to find a balance */
    printf("\n\n*** Customer Balance Lookup ***\n");
    printf("What is the customer number? ");
    scanf(" %d", &idSearch);
    // Now, look for the ID in the array
    for (ctr = 0; ctr < 10; ctr++)
    {
        if (idSearch == custID[ctr]) // Do they match?
        {
            found = 1; // Yes, match flag is set to TRUE
            break;     // No need to keep looping
        }
        if (custID[ctr] > idSearch) // No need to keep searching
        {
            break;
        }
    }
    // Once the loop has completed, the ID was either found
    // (found = 1) or not
    if (found)
    {
        if (custBal[ctr] > 100)
        {
            printf("\n** That customer's balance is $%.2f.\n",
                   custBal[ctr]);
            printf("No additional credit.\n");
        }
        else // Balance is less than $100.00
        {
            printf("\n**The customer's credit is good!\n");
        }
    }
    else // The ID was not found
    {
        printf("** You have entered an incorrect customer ID.");
        printf("\n ID %3d was not found in the list.\n", idSearch);
    }
    return (0);
}