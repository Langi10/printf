#include "main.h"

/**
 *  _printf - produces output according to a format.
 * @format: the pointer to what is to be displayed.
 *
 * Return: the number of characters printed (Excluding the null byte at the end
 * of a string
 */

int  _printf(const char *format, ...)
{
	int i = 0, j = 0;
	va_list types;
	int (*f)(va_list);

	va_start(types, format);
	if (format)
	{
		while (format[i] != '\0')
		{
			if (format[i] != '%')
			{
				i += write(1, format + i, 1);
				j++;
				continue;
			}
			if (format[i] == '%' && (format[i + 1] != '%' || format[i + 1] != '\0'))
			{
				f = check_specifier(format + i + 1);
				if (f != NULL)
				{
					j += f(types);
					i += 2;
					continue;
				}
			}
			if (format[i] == '%' && format[i + 1] == '%')
			{
				j += _putchar('%'), i += 2;
				continue;
			}
		}
		return (j);
	}
	return (-1);
}
