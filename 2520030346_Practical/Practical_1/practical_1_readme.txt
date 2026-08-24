PRACTICAL-1
2520030346
Nithish S
S-7
Lab Summary: Linux OS and Hardware Management

In this lab, I explored how the Linux operating system connects with and controls a computer's physical hardware. By running several terminal commands, I was able to see exactly how Linux manages system resources.

Here is a breakdown of what I learned using different commands:

* uname -a: This command displayed details about the system architecture and the Linux kernel. It helped me understand that the kernel acts as the main bridge between the software and the physical machine.

* lscpu: This showed the processor's details, like its cores and threads. I learned that individual programs don't control the processor directly. Instead, the OS acts as a manager, deciding which task gets CPU time and for how long. 

* lsblk: This listed the storage drives and partitions. It showed me that Linux translates complicated storage hardware into a simple file system. Because of this, applications can just save and read files without needing to know exactly where the data is physically located on the drive.

* ps and top: The ps command listed all active programs (processes), while top showed a live view of how much memory and CPU they were using. Watching this in real time made it clear how the OS constantly shifts and balances resources to keep everything running.

Conclusion
Overall, this exercise demonstrated that the operating system acts as a hidden middleman (an abstraction layer) between software and hardware. The OS handles all the complicated background work—like scheduling CPU time, managing virtual memory, and talking to devices through drivers. Because the Linux kernel takes care of this heavy lifting, applications can easily use the computer's resources without having to communicate directly with the physical hardware.