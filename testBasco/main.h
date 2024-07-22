#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

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

int _putchar(char c);
int _printf(const char *format, ...);
void print_int(va_list args);
void print_unsigned_int(va_list args);
void print_string(va_list args);
void print_char(va_list args);
void print_percent(va_list args);
void print_hexa_mini(va_list args);
void print_hexa_maxi(va_list args);
void print_octal(va_list args);
void print_address(va_list args);

#endif
