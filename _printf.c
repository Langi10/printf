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
	int i = 0, cnt = 0, flag, k;
	va_list types;
	func_t myfuncs[] = {{"c", print_c}, {"s", print_str}, {"d", print_d},
			    {"i", print_i},/* {"b", print_b}, {"u", print_ui},
			    {"o", print_o}, {"x", print_x}, {"X", print_X},
			    {"S", print_S},*/ {NULL, NULL}};

	va_start(types, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] == '%')
			_putchar(format[i + 1]), i++, cnt++;
		else if (format[i] == '%' && format[i + 1] != '%')
		{
			flag = 0, k = 0;
			for (k = 0; myfuncs[k].ch != NULL; k++)
			{
				if (myfuncs[k].ch[0] == format[i + 1])
				{
					cnt += myfuncs[k].f(types);
					flag = 1, i++;
					break;
				}
			}
			if (!flag)
				_putchar(format[i]), cnt++;
		}
		else
			cnt += _putchar(format[i]);
		i++;
	}
	va_end(types);
	return (cnt);
}
