PRACTICAL-3
2520030328
G. Sai Sathwik
S-7

Lab Report: Linux Process State Transitions
Objective:
To monitor and analyze various process states—such as Ready, Running, Waiting, and Terminated—utilizing built-in Linux utilities including ps, top, and the /proc filesystem.

Steps Taken:

Initiated a background process by executing:
sleep 30 &

Located the specific Process ID (PID) by running:
ps
(Alternatively: ps -ef | grep sleep)

Examined the current status of the process by typing:
ps -o pid,ppid,stat,cmd -p PID (Note: PID is replaced with the actual number found in step 2).

Investigated detailed process attributes via the virtual filesystem using:
cat /proc/PID/status

Launched the system monitor to dynamically view process activity and CPU consumption:
top

Exited the monitoring interface by pressing q.

Key Findings on Process States:

Ready: The task is queued and prepared to run, simply awaiting its turn for CPU allocation.

Running: The processor is actively executing the task's instructions.

Waiting (Sleeping): The program is paused until a specific condition is met or a resource frees up. For instance, the sleep command remains suspended in this state until its timer runs out.

Terminated: Once the task finishes its work, it halts execution and is cleared from the operating system's active process queue.

Sample Terminal Output:

Output from the ps command:

Plaintext
PID    PPID   STAT   CMD
2450   2300   S      sleep 30
Output from /proc/PID/status:

Plaintext
State:  S (sleeping)
Final Summary:
Through this practical exercise, I successfully tracked process states utilizing ps, top, and the /proc directory. The experiment demonstrated how tasks dynamically shift between different phases based on resource needs and CPU scheduling. Working with these monitoring tools provided a clear picture of how the Linux operating system handles the entire lifecycle of a program, from the moment it launches to its final termination.