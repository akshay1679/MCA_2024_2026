
```run-c
#include <stdio.h>

int main(void)
{
    printf("hello, world\n");
}
```

`printf` allows for many format codes. Here is a noncomprehensive list of ones you may utilize in this course:

```c
%c

%f

%i

%li

%s
```

## Loops


```run-c
#include <stdio.h>

int main() {
    int counter = 3;
    while (counter > 0) {
        printf("meow\n");
        counter = counter - 1;
    }
    return 0;
}

```


```run-c
#include <stdio.h>

int main(void)
{
    int i = 0;
    while (i < 3)
    {
        printf("meow\n");
        i++;
    }
}
```

This function can be used in the main function as follows:

```run-c
#include <stdio.h>

void meow(void);

int main(void)
{
    for (int i = 0; i < 3; i++)
    {
        meow();
    }
}

void meow(void)
{
    printf("meow\n");
}
```


## Linux and the Command Line

- _Linux_ is an operating system that is accessible via the command line in the terminal window in VS Code.
- Some common command-line arguments we may use include:
    - `cd`, for changing our current directory (folder)
    - `cp`, for copying files and directories
    - `ls`, for listing files in a directory
    - `mkdir`, for making a directory
    - `mv`, for moving (renaming) files and directories
    - `rm`, for removing (deleting) files
    - `rmdir`, for removing (deleting) directories
- The most commonly used is `ls` which will list all the files in the current directory or directory. Go ahead and type `ls` into the terminal window and hit `enter`. You’ll see all the files in the current folder.
- Another useful command is `mv`, where you can move a file from one file to another. For example, you could use this command to rename `Hello.c` (notice the uppercase `H`) to `hello.c` by typing `mv Hello.c hello.c`.
- You can also create folders. You can type `mkdir pset1` to create a directory called `pset1`.
- You can then use `cd pset1` to change your current directory to `pset1`.

```run-c
int main(void)
{
    const int n = 3;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
```


- Notice how `n` is now a constant. It can never be changed.


``` run-c

#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        printf("Enter the size: "); 
        scanf("%d", &n);
    }
    while (n < 1);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }

    return 0; 
}
```


