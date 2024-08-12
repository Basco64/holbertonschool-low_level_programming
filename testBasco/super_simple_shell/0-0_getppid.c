#include <stdio.h>
#include <unistd.h>

int main(void)
{
	pid_t my_pid;

	/*identifiant du processus courant*/
	my_pid = getpid();
	printf("Current: %u\n", my_pid);

	/*identifiant du processus parent*/
	my_pid = getppid();
	printf("Parent: %u\n", my_pid);

	return (0);
}
