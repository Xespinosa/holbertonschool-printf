#include "main.h"         // Include the "main.h" header file for function prototypes and declarations.
#include <stdarg.h>        // Include the "stdarg.h" header for working with variable arguments.

int _printf(const char *format, ...)
{
	int i = 0;           // Initialize an index variable for iterating through the format string.
	int a = 0;           // Initialize a variable to keep track of the number of characters printed.
	va_list(j);          // Declare a variable argument list 'j'.
	va_start(j, format); // Start processing the variable arguments using 'j'.

	while (format[i] != '\0') // Loop through the characters in the 'format' string until the end is reached.
	{
		if (format[i] == '%') // Check if the current character is a '%' character (indicating a format specifier).
		{
			switch(format[i + 1]) // Check the character following '%' to determine the format specifier.
			{
				case 'c':  // If it's 'c', handle a character format specifier.
				{
					a += print_letter(va_arg(j, int)); // Call a function to print a character, and update 'a'.
					break;
				}
				case 's':  // If it's 's', handle a string format specifier.
				{
					a += print_string(va_arg(j, char *)); // Call a function to print a string, and update 'a'.
					break;
				}
				case '%':  // If it's '%%', handle the literal '%' character.
				{
					a += print_letter('%'); // Call a function to print '%', and update 'a'.
					break;
				}
				case 'd':
				case 'i':  // If it's 'd' or 'i', handle integer format specifiers.
				{
					a += print_int(va_arg(j, int)); // Call a function to print an integer, and update 'a'.
					break;
				}
				default:  // If it's an unsupported format specifier, treat it as plain text.
				{
					a += print_letter(format[i]);     // Print the '%' character.
					a += print_letter(format[i + 1]); // Print the next character.
					break;
				}
			}
			i++; // Increment the index to skip the format specifier character.
		}
		else
		{
			a += print_letter(format[i]); // If not a '%', print the character as is.
		}
		i++; // Move to the next character in the format string.
	}
	va_end(j); // End processing of variable arguments.
	return a;  // Return the total number of characters printed.
}