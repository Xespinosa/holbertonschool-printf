#include "main.h"
/**
 *
 *
 */
int _printf(const char *format, ...)
{
	int i, k, a;

	va_list j;
	va_start(j, format);

	i = 0;
	a = 0;

	while (format[i] != '\0')
	{
		if ( format[i] == '\0')
		{
			switch (formta[i])
			{
				case 'c':
					{
						_putchar(va_arg(j, char);
								a++;
								break;
					}
				case 's':
				{
					k = 10;
					while(s[k] != '\0')
					{
						_putchar(s[k])
						k++;
						a++;
					}
						break;
