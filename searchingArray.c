////////////////////searching array

/* This program takes an ID number from the user and then checks the
ID against a list of customers in the database. If the customer
exists, it uses that array element to check their current balance,
and warns the user if the balance is more than 100 */
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

/* This program fills three arrays with a player's total points,
rebounds, and assists It loops through the scoring array and finds
the game with the most points. Once it knows that information, it
prints the totals from all three categories from that game */
#include <stdio.h>
main()
{
    int gameScores[10] = {12, 5, 21, 15, 32, 10, 6, 31, 11, 10};
    int gameRebounds[10] = {5, 7, 1, 5, 10, 3, 0, 7, 6, 4};
    int gameAssists[10] = {2, 9, 4, 3, 6, 1, 11, 6, 9, 10};
    int bestGame = 0; // The comparison variable for best scoring
    // game
    int gmMark = 0; // This will mark which game is the best scoring
    // game
    int i;
    for (i = 0; i < 10; i++)
    {
        // if loop will compare each game to the current best total
        // if the current score is higher, it becomes the new best
        // and the counter variable becomes the new flag gmMark
        if (gameScores[i] > bestGame)
        {
            bestGame = gameScores[i];
            gmMark = i;
        }
    }
    // Print out the details of the best scoring game
    // Because arrays start at 0, add 1 to the game number
    printf("\n\nThe Player's best scoring game totals:\n");
    printf("The best game was game #%d\n", gmMark + 1);
    printf("Scored %d points\n", gameScores[gmMark]);
    printf("Grabbed %d rebounds\n", gameRebounds[gmMark]);
    printf("Dished %d assists\n", gameAssists[gmMark]);
    return (0);
}