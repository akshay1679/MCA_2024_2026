## Process Creation – The fork() System Call

### 1.`fork()` System Call

- **Purpose**: Creates a new process, referred to as a "child process," from an existing process  "parent process".
==- Pid = fork() funtion to create a child==
- **Behavior**:


- `fork()` does not take any arguments.
- It returns:
	- ==**+ve value**== Created successfully (to parent it is PID of child.
    - ==-ve value==  error in  process Creation.
    - **==Zero==** Child created (In child it is zero).




### Kernel Operation – on fork()

- Allocates a slot in the process table for the new process.
- Assigns a unique ID to the child process.
- Creates a logical copy of the parent process’s context.
- Returns the child’s ID to the parent process and zero to the child.

```c
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h> 
int main() 
{ /* fork a process */ fork();
 /* the child and parent will execute every line of code after the fork (each separately)*/ 
 printf("Hello world!\n");
  return 0; 
}
```

### 2. Exec() System Call

- **Purpose**: Executes a new program within the context of an existing process.
- **Behavior**:
    - When `exec` is called, the current process image is replaced with a new program. The process itself does not terminate; instead, its memory and executable are replaced.
    - The call requires a filename and path as arguments.
    - Returns:
        - A **positive integer** upon success.
        - A **negative value** if there is an error.
- **Kernel Operations**:

- The current process image is overwritten with the new program passed as an argument to `exec`.
- The process keeps its original ID, environment, and file descriptors, but the CPU state and virtual memory mapping are updated to reflect the new program.
### 3. `exit()` System Call

- **Purpose**: Terminates a process, either upon successful completion or due to an error.
- **Behavior**:
    - Returns a status to the parent process, where:
        - **0** indicates success.
        - **Non-zero** values indicate an error.
- **Operations Performed by `exit()`**:
    - Flushes any unwritten buffered data.
    - Closes all open files associated with the process.
    - Removes temporary files.
    - Returns an integer status to the operating system to signal the termination status to the parent process.
			return --> int val --> OS --> termination status --> parent process


==next note==

[[The buffer cache notes]]

