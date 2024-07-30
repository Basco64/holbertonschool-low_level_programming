#include "main.h"

/**
 * append_text_to_file - Function that appends text at
 * the end of a file
 *
 * @filename: The filename
 * @text_content: The content
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, printed, len = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
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

	if (printed == -1 || printed != len)
		return (-1);

	return (1);
}
