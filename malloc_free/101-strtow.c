#include "main.h"
#include <stdlib.h>

/**
 * count_words - Function that count words in the string
 *
 * @str: The input string
 *
 * Return: The number of words in the string
 */

int count_words(char *str)
{
	int i, word_count = 0;

	if (str == NULL || *str == '\0')
		return (0);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			word_count++;
	}
	return (word_count);
}

/**
 * extract_word - Function that extract the words
 *
 * @str: The input string
 * @start: start of the word
 * @len: length of the word
 *
 * Return: The word
 */

char *extract_word(char *str, int start, int len)
{
	char *word;
	int i;

	word = malloc((len + 1) * sizeof(char));
	if (word == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		word[i] = str[start + i];
	word[len] = '\0';

	return (word);
}

/**
 * strtow - Function that splits a string into words
 *
 * @str: The input string
 *
 * Return: A pointer to an array of strings (words)
*/

char **strtow(char *str)
{
	char **args;
	int i, k, j = 0, length = 0, start = 0;
	int word_count = count_words(str);

	if (word_count == 0)
		return (NULL);
	args = malloc((word_count + 1) * sizeof(char *));
	if (args == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			if (length == 0)
				start = i;
			length++;
		}
		else if (length > 0)
		{
			args[j] = extract_word(str, start, length);
			if (args[j] == NULL)
			{
				for (k = 0; k < j; k++)
					free(args[k]);
				free(args);
				return (NULL);
			}
			j++;
			length = 0;
		}
	}
	if (length > 0)
	{
		args[j] = extract_word(str, start, length);
		if (args[j] == NULL)
		{
			for (k = 0; k < j; k++)
				free(args[k]);
			free(args);
			return (NULL);
		}
		j++;
	}
	args[j] = NULL;
	return (args);
}
