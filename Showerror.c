#include <stdio.h>
#include <sys/file.h>
#include <errno.h>
main (){
    int fd;
    fd=open("nonexist.txt",O_RDONLY);
    if (fd==-1)
    {
        printf("errno=%d\n", errno);
        perror("main");
    }
    fd=open("/",O_WRONLY);
    if (fd==-1)
    {
        printf("errno=%d\n", errno);
        perror("main");
    }
    fd=open("nonexist.txt", O_RDONLY | O_CREAT, 0644);
    printf("errno=%d\n", errno);
    perror("main");
    errno=0;
    perror("main");
}
