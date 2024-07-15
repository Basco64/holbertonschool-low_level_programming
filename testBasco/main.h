#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/**
 * specifier_func - Type for function pointers taking 'va_list' as argument
 */

typedef void (*specifier_function)(va_list args);


/**
 * struct specifier - Structure defining a format
 * specifier and its associated function
 *
 * @letter: The specifier character
 * @function: Pointer to the function
 */

typedef struct specifier
{
	char letter;
	specifier_function function;

} specifierType;

/**
 * specifier become an external variable
 * */

extern specifierType specifiers[];

int printcequejetedis(const char *str, ...);
void print_int(va_list args);
void print_string(va_list args);
void print_char(va_list args);

#endif