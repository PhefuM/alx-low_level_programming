#ifndef VARIADIC_FUNCTION_H
#define VARIADDIC_FUNCTIONS_H

/**
 * variadic_functions - stores all prototype
 * Auth: Phefumlela Madyo
 * Desc: Header containing prototypes for all functions
 * used in the 0x0F-variadic_functions directory
 */

#include <stdarg.h>

/**
 * struct pointer - a new struct type defining a printer
 * @symbol: a symbol representing a data type
 * @print: a function pointer to a function that prints
 * a data type corresponding to symbol
 */
typedef struct printer
{
	char *symbol;
	void (*print)(va_list arg)

} printer_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
