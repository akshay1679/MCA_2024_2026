## Unix Process

**The Unix Process**: Describes the concept of a Unix process as an independent computation stream, focusing on the relationship between parent and child processes created by the `fork()` system call.

Processes are created by the `fork()` system call, which duplicates the  parent process. The child inherits certain attributes from the parent but has a unique memory space and Process ID (PID).

Process 0 is handcrafted at boot time, which is the first process in Unix.

## **Memory of Processes in Unix**:

The memory allocated to UNIX processes can be divided into three logical parts: 
• ==Text==: Machine code of the program .
• ==Data==: contains representations of data pre-set to initial values. Also includes the amount of space to be allocated by the kernel for uninitialized data. 
• ==Stack==: Usually contains procedure-based, downward growing, data frames.


## **Modes of Execution**:

Process in Unix can execute in two modes

• ==User Mode== 
• The user application are executed in user mode.
• Not able to directly access hardware or reference memory 
• Can access these via System calls 
• ==Kernel Mode ==
Provides the executing code with unrestricted access to the hardware and memory. 
Kernel Mode is reserved for the core parts of the operating system, ensuring secure and efficient management of system resources. 

Each one uses separate stack.

![[Process Subsystem.pdf#page=6&rect=86,79,928,526|Process Subsystem, p.6]]


## Unix Process Management 

• Process is an instance of program in execution. 
• During the life time of a process, it uses several resources. 
• Unix is a multi tasking, multi programming system, so a process in execution compete for system resources. 
• Based on this a process at a specified instance of time can be in a particular state. 
• The lifetime of a process can be conceptually divided into a set of states that describes the process.

## Process States

The complete set of process state is given below 

1. Running in user mode 
2. Running in Kernel mode 
3. Ready to run 
4. Sleeping in Memory
5. Ready to run but swapped 
6. Sleeping in swap space. 
7. Pre-empted.
8. Newly created. 
9. Zombie



![[Process Subsystem.pdf#page=9&rect=192,8,710,537|Process Subsystem, p.9]]



---
COMPLETE

---

**Kernel Data Structures to Describe Process States**:

- The Unix kernel maintains essential data structures for process management:
    - **Process Table Entry**: A table of active processes where each entry stores key details of a process's current state.
    - **u-area (User Area)**: Stores process-specific data that is only accessible when the process is running, ensuring user-level programs don’t access it directly.



## **Process Table Entries**:

The process table contains the information required by the kernel 
	• Process State 
	• Process IDs 
	• User IDs 
	• Pointer to text structure for shared text areas 
	• Pointer to a page table for memory management 
	• Scheduling parameters, including the "nice" value which determines priority 
	• Timers for resource usage 
	• A pointer to the process u-area

- The process table entry includes vital attributes:
	- **Process State**: Indicates the current state (e.g., running, sleeping).
	- **Process ID (PID)** and **User IDs (UIDs)**: Used to identify and manage permissions for each process.
	- **Pointers**: For shared resources like the text segment, memory page tables, and `u-area`.
	- **Scheduling Parameters**: The “nice” value helps determine process priority.
	- **Timers**: Track system and user CPU time for resource usage.
	- **Sleep Event Descriptor**: Specifies the event a process is waiting on if it’s in a sleeping state.
	- **Alarm Timer**: A user-defined timer that sends a signal to the process when it expires.
## **U Area**:
    
- The `u-area` or user area contains process-specific data:
	- **Privileges**: Data on access rights and permissions, such as file access levels.
	- **Timer Fields**: Track execution time in both user and kernel modes.
	- **Control Terminal Field**: Stores details about the terminal where the user started the process.
	- **Error Field**: Records errors encountered during system calls.
	- **Return Value Field**: Holds the result of a system call.
	- **I/O Parameters**: Define data transfer characteristics, such as the source address and file offsets.
	- **Current Directory and Root**: Define the file system context of the process, maintaining paths to the working directory and root directory.


