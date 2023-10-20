#include "main.h"  // Include the "main.h" header file for function prototypes and declarations.

/**
 * print_int - print out a number
 * @n: number to be saved and printed
 * Return: the total length of numbers printed
 */
int print_int(int n)
{
	char hold[12];  // Initialize an array to hold the string representation of the number.
	int i, result, j, tmp, neg = 0;  // Declare variables for looping and manipulation, 'result' to store the total length, and 'neg' for checking if the number is negative.

	if (n < 0)  // Check if 'n' is negative.
	{
		neg = 1;  // Set 'neg' to 1 to indicate a negative number.
		n = -n;   // Make 'n' positive for processing.
	}

	// Convert the number 'n' into a string and store it in 'hold' array.
	for (i = 0; n != 0; i++)
	{
		hold[i] = n % 10 + '0';  // Extract the last digit, convert it to a character, and store it in 'hold'.
		n /= 10;  // Move to the next digit.
	}

	if (neg)
		hold[i++] = '-';  // If the number was negative, add a '-' sign to 'hold'.

	// Reverse the characters in the 'hold' array to get the correct order.
	for (j = 0; j < i / 2; j++)
	{
		tmp = hold[j];
		hold[j] = hold[i - j - 1];
		hold[i - j - 1] = tmp;
	}

	result = print_string(hold);  // Print the string representation of the number and store the length in 'result'.

	return (result);  // Return the total length of characters printed.
}