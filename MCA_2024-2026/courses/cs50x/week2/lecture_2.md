

## Compiling

``` run-c
#include <stdio.h>

int main(void)
{
    printf("hello, world\n");
}
```

A compiler will take the above code and turn it into the following machine code:

![machine code](https://cs50.harvard.edu/x/2024/notes/2/cs50Week2Slide012.png "machine code")


- _VS Code_, the programming environment provided to you as a CS50 student, utilizes a compiler called `clang` or _c language_.

==Clang and GCC== are both free and open-source compilers that support most modern platforms, but they differ in several ways: 

- Speed and memory: Clang is faster and uses less memory than GCC. 
- Error reporting: Clang's error messages are more detailed, specific, and machine-readable than GCC's. Clang also retains more information during compilation, making it easier to map errors back to the original source.
- Design: Clang is more modular than GCC, making it easier to extend and maintain. GCC was originally designed as a monolithic compiler, but has become more modular over time. 
- Supported languages: GCC supports more traditional languages than Clang, such as Ada, Fortran, and Go. 
- Supported platforms: Clang/LLVM compiles natively on Windows, while GCC requires a subsystem like MinGW. 
- Standardization support: GCC supports C++17, C17, and has experimental support for C++20. 
- Performance: GCC has a performance advantage in some tests, but Clang and LLVM improve performance in others.


Compiling involves major steps, including the following:

- First, _preprocessing_ is where the header files in your code, designated by a `#` (such as `#include <cs50.h>`) are effectively copied and pasted into your file. During this step, the code from `cs50.h` is copied into your program. Similarly, just as your code contains `#include <stdio.h>`, code contained within `stdio.h` somewhere on your computer is copied to your program. This step can be visualized as follows:
    
    ```
    string get_string(string prompt);
    int printf(string format, ...);
    
    int main(void)
    {
        string name = get_string("What's your name? ");
        printf("hello, %s\n", name);
    }
    ```
    
- Second, _compiling_ is where your program is converted into assembly code. This step can be visualized as follows:
    
    ![compiling](https://cs50.harvard.edu/x/2024/notes/2/cs50Week2Slide033.png "compiling")
    
- Third, _assembling_ involves the compiler converting your assembly code into machine code. This step can be visualized as follows:
    
    ![assembling](https://cs50.harvard.edu/x/2024/notes/2/cs50Week2Slide038.png "assembling")
    
- Finally, during the _linking_ step, code from your included libraries are converted also into machine code and combined with your code. The final executable file is then outputted.
    
    ![linking](https://cs50.harvard.edu/x/2024/notes/2/cs50Week2Slide049.png "linking")


