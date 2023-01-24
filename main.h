#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>

/**
 * print struct - a structure for printing different types
 * @t: type to print
 * @f: function to print
 */

typedef struct print
{
	char *t;
	int (*f)(va_list);
} print_t;

int _putchar(char c);
int _printf(const char *format, ...);


#endif
