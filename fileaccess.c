#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
main ()
{
    int i, fd;
    /*creating a sparse file*/
    fd=open("sparse.txt", O_CREAT | O_RDWR, 0600);
    write(fd, "space", 6);
    lseek(fd, 60006, SEEK_SET);
    write(fd, "file", 4);
    close(fd);
/*creating a normal file*/
fd=open("normal.txt", O_CREAT | O_RDWR, 0600);
write(fd, "normal", 6);
for(i=1; i<=60000; i++);
write(fd, "/0", 1);
write(fd, "file", 4);
close(fd);
}