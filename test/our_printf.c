#include "main.h"
#include <stdarg.h>


int _printf(const char *format, ...)
{
	int i = 0;
	int a = 0;
	va_list(j);
	va_start(j, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			switch(format[i + 1])
			{
				case 'c':
				{
					a += print_letter(va_arg(j, int));
					break;
				}
				case 's':
				{
					a += print_string(va_arg(j, char *));
					break;
				}

				case '%':
				{
					a += print_letter('%');
					break;
				}
				default:
				{
					break;
				}
			}
			i++;
		}

		else
		{
			a += print_letter(format[i]);
		}
		i++;
	}
	va_end(j);
	return(a);
}
