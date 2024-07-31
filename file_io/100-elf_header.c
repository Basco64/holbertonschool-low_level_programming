#include "main.h"
/**
 * An ELF (Executable and Linkable Format) file is a standard file
 * format for executable files, object code, shared libraries,
 * and core dumps used in Unix and Unix-like operating systems
 */

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
 * print_magic - Print magic of an ELF header
 *
 * Return: Nothing
 */

void print_magic(void)
{}

/**
 * print_class - Print class of an ELF header
 *
 * Return: Noting
 */

void print_class(void)
{}

/**
 * print_os_abi - Print OS/ABI of an ELF header
 *
 * Return: Nothing
 */

void print_os_abi(void)
{}

/**
 * print_abi_version - Print ABI version of an ELF header
 *
 * Return: Nothing
 */

void print_abi_version(void)
{}

/**
 * print_type - Print type of an ELF header
 *
 * Return: Nothing
 */

void print_type(void)
{}

/**
 * print_entry_adress - Print the entry point address 
 * of an ELF header
 *
 * Return: Nothing
 */

void print_entry_adress(void)
{}

/**
 * main - Program that displays the information
 * contained in the ELF header at the start of an ELF file
 *
 * @argc: Argument count
 * @argv: Arguments Values (Array of String)
 *
 * Return: 0
*/

int main(int argc, char **argv)
{
	int elfile, reader;
	Elf64_Ehdr *headerFile;

	if (argc != 2)
		error_exit(98, "Usage: %s elf_filename\n", argv[0]);

	elfile = open(argv[1], O_RDONLY);
	if (elfile == -1)
		error_exit(98, "Can't read from file %s\n", argv[1]);

	headerFile = malloc(sizeof(Elf64_Ehdr));
	if (headerFile == NULL)
	{
		close(elfile);
		error_exit(98, "The memory allocation has failed\n", "");
	}

	reader = read(elfile, headerFile, sizeof(Elf64_Ehdr));
	if (reader == -1)
	{
		free(headerFile);
		close(elfile);
		error_exit(98, "Error: Can't read from file %s\n", argv[2]);
	}


	/* Call des prints */


	free(headerFile);
	if (close(elfile) == -1)
		error_exit(98, "Error: Can't close fd %d\n", argv[1]);

	return (0);
}
