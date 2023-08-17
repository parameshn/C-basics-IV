/**/
#include <stdio.h>
// #include <string.h>

void main()
{

    int string1[5], string2[6];
    //  Function Syntax(or) Example Description
    strcpy();
    ;
    (string1, string2); // Copies string2 value into string1
    strncpy();
    strncpy(string1, string2, 5); // Copies first 5 characters string2 into string1
    strlen();
    strlen(string1); // returns total number of characters in string1
    strcat();
    strcat(string1, string2); // Appends string2 to string1
    strncat();
    strncpy(string1, string2, 4); /// Appends first 4 characters of string2 to string1
    strcmp();
    strcmp(string1, string2); // Returns 0 if string1 and string2 are the same;
                              //  less than 0 if string1 < string2;greater than 0 if string1 > string2
    strncmp();
    strncmp(string1, string2, 4); // Compares first 4 characters of both string1 and string2

    strcmpi();
    strcmpi(string1, string2); // Compares two strings, string1 and string2 by ignoring case (upper or lower)
    stricmp();
    stricmp(string1, string2); // Compares two strings, string1 and string2 by ignoring case (similarto strcmpi()
    strlwr();
    strlwr(string1); // Converts all the characters of string1 to lower case.
    strupr();
    strupr(string1); // Converts all the characters of string1 to upper case.
    strdup();
    //  string1 = strdup(string2); // Duplicated value of string2 is assigned to string1
    strchr();
    strchr(string1, 'b'); // Returns a pointer to the first occurrence of character 'b' in string1
    strrchr();
    strrchr(string1, 'b'); // Returns a pointer to the last occurrence of character 'b' in string1
    strstr();
    strstr(string1, string2); // Returns a pointer to the first occurrence of string2 in string1
    strset();
    strset(string1, 'B'); // Sets all the characters of string1 to given character 'B'.
    strnset();
    strnset(string1, 'B', 5); // Sets first 5 characters of string1 to given character 'B'.
    strrev();
    strrev(string1); // It reverses the value of string1
}