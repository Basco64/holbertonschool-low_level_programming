#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
	pid_t my_pid, pid;

	printf("Before fork\n");

	pid = fork();
	if (pid == -1)
	{
		perror("Fail fork");
		return (1);
	}

	printf("After fork\n");

	my_pid = getpid();
	printf("My PID is %d\n", my_pid);

	return (0);
}
