#include "main.h"

/**
 * create_file - Function that creates a file
 *
 * @filename: Path to the file
 * @text_content: The content
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file, printed, len;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_CREAT, 0600);
	if (file == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(file);
		return (1);
	}

	while (text_content[len] != '\0')
		len++;

	printed = write(file, text_content, len);

	close(file);

	if (printed == -1)
		return (-1);

	return (1);
}
