#ifndef _MAIN_H_
#define _MAIN_H_

/**
 * printf struct - a structure for printing diferent types
 * @t: type to print
 * @f: function to print
 */

typedef struct print
{
	char *t;
	int (*f)(va_list);
} print_t;
