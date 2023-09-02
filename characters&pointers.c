// Characters and Pointers

#include <stdio.h>
#include <string.h>
void main()
{
    char name[] = "Andrew B. Mayfair"; /* name points to A */
    char *pName = "Andrew B. Mayfair"; /* pName points to A */

    printf("name = %s", name);
}