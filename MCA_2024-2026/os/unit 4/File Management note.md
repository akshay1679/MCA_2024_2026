
### 5. **General-Graph Directory**

- is a flexible directory organization model that allows **cyclic references**. Unlike an acyclic graph, which restricts cycles to prevent looping paths, a general graph allows any structure, including cycles. This means that directories and files can be referenced by ==multiple paths,== potentially creating circular paths within the directory hierarchy.

![[file management- mod4 (1).pdf#page=21&rect=47,61,826,468|file management- mod4 (1), p.21]]


### Access Control

• The need to protect files is a direct result of the ability to access files. Systems that do not permit access to the files of other users do not need protection.
• The most common approach to the protection problem is to make access dependent on the identity of the user.
• Different users may need different types of access to a file or directory. The most general scheme to implement is with An **Access Control List (ACL)** is a list associated with each file or directory that specifies the users who can access the resource and the **types of access** allowed for each user. This identity-dependent access scheme allows fine-grained control over how different users can interact with files and directories.

• When a user requests access to a particular file, the operating system checks the access list associated with that file. If that user is listed for the requested access, the access is allowed. Otherwise, a protection violation occurs, and the user job is denied access to the file.

 • Main problem with access lists is their length. If we want to allow everyone to read a file, we must list all users with read access. 
• To condense the length of the access-control list, many systems recognize three classifications of users in connection with each file

• **Owner**. The user who created the file is the owner. 
• **Group**. A set of users who are sharing the file and need similar access is a group, or work group. 
• **Other**. All other users in the system.

![[file management- mod4 (1).pdf#page=24&rect=61,55,736,474|file management- mod4 (1), p.24]]


## File-System Structure

• Disks provide most of the secondary storage on which file systems are maintained 
• To improve I/Oefficiency,I/Otransfers between memory and massstorage are performed in units of blocks. Each block on a hard disk drive has one or more sectors. 
• File systems provide efficient and convenient access to the storage device by allowing data to be stored, located, and retrieved easily


### File System Structure Overview

A **file system** is a critical component of modern operating systems, providing the necessary mechanisms for data storage, retrieval, and organization on secondary storage devices, primarily disks. File systems are designed to optimize I/O operations and make it easier for users and applications to interact with data in a logical, structured way.

### Key Components of a File System:

1. **Disks and Block-Based Storage**:
    
    - **Disks** (HDDs, SSDs) are used for **secondary storage**, where files and directories are stored.
    - **I/O Operations**: To improve efficiency, data transfers between memory and mass storage occur in **blocks**, where each block is a fixed-size unit (usually 512 bytes or more) that may consist of one or more sectors on the disk.
    - **Block**: The basic unit of I/O operations, ensuring efficient data transfer between memory and the disk.
2. **Levels of File System Design**:
    
    - File systems are layered, with each level building on the functionality of the one below it. Each level provides more abstract and convenient access to the storage hardware.
    
    #### Levels of File System:
    
    - **I/O Control Level**:
        
        - This is responsible for managing interactions with the hardware, such as **device drivers** and **interrupt handlers**, which transfer data between the memory and the disk.
        - It controls the physical reading and writing of data blocks to storage devices.
    - **Basic File System (Block I/O Subsystem)**:
        
        - This level interacts directly with the storage device, sending commands to read or write blocks of data.
        - It manages **buffers** and **caches** that temporarily store data for efficient processing, reducing direct disk access.
    - **File-Organization Module**:
        
        - This level manages the logical structure of files, organizing them into blocks.
        - It knows about **logical file blocks** and tracks them for file storage. Logical blocks are numbered sequentially (e.g., 0, 1, 2, ..., N) within a file.
        - **Free-Space Manager**: A subcomponent of the file-organization module that tracks unused or free blocks on the disk and allocates them when needed.
    - **Logical File System**:
        
        - Manages **metadata**, which is all the information about a file system **except the actual data**.
        - This includes:
            - **File names**
            - **File attributes** (ownership, permissions, etc.)
            - **Directory structures**
            - **Inodes** or **file-control blocks (FCBs)**: Store information about the file's metadata and location on disk, such as the file's size, permissions, and the physical location of its data blocks.

### File System Types:

1. **UNIX File System (UFS)**:
    
    - The **UNIX File System (UFS)** is used by UNIX and Linux systems, which is based on the **Berkeley Fast File System (FFS)**.
    - It uses **inodes** (index nodes) to store file metadata and manage file storage. The inode contains information like:
        - **File type**
        - **Permissions**
        - **Owner**
        - **Timestamps**
        - **Pointers to data blocks**
2. **Windows File Systems**:
    
    - **FAT (File Allocation Table)** and its variants (**FAT32**) are older file systems used in early versions of Windows, though they're still in use for removable media (USB drives, etc.).
    - **NTFS (New Technology File System)**: A more modern and robust file system used by Windows for handling larger files, supporting file system journaling, permissions, and more advanced features.
    - **CD-ROM and DVD File Systems**: These formats are designed for read-only or write-once media. They include ISO 9660 and UDF (Universal Disk Format).



## Allocation Methods

- How to allocate space to these files so that storage space is utilized effectively and files can be accessed quickly. 
### 1.Contiguous Allocation

### 1. Contiguous Allocation

**Contiguous allocation** is a file storage method where each file is stored in a set of contiguous blocks on a storage device. This allocation method is relatively simple and efficient, but it comes with its own set of advantages and limitations.

#### Key Features of Contiguous Allocation:

==1. **Linear Ordering**:==
    
- The device’s storage blocks are ordered linearly, and files occupy a contiguous range of these blocks.
    - or example, if a file starts at block `b` and is `n` blocks long, the file will occupy blocks `b, b+1, b+2, ..., b + n - 1`.
    - This means that the blocks for a file are adjacent to each other, which allows for faster sequential access as the disk head doesn’t have to move much between blocks.
2. **Efficient Sequential Access**:
    
    - **Sequential File Access**: 
    - **Accessing Blocks**: To read block `b + 1` after block `b`, no additional head movement is required (assuming no other disk operations are in progress).
    - **Minimal Seek Time**: If the file spans multiple cylinders, the disk head will need to move from one track to the next, but the movement is typically minimal compared to non-contiguous allocation methods.
3. **Directory Entry**:
    
    - Each file in a contiguous allocation system is represented by a directory entry that includes:
        - **Starting block address**: The address of the first block where the file is stored.
        - **Length of file**: The number of blocks allocated to the file.

Contiguous allocation has some problems, however. One difficulty is finding space for a new file. Next is external fragmentation

==**2 Linked Allocation**==

 • Linked allocation solves all problems of contiguous allocation. With linked allocation, each file is a linked list of storage blocks; the blocks maybe scattered anywhere on the device.
 
• The directory contains a pointer to the first and last blocks of the file. For example, a file of five blocks might start at block 9 and continue at block 16, then block 1, then block 10, and finally block 25.


![[file management- mod4 (1).pdf#page=33&rect=49,88,657,475|file management- mod4 (1), p.33]]

