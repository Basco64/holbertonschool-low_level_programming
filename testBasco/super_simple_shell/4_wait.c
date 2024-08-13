#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(void)
{
	pid_t child_pid;
	int status;

	child_pid = fork();
	if (child_pid == -1)
	{
		perror("Fail fork");
		return (1);
	}

	if (child_pid == 0)
	{
		printf("Wait for me, wait for me\n");
		sleep(5);  /* Simulate some work by sleeping for 5 seconds*/
	}
	else
	{
		wait(&status);
		printf("Oh, it's all better now\n");
	}

	return (0);
}
