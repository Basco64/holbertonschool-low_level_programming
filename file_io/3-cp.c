#include "main.h"

/**
 * main - Program that copies the content of a
 * file to another file
 *
 * @argc: Argument count
 * @argv: Arguments Values (Array of String)
 *
 * Return: Nothing
 */

int main(int argc, char **argv)
{
	ssize_t from, to;


	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	from = open(argv[1], O_RDONLY);
	if (from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC);
	if (to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	if (close(from) == -1)
	{
		dprintf(2, "Error: Can't close fd %s\n", argv[1]);
		exit(100);
	}

	if (close(to) == -1)
	{
		dprintf(2, "Error: Can't close fd %s\n", argv[2]);
		exit(100);
	}

	return (0);
}

