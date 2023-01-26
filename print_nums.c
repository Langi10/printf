#include "main.h"

/**
 * print_i - prints decimal number (base 10)
 * @args: args
 * Return: number of digits printed
 */

int print_i(va_list args)
{
	unsigned int absolute, aux, countnum, count;
	int n;

	count = 0;
	n = va_arg(args, int);
	if (n < 0)
		absolute = (n * -1), count += _putchar('-');

	else
		absolute = n;

	aux = absolute;
	countnum = 1;

	while (aux > 9)
		aux /= 10, countnum *= 10;

	while (countnum >= 1)
	{
		count += _putchar(((absolute / countnum) % 10) + '0');
		countnum /= 10;
	}
	return (count);
}

/**
 * print_d - prints decimal number (base 10)
 * @types: argument list
 * Return: number of digits printed
 */

int print_d(va_list types)
{
	return (print_i(types));
}

/**
 * print_iu - prints unsigned integer
 * @types: args
 * Return: number of characters printed
 */

int print_ui(va_list types)
{
	unsigned int number = va_arg(types, unsigned int);
	int last_digit = number % 10, num = number / 10;
	int digit, base = 1, count = 1;

	if (num) /* checks to see if num > 10 */
	{
		while (num / 10)				 /* loop until num < 10 */
			base = base * 10, num /= 10; /* calculate base of the number */

		num = number / 10; /* reset the value of num to it's original value */
		while (base > 0)
		{
			digit = num / base;
			_putchar(digit + '0');
			num -= (digit * base);
			base /= 10;
			count++;
		}
	}

	_putchar(last_digit + '0');
	return (count);
}
