#include<unistd.h>
#include<fcntl.h>
int main(){
int fd1,fd2;
fd1=open("part",O_RDWR);
fd2=open("ical",O_CREAT);
char buf[100];
ssize_t n;
while((n=read(fd1,buf,sizeof(buf)))>0){
write(fd2,buf,n);
write(1,buf,n);
close(fd1);
close(fd2);
}
}
