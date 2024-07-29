#include "lists.h"

void before(void) __attribute__((constructor));

/**
 * before - Function to execute before main
 *
 * Return: Nothing
 */

void before(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
