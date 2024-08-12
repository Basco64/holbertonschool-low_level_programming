#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char *buffer = NULL;
	size_t len = 0, read;
	char *token;

	while (1)
	{
		printf("$ ");

		read = getline(&buffer, &len, stdin);
		if (read == -1)
			break;

		printf("buffer getline: %s", buffer);

		token = strtok(buffer, " ");

		while (token)
		{
			printf("buffer strtok: %s\n", token);
			token = strtok(NULL, " ");
		}
	}
	free(buffer);

	return (0);
}
