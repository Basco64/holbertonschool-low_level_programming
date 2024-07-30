#include "main.h"

/**
 * error_exit - Print error message and exit
 *
 * @code: Exit code
 * @message: Error message
 * @file: File name
 *
 * Return: Nothing
 */

void error_exit(int code, const char *message, const char *file)
{
	dprintf(STDERR_FILENO, message, file);
	exit(code);
}


/**
 * main - Program that displays the information
 * contained in the ELF header at the start of an ELF file
 *
 * @argc: Argument count
 * @argv: Arguments Values (Array of String)
 *
 * Return: 0
*/

void main(int argc, char **argv)
{
	int elfile;

	if (argc != 2)
		error_exit(98, "Usage: %s elf_filename\n", argv[0]);

	elfile = open(argv[1], O_RDONLY);
	if (elfile == -1)
		error_exit(98, "Can't read from file %s\n", argv[1]);

	if (close(elfile) == -1)
		error_exit(98, "Error: Can't close fd %d\n", argv[1]);
}
