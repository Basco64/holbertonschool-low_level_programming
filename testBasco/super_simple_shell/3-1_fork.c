#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
	pid_t my_pid, child_pid;

	child_pid = fork();
	if (child_pid == -1)
	{
		perror("Fail fork");
		return (1);
	}

	my_pid = getpid();
	printf("My PID is %d\n", my_pid);

	if (child_pid == 0)
		printf("(%d) Nooooooooo!\n", my_pid);
	else
		printf("(%d) %d, I am your father\n", my_pid, child_pid);

	return (0);
}
