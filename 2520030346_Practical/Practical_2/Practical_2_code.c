#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main() {

    int fd1;
    int fd2;
    char buf[200];
    ssize_t mem;

    fd1 = open("sample.txt", O_RDONLY);
    if (fd1 < 0) {
        printf("File open failed\n");
        return 1;
    }

    fd2 = open("newfile.txt", O_WRONLY | O_CREAT, 0644);
    if (fd2 < 0) {
        printf("Copy file failed\n");
        close(fd1);
        return 1;
    }

								
    mem = read(fd1, buf, sizeof(buf));

    if (mem < 0) {
        printf("Read failed\n");
        close(fd1);
        close(fd2);
        return 1;
    }

    if (write(fd2, buf, mem) != mem) {
        printf("Write failed\n");
        close(fd1);
        close(fd2);
        return 1;
    }

    close(fd1);
    close(fd2);

    printf("File copied successfully\n");

    return 0;
}
