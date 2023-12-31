// Arrays of Pointers

/*If you want to use a bunch of pointers, create an array of them. An array of pointers is just as easy to
define as an array of any other kind of data, except that you must include the * operator after the data
type name. The following statements reserve an array of 25 integer pointers and an array of 25
character pointersArrays of Pointers
*/

#include <stdio.h>
#include <string.h>
void main()
{
    int *ipara[25];  /* 25 pointers to integers */
    char *cpara[25]; /* 25 pointers to characters */

    /* This program declares and initializes an array of character
pointers and then asks for ratings associated */

    int i;
    int ctr = 0;
    char ans;
    // Declaring our array of 9 characters and then initializing them
    char *movies[9] = {"Amour", "Argo",
                       "Beasts of the Southern Wild",
                       "Django Unchained",
                       "Les Miserables",
                       "Life of Pi", "Lincoln",
                       "Silver Linings Playbook",
                       "Zero Dark Thirty"};
    int movieratings[9]; // A corresponding array of 9 integers
    // for movie ratings
    char *tempmovie = "This will be used to sort rated movies";
    int outer, inner, didSwap, temprating; // for the sort loop
    printf("\n\n*** Oscar Season 2012 is here! ***\n\n");
    printf("Time to rate this year's best picture nominees:");
    for (i = 0; i < 9; i++)
    {
        printf("\nDid you see %s? (Y/N): ", movies[i]);
        scanf(" %c", &ans);
        if ((toupper(ans)) == 'Y')
        {
            printf("\nWhat was your rating on a scale ");
            printf("of 1-10: ");
            scanf(" %d", &movieratings[i]);
            ctr++; // This will be used to print only movies
            // you've seen
            continue;
        }
        else
        {
            movieratings[i] = -1;
        }
    }
    // Now sort the movies by rating (the unseen will go
    // to the bottom)
    for (outer = 0; outer < 8; outer++)
    {
        didSwap = 0;
        for (inner = outer; inner < 9; inner++)
        {
            if (movieratings[inner] > movieratings[outer])
            {
                tempmovie = movies[inner];
                temprating = movieratings[inner];
                movies[inner] = movies[outer];
                movieratings[inner] = movieratings[outer];
                movies[outer] = tempmovie;
                movieratings[outer] = temprating;
                didSwap = 1;
            }
        }
        if (didSwap == 0)
        {
            break;
        }
    }
    // Now to print the movies you saw in order
    printf("\n\n** Your Movie Ratings for the 2012 Oscar ");
    printf("Contenders **\n");
    for (i = 0; i < ctr; i++)
    {
        printf("%s rated a %d!\n", movies[i], movieratings[i]);
    }
}