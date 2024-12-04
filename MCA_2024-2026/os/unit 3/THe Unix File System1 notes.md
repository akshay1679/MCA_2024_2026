File Structure 
/ : denotes the root of the file system tree. 
/bin : Contains ==binary executable== of fundamental utilities, such as ls or cp, which are generally needed by all users. 
/boot : Contains all the files that are required for successful ==booting process==. 
/dev : Stands for “devices”. Contains file representations of ==peripheral devices==(eg printer). 
/etc : Contains system-wide configuration files and system databases.  
/home : Contains the home directories for the users. 
/lib : Contains system libraries, and some critical files such as kernel modules or device drivers.

/media : Default mount point for removable devices, such as USB sticks, media players, etc.  
/mnt : Stands for “mount”. Contains files ystem mount points.  
/proc : virtual files system showing information about processes.  
/root :The home directory for the super user “root” – that is, the system administrator.  /tmp : Temporary directory for storing temporary files
![[THe Unix File System1.pdf#page=6&rect=156,50,658,384|THe Unix File System1, p.6]]

Ordinary Files  
An ordinary file is a file on the system that contains data, text, or program instructions.  Always located within / under a directory file.  In long-format output of ls -l, this type of file is specified by the “-” symbol.

**Special Files**  
Used to represent a real physical device such as a printer, tape drive or terminal, used for Input/Output (I/O) operations.  Device or special files are used for device Input/Output(I/O) on UNIX and Linux systems.

**Pipes**
 UNIX allows you to link commands together using a pipe. ==The pipe acts a temporary file which only exists to hold data from one command until it is read by another==.  A Unix pipe provides a one-way flow of data.

to give output of one as input of another

**Sockets**  
A special file which allows for advanced i==nterprocess communication.==  A Unix Socket is used in a client-server application

IT IS SPECIAL FILE USED FOR INTER PROCESS COMMUNICATION

**Symbolic Link** – Symbolic link is used for referencing some other file of the file system. Symbolic link is also known as ==Soft link==

SIMILAR TO ==SHORTCUT== USED IN windous

[[The Unix Kernel Architecture notes]]