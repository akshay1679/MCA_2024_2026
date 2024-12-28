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
2. Context of a process represented in the PCB.(no studey -->it is used to switch with help of pointer)
extra --> def overhead;

## Context Switch

0. Context-switch time is overhead; the system does no useful work while switching.[[pm.excalidraw]]
1. Context-switch time is pure overhead; the system does no useful work while switching.
2. The more complex the OS and the PCB --> the longer the context switch
3. Time dependent on hardware support
4. Some hardware provides multiple sets of registers per CPU --> multiple contexts loaded at once

- **Context-switch time is pure overhead**:  
    During a context switch, the system saves the state of the current process (such as CPU registers, program counter, etc.) and loads the state of another process. This time is considered **pure overhead** because the CPU is not performing any meaningful computational work during the switch; it's simply preparing to resume or start another task.
    
- **The complexity of the OS and PCB affects context-switch time**:  
    The **Process Control Block (PCB)** contains all the information needed to resume a process. As the complexity of the OS increases (with more features, security, multi-threading), the size of the PCB grows. Saving and restoring a large PCB takes more time, thereby increasing the duration of a context switch.
    
- **Context-switch time depends on hardware support**:  
    The speed of a context switch can be significantly influenced by the hardware. For example, hardware that supports efficient saving and restoring of CPU state (such as registers, program counters) can reduce the overhead. Some systems also have optimized mechanisms, like **interrupt handling**, which speed up switching.
    
- **Multiple sets of registers per CPU**:  
    Some advanced hardware systems provide **multiple sets of registers** for each CPU. This allows the CPU to quickly switch between different contexts (processes) without the need to save and restore all the registers for each switch. This feature minimizes the context-switch time and reduces overhead, enabling faster multitasking.
