// strcpy()
// strncpy()
//
//
#include <string.h>
#include <stdio.h>
void main()
{

    char string1[23] = {"mannerism"}, string2[20] = {"ballterman"};

    strcpy(string1, string2); // Copies string2 value into string1
    printf("string1 = %s", string1);

    strncpy(string1, string2, 5);
    string1[5] = '\0'; // Null-terminate string1
    printf("\nstring1 = %s", string1);
    /*string1 = ballterman
string1 = ballt*/

    char string3[20] = {"manymore"};
    string3[4] = '\0';
    printf("\nstring3 = %s", string3);
}

/*If the destination string already contains some elements when using the `strcpy()` function, those existing elements will be replaced by the characters copied from the source string. The `strcpy()` function does not perform any concatenation or appending; it simply copies the characters from the source string into the destination string, potentially overwriting any existing content.

Here's an example to illustrate:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char dest[20] = "Existing Text"; // Destination string with existing content
    const char source[] = "New Text"; // Source string

    strcpy(dest, source); // Copy source into destination

    printf("Destination string after strcpy: %s\n", dest);

    return 0;
}
```

In this example, the `strcpy()` function copies the characters from the `source` string ("New Text") into the `dest` string, replacing the existing content. After the operation, the `dest` string will contain "New Text".

It's important to ensure that the destination string has enough allocated memory to accommodate the copied content. If the source string is longer than the available space in the destination string, it can lead to buffer overflow and undefined behavior.

If you want to concatenate or append strings without overwriting the destination's existing content, you should use the `strcat()` function.*/