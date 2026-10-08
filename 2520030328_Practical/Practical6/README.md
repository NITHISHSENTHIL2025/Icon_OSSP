Practical-6
Aakash Dadhirao
2520030337
S-7

In this practical, we studied Inter-Process Communication (IPC) using FIFO (Named Pipes) and process communication using POSIX signals. FIFO allows two processes to communicate by creating a named pipe using the mkfifo() function. The FIFO can then be opened using open(), with read() used to receive data and write() used to send data between processes. The fork() function can be used to create a child process, while unlink() is used to remove the FIFO after communication is completed.

We also studied POSIX signals, which are used to send notifications or control signals to processes. Signals such as SIGINT, SIGTERM, and SIGUSR1 were explored. The signal() function is used to define a signal handler, which is a function executed when a particular signal is received. The kill() function can be used to send a signal to another process using its process ID (PID). The practical was implemented using three C programs: client.c for the client-side FIFO communication, server.c for the server-side processing, and signal.c for demonstrating signal handling and communication between processes.
