#include <iostream>
// Calls compliler.
int main()
{

/* This is what I learned about variables and how to use them */

/* Create a variable using the following syntax*/
/* type variableName = value; */

/* Types of variables */
/* Integers */
/* Whole numbers (can be negative) */
int favNumber = 6;

/* Double */
/* Floating numbers (can be negative) */
double favDecimal = 0.24;

/* Char */
/* Single characters */
/* Needs stored in single quotes */
char firstInitial = 'S';

/* String */
/* Stores text */
/* Needs stored in double quotes */
std::string basicPhrase = "Hello World!";

/* Booleans */
/* True or False */
bool myBoolean = true;

/* Learned how to display these variables */
std::cout << basicPhrase << " " <<
"My initial is " << firstInitial << ". " <<
"My favorite number is " << favNumber << ". " <<
"My favorite decimal is " << favDecimal << ". " <<
"This will alwys be " << myBoolean << ".";



}