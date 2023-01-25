#include "main.h"

/**
 * check_specifier - checks if a character is a valid specifier and assignes an
 * appropriate function for printing.
 * @format: the specifier(char *).
 *
 * Return: pointer to a function.
 */

int (*check_specifier(const char *format))(va_list)
{
	int i;
	func_t myfuncs[] = {{"c", print_c}, {"s", print_str}, {"d", print_d},
			    {"i", print_i},/* {"b", print_b}, {"u", print_u},
			    {"o", print_o}, {"x", print_x}, {"X", print_X},
			    {"S", print_S},*/ {NULL, NULL}};

	for (i = 0; myfuncs[i].ch != NULL; i++)
		if (*(myfuncs[i].ch) == *format)
			return (myfuncs[i].f);

	return (NULL);
}
