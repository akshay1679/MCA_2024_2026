### 1. **Inode (Information Node)**

- In Unix based operating system each file is indexed by an Inode. 
- Inode are special disk blocks they are created when the file system is created. 
- ==Limits the total number of files and directories that can be stored in the filesystem based on available inodes==.
- ie ethre i node undo atreem file subsystem een ondakkan pattu


 Internal representation of a file is given by an inode 
1.  Numeric UID(user id) of the owner. 
2. Numeric GUID (grouped usre id) of the owner. 
3. Size of the file. 
4. File type: regular, directory, device etc… 
5. Date and Time of Last modification of the file data. 
6. Date and Time of Last access of file data. 
7. Date and Time of Last change of the I-node. 
8. Access Permissions 
9. Pointer to the file in the disk

``$ stat <filename> - Displays the details in inode``

![[The File Management Subsystem.pdf#page=5&rect=35,135,919,459|The File Management Subsystem, p.5]]

### 2. **File System Structure**

- **Boot Block**: 
		-  Occupies the beginning of the file system and typically the first sector.
		-  Cobootloaderntain the bootloader(ie: booting informations)
- **Super Block**: 
		- Describes the total size, free space, partition name, and last modification time.
- **Inode Block & Data Block**:
    - **Inode Block**: Contains the list of inodes.
    - **Data Block**: Contains the actual user files.

![[The File Management Subsystem.pdf#page=9&rect=30,24,791,448|The File Management Subsystem, p.9]]


==fd = open(pathname, flags, mode)==
User File Descriptor Table --> File Table --> Inode Table

**User File Descriptor Table**

open  

==fd = open(pathname, flags, mode)==   --> user file descriptor table  --> file table --> inode table


--- 

### How Does It Work?

1. *Opening a File*: When a process opens a file using a system call like open() or fopen(), the following happens:
   - The OS allocates a new file descriptor and assigns it an index in the User File Descriptor Table.
   - The OS also allocates or updates an entry in the Open File Table, which stores details about the file (such as its current offset or the file type).

2. *File Descriptor Table Entry*: The entry in the User File Descriptor Table contains:
   - A reference to the Open File Table entry (which holds the file’s metadata).
   - The status flags that control file access (e.g., read, write).
   
3. *File Operations*: After opening the file, the process can read, write, or perform other operations on the file using the file descriptor. When performing these operations, the process refers to its User File Descriptor Table to get the appropriate entry, which in turn points to the Open File Table where the actual file data is managed.

4. *Closing a File*: When the process closes the file (using the close() system call), the OS removes the file descriptor entry from the User File Descriptor Table. The OS also updates the Open File Table to reflect the closure, and resources associated with the file are freed.

### Example Scenario

1. *Open a file*:
   - A process calls open("data.txt", O_RDONLY).
   - The OS allocates a new file descriptor (say, FD 3).
   - This file descriptor (FD 3) is placed in the User File Descriptor Table.
   - The OS also creates an entry in the Open File Table with information like the file’s path, size, and the file’s current offset.

2. *File Operations*:
   - The process reads from the file using the file descriptor (FD 3).
   - The system consults the Open File Table to find the file's current position and reads the data.

3. *Close the file*:
   - The process calls close(3), indicating that file descriptor 3 should be closed.
   - The OS removes the entry from the User File Descriptor Table.
   - If no other processes are using the file, the OS cleans up the Open File Table entry.




---
Read() system call

Number = read (fd, buffer, count) 
where fd is the descriptor returned by open. 
A pointer to the buffer where the read data will be stored. 
Count is the maximum number of bytes to be read. 
And it returns how many bytes were successfully read.(ie the Number = )

**Write() System Call** 

Write number = write (fd, buffer, count);
The function signature is exactly same to that of read

**Close() System Call**
A process closes an open file when it no longer wants to access it. Close (fd);
 
 **The creat system call**
 
==fd = creat (pathname, modes)==  --> spelling of creat
  creates a new file in the file system. 
  fd = creat (pathname, modes); 
  If pathname of an existing file is passed to creat, it will truncate the file and set its size to 0


==next note== - [[THe Unix File System1 notes]]

