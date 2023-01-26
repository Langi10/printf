#include "main.h"

/**
 * print_c - prints a character passed as part of a variable argument list.
 * @types: argument list containing the character to be printed.
 *
 * Return: number of characters printed.
 */

int print_c(va_list types
{
	_putchar(va_arg(types, int));
	return (1);
}
