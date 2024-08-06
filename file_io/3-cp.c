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
 * main - Program that copies the content of a
 * file to another file
 *
 * @argc: Argument count
 * @argv: Arguments Values (Array of String)
 *
 * Return: 0 on success, or exit code on failure
 */

int main(int argc, char **argv)
{
	int from, to;
	ssize_t readed;
	char buffer[1024];

	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to\n", "");

	from = open(argv[1], O_RDONLY);
	if (from == -1)
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);

	to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (to == -1)
		error_exit(99, "Error: Can't write to %s\n", argv[2]);

	while ((readed = read(from, buffer, 1024)) > 0)
	{
		if (write(to, buffer, readed) != readed)
			error_exit(99, "Error: Can't write to %s\n", argv[2]);
	}

	if (readed == -1)
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);

	if (close(from) == -1)
		error_exit(100, "Error: Can't close fd %d\n", argv[1]);

	if (close(to) == -1)
		error_exit(100, "Error: Can't close fd %d\n", argv[2]);

	return (0);
}
