#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
int main(void)
{
	pid_t my_pid, child_pid = -1;
	int i = 0, status;
	char *argv[] = {"/bin/ls", "-l", "/tmp/", NULL};

	my_pid = getpid();
	while (i < 5 && child_pid != 0)
	{
		child_pid = fork();
		if (child_pid == -1)
		{
			perror("Fail fork");
			return (1);
		}
		if (child_pid != 0)
			wait(&status);
		i++;
	}

	if (child_pid == 0)
	{
		printf("CHILD PID: %d\nPARENT PID: %d\n\n", getpid(), getppid());
		if (execve(argv[0], argv, NULL) == -1)
		{
			perror("Fail execve");
			_exit(1);
		}
	}
	else
		printf("%d I AM THE PARENT AND MY PID IS: %d\n", my_pid, child_pid);

	return (0);
}
