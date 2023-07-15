//////////////Array

/* an array of characters is just a list of characters that has a name.

an array of integers is just a list of integers that has a name

an array of floating-point values is just a list of floating-point values that has a name.


Instead of referring to each of the array elements by a different
name, you refer to them by the array name and distinguish them with a subscript enclosed in brackets.


Reviewing Arrays

All arrays contain values called elements.

An array can contain only elements that are of the same
type.

In other words, you can’t have an array that has a floating-point value, a character value, and an integer value.

You define arrays almost the same way you define regular non-array variables.

/////////////////////////
To define a regular variable, you only have to specify its data type next to the variable name:

int i; // Defines a non-array variable
///////////////////////
To define an array, you must add brackets ([]) after the name and specify the maximum number of elements you will ever store in the array:

int i[25]; // dfines the array

If you want to initialize a character array with an initial string,

char name[6] = "Italy"; /leave room for the null
*/

/*After you define an array to a certain size, don’t try to store more elements than were allowed in the original size.
After defining name as just done, the strcpy()
function lets you store a string longer than Italy in name, but the result would be
disastrous because other data in memory could be overwritten unintentionally. If another variable happened to be defined immediately after name, that other variable’s data will be overwritten if you try to store a too-long string in name.

////////////////
If the initial array needs to be larger than the initial value you assign, specify a larger array size when
you define the array, like this:

char name[80] = "Italy"; // Leaves lots of extra room

*/