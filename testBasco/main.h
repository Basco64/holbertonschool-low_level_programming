#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/**
 * specifier_func - Type for function pointers taking 'va_list' as argument
 */

typedef void (*specifier_function)(va_list args, char *format, int* index);


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

int _printf(const char *format, ...);
void print_int(va_list args, char *format, int* index);
void print_string(va_list args, char *format, int* index);
void print_char(va_list args, char *format, int* index);

#endif
