#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/**
 * struct funcs - encapsulates a function pointer with a string pointer.
 * @ch: character to compare.
 * @f: function pointer that handles a  given conversion.
 */

typedef struct funcs
{
	char *ch;
	int (*f)(va_list);
} func_t;

int _printf(const char *format, ...);
int (*check_specifier(const char *))(va_list);
int print_str(va_list);
int _putchar(int c);
int print_d(va_list types);
int print_c(va_list types);
int print_i(va_list types);
int find_hex(char c);
int print_S(va_list types);
int print_o(va_list types);
int print_x(va_list types);
int print_X(va_list types);
int print_b(va_list types);

#endif /* MAIN_H */
