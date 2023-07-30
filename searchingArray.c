////////////////////searching array

#include <stdio.h>

main()
{
    int ctr;       // loop counter
    int idSearch;  // coustemer to look for (the key)
    int found = 0; // will be true if coustmer is found

    // defines the 10 elements in the two parallel arrays

    int custId[10] = {313, 453, 502, 101, 892, 475, 792, 912, 343, 633};
    float custBal[10] = {0.00, 45.43, 71.23, 301.56, 9.08, 192.41, 389.00, 229.67, 18.31, 59.54};

    /* interact with the user looking for a balance*/
    printf("\n \n ***coustemer balance lookup***\n");
    printf("What customer number do you need to check? ");
    scanf(" %d", &idSearch);

    /*search to see that the coustmer id esists in the array*/
    for (ctr = 0; ctr < 10; ctr++)
    {

        if (idSearch == custId[ctr])
        {
            found = 1;
            break;
        }
    }
    if (found)
    {
        if (custBal[ctr] > 100.00)
        {
            printf("\n** That customer's balance is $%.2f.\n",
                   custBal[ctr]);
            printf(" No additional credit.\n");
        }
        else
        {
            printf("\n** The customer's credit is good!\n");
        }
    }
    else
    {
        printf("** You must have typed an incorrect customer ID.");
        printf("\n ID %3d was not found in list.\n", idSearch);
    }
    return (0);
}
