#include "main.h"  // Include the "main.h" header file for function prototypes and declarations.

/**
 * print_string - print a whole string
 * @c: string that will be passed
 * Return: the length of the string
 */
int print_string(char *c)
{
	int k = 0;  // Initialize a variable 'k' to keep track of the character index.

	while (c[k] != '\0')  // Loop through the characters in the string until the null terminator '\0' is reached.
	{
		_putchar(c[k]);  // Call the '_putchar' function to print the character at index 'k'.
		k++;  // Increment 'k' to move to the next character in the string.
	}

	return (k);  // Return the value of 'k' which represents the length of the string.
}