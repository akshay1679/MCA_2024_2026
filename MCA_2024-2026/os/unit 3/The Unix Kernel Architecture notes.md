The Unix OS - 

Unix ideveloped  by ==Ken Thompson, Dennis Ritchie,== and others in the AT&T Laboratories Open Source 
- Multi User/Multi Tasking/Multi Programming OS 
- Shell Scripting 
- Security 
- Portability


![[The Unix Kernel Architecture.pdf#page=3&rect=13,46,382,400|The Unix Kernel Architecture, p.3]]



The Kernel 
1. The core of Unix OS – Performs core operations 
2. The kernel handles the hardware effectively by using the device drivers. 
3. Process Management 
4. File Management

Shell 
- Command interpreter of Unix OS 
- Shell is an interface between the user and the Kernel

![[The Unix Kernel Architecture.pdf#page=5&rect=332,98,927,259|The Unix Kernel Architecture, p.5]]

**Architecture of Unix Operating System Block Diagram of System Kernel**

![[The Unix Kernel Architecture.pdf#page=6&rect=303,6,944,537|The Unix Kernel Architecture, p.6]]



Architecture of Unix Operating System 
- The UNIX system supports the illusions that the file system has "places" and that processes have "life". 
- The two entities, files and processes, are the two central concepts in the UNIX system model. 
- The file subsystem 
- Process control subsystem 
- The diagram shows 3 levels : user, kernel, and hardware. 
- The system call and library interface represent the border between user programs and the kernel.

Architecture of Unix Operating System 
- System call Interface 
- User interact with kernel using libraries and other applications , which then invokes system calls for performing certain kernel functions. 
- System calls for File Subsystem 
- System calls for process control sub system

File Sub system 
- Manages files 
- Allocating file space 
- Administering free space 
- Controlling access to files 
- Retrieving data for users

