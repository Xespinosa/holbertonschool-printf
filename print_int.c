#include "main.h"

/**
 *print_int - print out a number
 *@n: number to be saved and printed
 *Return: the total length of numbers printed
 */

int print_int(int n)
{
	char hold[12];
	int i, result, j, tmp, neg = 0;

	if (n < 0)
	{
		neg = 1;
		n = -n;
	}
	for (i = 0; n != 0; i++)
	{
		hold[i] = n % 10 + '0';
		n /= 10;
	}
	if (neg)
		hold[i++] = '-';
	for (j = 0; j < i / 2; j++)
	{
		tmp = hold[j];
		hold[j] = hold[i - j - 1];
		hold[i - j - 1] = tmp;
	}
	result = print_string(hold);

	return (result);
}
