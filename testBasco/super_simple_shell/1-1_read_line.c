#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *buffer = NULL;
	size_t len = 0, read;

	while (1)
	{
		printf("$ ");

		read = getline(&buffer, &len, stdin);
		if (read == -1)
			break;

		printf("%s", buffer);
	}

	free(buffer);

	return (0);
}
