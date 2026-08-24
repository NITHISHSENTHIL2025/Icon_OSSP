PRACTICAL-2
2520030346
Nithish S
S-7

The C program demonstrates how a file can be copied using the Linux system calls open(), read(), write(), and close(). Initially, the source file is opened in read-only mode using open(), which returns a file descriptor. The destination file is then opened for writing and is created when it does not already exist. The read() call obtains data from the source file and stores it in a buffer, while write() copies the buffered data into the destination file.

While these operations are performed, execution switches between user space and kernel space. The C program runs in user space, but file-related operations are handled by the Linux kernel. Whenever a system call such as open(), read(), write(), or close() is invoked, control is passed to the kernel. The kernel performs the required operation and sends the result back to the user-space program. In this way, system calls act as a communication interface between applications and the operating system.

The strace command was also used to examine the system calls produced while executing the cat command. For example, when cat exec3.txt was executed with strace, various system calls related to program execution and file handling were displayed. Some of the important system calls included execve(), openat(), read(), write(), close(), and exit_group().

The openat() call was responsible for accessing the specified file, and read() retrieved the file data. The contents were then sent to the terminal using write() through standard output. Once all data had been read, read() returned zero, showing that the end of the file had been reached. The close() system call then released the file descriptor, and exit_group() indicated that the cat process had finished execution.

Overall, the experiment demonstrates that Linux applications rely on system calls to communicate with the kernel and access operating system services. Using strace made it possible to observe the sequence of kernel interactions performed by the cat command and understand how file operations are carried out internally.
