#ifndef _MAIN_H_
#define _MAIN_H_

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

#endif
