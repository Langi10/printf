#include "main.h"

/**
 * print_b - converts unsigned int to binary
 * @types: args
 * Return: number of binary digits printed
 */

int print_b(va_list types)
{
	unsigned int number = va_arg(types, unsigned int);
	char binary[256], temp;
	int i = 0, len = 0, middle;

	do {
		binary[len] = number % 2 ? '1' : '0';
		number /= 2;
		len++;
	} while (number != 0);

	binary[len] = '\0'; /* null terminate the binary string */

	middle = len / 2;

	/* swap the numbers to reverse the binary string */
	for (i = 0; i < middle; i++)
	{
		temp = binary[i];
		binary[i] = binary[len - i - 1];
		binary[len - i - 1] = temp;
	}

	for (i = 0; i < len; i++)
		_putchar(binary[i]);

	return (len);
}

/**
 * print_x - prints hexadecimal numbers in lowercase
 * @types: args
 * Return: number of characters printed
 */

int print_x(va_list types)
{
	unsigned int number = va_arg(types, unsigned int);
	int i, j;
	char hex[256];

	i = 0;
	while (number >= 16)
		hex[i] = number % 16, number /= 16, i++;

	hex[i] = number;
	for (j = i; j >= 0; j--)
	{
		switch (hex[j])
		{
		case 10:
			_putchar('a');
			break;
		case 11:
			_putchar('b');
			break;
		case 12:
			_putchar('c');
			break;
		case 13:
			_putchar('d');
			break;
		case 14:
			_putchar('e');
			break;
		case 15:
			_putchar('f');
			break;
		default:
			_putchar(hex[j] + '0');
		}
	}

	return (i + 1);
}

/**
 * print_X - print hexadecimal in uppercase
 * @types: args
 * Return: number of characters printed
 */

int print_X(va_list types)
{
	unsigned int number = va_arg(types, unsigned int);
	int i, j;
	char hex[256];

	i = 0;
	while (number >= 16)
		hex[i] = number % 16, number /= 16, i++;

	hex[i] = number;
	for (j = i; j >= 0; j--)
	{
		switch (hex[j])
		{
		case 10:
			_putchar('A');
			break;
		case 11:
			_putchar('B');
			break;
		case 12:
			_putchar('C');
			break;
		case 13:
			_putchar('D');
			break;
		case 14:
			_putchar('E');
			break;
		case 15:
			_putchar('F');
			break;
		default:
			_putchar(hex[j] + '0');
		}
	}

	return (i + 1);
}

/**
 * print_o - prints octal number
 * @types: args
 * Return: number of characters printed
 */

int print_o(va_list types)
{
	unsigned int n = va_arg(types, unsigned int);
	char oct[256];
	int i, j;

	i = 0;

	while (n >= 8)
	{
		oct[i] = n % 8;
		n /= 8;
		i++;
	}

	oct[i] = n;

	for (j = i; j >= 0; j--)
		_putchar(oct[j] + '0');
	return (i + 1);
}
