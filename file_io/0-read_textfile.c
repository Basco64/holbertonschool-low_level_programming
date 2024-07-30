#include "main.h"

/**
 * read_textfile - Function that reads a text file and
 * prints it to the POSIX standard output
 *
 * @filename: Path to the file
 * @letters: The number of letters
 *
 * Return: The real number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t printed = 0, readed = 0;
	char *buffer;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	buffer = malloc((letters + 1) * sizeof(char));
	if (buffer == NULL)
	{
		close(file);
		return (0);
	}

	readed = read(file, buffer, letters);
	if (readed == -1)
	{
		free(buffer);
		return (0);
	}
	buffer[readed] = '\0';

	printed = write(1, buffer, readed);

	free(buffer);
	close(file);
	if (printed == -1 || printed != readed)
		return (0);

	return (printed);
}
