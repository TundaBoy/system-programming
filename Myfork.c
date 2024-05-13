#include <stdio.h>
 int main()
{
    int pid;
    printf("i am the original process with PID %d and PPID %d. \n",getpid(),getppid());
    pid= fork ();
    if (pid!=0)
    {
        printf("I am the parent process with PID %d and PPID %d. \n", getpid(), getppid());
        printf("My child's PID is %d \n", pid);
    }
    else{
        printf("i am the child process with PID %d and PPID %d. \n",getpid(), getppid());
    }
    printf("PID %d terminates. \n", getpid());
    
}
