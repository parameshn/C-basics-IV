/// Reading Strings from Terminal

// We can read string entered by a user at console using two in-built functions such as - scanf() and gets().

/* Using scanf() function to read a string in C */
#include <stdio.h>
int main()
{
    char season[20];
    printf("Enter your favorite season : ");
    scanf("%s", season);
    printf("Your favorite season is : %s", season);
    return 0;
}

/*In this example, the user is asked to type in his/her favorite season. As soon as, the user enters the
asked information and presses the enter button on the keyboard, all the characters entered by the
user get stored in the char array named season, using the format specifier %s with inbuilt scanf() function.*/

///////
////The scanf() function cannot read a multi-word string

/* scanf() function cannot read multi-word strings in C */
#include <stdio.h>
int main()
{
    char country[20];
    printf("Enter a country you want to visit : ");
    scanf("%s", country); /*scanf() function can't read multi-words*/
    printf("The country you want to visit is : %s", country);
    return 0;
}

/*As soon as, the user enters the asked
information i.e. Czech Republic and presses the enter button on the keyboard, Only the characters in the first
word Czech get stored in the char array named season, the second word Republic after space does not get
stored in char array. This proves that using the format specifier %s with in-built scanf() function, we cannot
read multi-word strings typed at the console.*/

////////////
// In this situation, a built-in function gets() comes to the rescue.
/*Using gets() function to read a string in C */

#include <stdio.h>
int main()
{
    char country[20];
    printf("Enter a country you want to visit : ");
    gets(country);
    printf("The country you want to visit is : %s", country);
    return 0;
}

/*As you can in the example, the whole multi-word string i.e. name of the country entered by the user gets
stored in the char array, using the in-built gets() function, which we couldn't achieve using scanf() function.
And unlike, scanf() method, the gets() method does not take any format specifier as a parameter but only
takes the name of char array.*/

/* Let's finish this article by looking at an example of the opposite of gets() i.e. the puts function.*/

// using puts function to display a string

#include <stdio.h>

int main()
{
    char country[20];
    printf("enter a country you want to visit :");
    gets(country);
    printf("the country you want to visit is :");
    puts(country);
    return 0;
}
/*The function puts() is used to display the content of a char array/string.
Just like gets() function, the  the puts() method does not take any format specifier as a parameter but only takes the name of char array
whose content is to be displayed.*/