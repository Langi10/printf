#include "main.h"

/**
 * print_str - prints a string
 * @specifier: valist.
 *
 * Return: Number of characters printed to the output.
 */

int print_str(va_list specifier)
{
	char *name = va_arg(specifier, char *);
	int i = 0;

	if (name)
	{
		while (name[i])
			write(1, name + i++, 1);

		return (i);
	}
	return (-1);
}
