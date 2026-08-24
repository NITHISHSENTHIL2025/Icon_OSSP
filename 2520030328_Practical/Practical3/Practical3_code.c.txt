#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
    int pid;

    pid = fork();

    if (pid == 0)
    {
        printf("Child Process\n");
        printf("PID = %d\n", getpid());
        printf("PPID = %d\n", getppid());
        printf("State = Running\n");

        sleep(2);
								
        printf("State = Completed\n");
    }
    else
    {
        printf("Parent Process\n");
        printf("PID = %d\n", getpid());
        printf("PPID = %d\n", getppid());
        printf("State = Running\n");

        wait(NULL);

        printf("State = Completed\n");
    }

    return 0;
}
