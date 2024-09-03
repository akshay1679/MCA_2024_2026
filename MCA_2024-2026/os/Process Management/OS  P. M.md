## Process

1. A program in execution.
2. A process will need certain resources-such as CPU time, memory, files, and I/O devices-to accomplish its task.
3. These resources are allocated to the process either when it is created or while it is executing. 
4. A process is the unit of work in most systems. Such a system consists of a collection of processes:


## Process States

[[pm.excalidraw]]

**Def** --> State of a process is defined in part by the current activity of that process. Each process may be in one of following states

==New==: The process is being created. 
==Ready==: The process is waiting to be assigned to a processor.
==Running==: Instructions are being executed. 
==Waiting==: The process is waiting for some event to occur (such as an I/O completion or reception of a signal). 
==Terminated==: The process has finished execution.

## Process Control Block

**Information associated with each process(also called task control block**

==Pointer==: It is a stack pointer that is required to be saved when the process is switched from one state to another to retain the current position of the process.
==Process state== – running, waiting, etc.
==Program counter== – location of instruction to next execute
==CPU registers== – contents of all process-centric registers
==CPU scheduling information==- priorities, scheduling queue pointers
==Memory==-management information – memory allocated to the process
==Accounting information ==– CPU used, clock time elapsed since start, time limits.
I/O status information – I/O devices allocated to process, list of open files


## Context Switching

1. When CPU switches to another process, the system must save the state of the old process and load the saved state for the new process via a context switch.
2. Context of a process represented in the PCB.

## Context Switch

0. Context-switch time is overhead; the system does no useful work while switching.[[pm.excalidraw]]
1. Context-switch time is pure overhead; the system does no useful work while switching.
2. The more complex the OS and the PCB --> the longer the context switch
3. Time dependent on hardware support
4. Some hardware provides multiple sets of registers per CPU --> multiple contexts loaded at once


