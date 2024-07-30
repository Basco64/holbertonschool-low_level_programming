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
	char buffer[1024];
	int from_source, to_dest;


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

	from_source = 1024;
	while (from_source == 1024)
	{
		from_source = read(from, buffer, 1024);
		if (from_source == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}

		to_dest = write(to, buffer, from_source);
		if (to_dest == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	if (close(from) == -1)
	{
		dprintf(2, "Error: Can't close fd %ld\n", from);
		exit(100);
	}

	if (close(to) == -1)
	{
		dprintf(2, "Error: Can't close fd %ld\n", to);
		exit(100);
	}

	return (0);
}

