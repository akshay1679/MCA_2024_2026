Here are 30 mid-level multiple-choice questions (MCQs) covering various topics in C programming:

### 1. What is the output of the following code?
```c
#include <stdio.h>
int main() {
    int a = 5, b = 10;
    printf("%d", a + b++);
    return 0;
}
```
A) 15  
B) 16  
C) 10  
D) 5  

### 2. Which of the following is not a valid variable name in C?
A) _var  
B) 2ndVar  
C) varName  
D) var_2  

### 3. What is the purpose of the `static` keyword in C?
A) To define a global variable  
B) To limit the scope of a variable  
C) To create a constant variable  
D) To declare a function  

### 4. What will be the output of the following code?
```c
#include <stdio.h>
int main() {
    int x = 10;
    x += 5;
    printf("%d", x);
    return 0;
}
```
A) 5  
B) 10  
C) 15  
D) 20  

### 5. Which operator is used to access the members of a structure?
A) . (dot)  
B) -> (arrow)  
C) & (address of)  
D) Both A and B  

### 6. What is the size of an `int` data type in C on a 32-bit system?
A) 2 bytes  
B) 4 bytes  
C) 8 bytes  
D) 16 bytes  

### 7. What is the correct way to allocate memory dynamically for an array of 10 integers?
A) `int *arr = (int *)malloc(10 * sizeof(int));`  
B) `int *arr = malloc(10 * sizeof(int));`  
C) `int arr[10] = malloc(10 * sizeof(int));`  
D) Both A and B  

### 8. What does the following code print?
```c
#include <stdio.h>
int main() {
    char str[] = "Hello";
    printf("%c", str[1]);
    return 0;
}
```
A) H  
B) e  
C) l  
D) o  

### 9. Which function is used to find the length of a string in C?
A) strlength()  
B) strlen()  
C) length()  
D) strsize()  

### 10. What will be the output of the following code?
```c
#include <stdio.h>
int main() {
    int i;
    for (i = 0; i < 5; i++) {
        if (i == 3) break;
        printf("%d ", i);
    }
    return 0;
}
```
A) 0 1 2 3  
B) 0 1 2  
C) 1 2 3 4  
D) 0 1 2 3 4  

### 11. What is the default value of a static variable in C?
A) 0  
B) Garbage value  
C) NULL  
D) 1  

### 12. Which of the following statements is used to terminate a loop in C?
A) exit  
B) stop  
C) break  
D) return  

### 13. What is the output of the following code?
```c
#include <stdio.h>
int main() {
    int a = 5, b = 2;
    printf("%d", a / b);
    return 0;
}
```
A) 2.5  
B) 2  
C) 3  
D) 5  

### 14. Which of the following is a correct declaration of a function pointer?
A) int *ptr;  
B) int (*ptr)();  
C) void ptr();  
D) function ptr();  

### 15. In C, what does the `sizeof` operator return?
A) The size of a variable in bits  
B) The size of a variable in bytes  
C) The number of elements in an array  
D) The maximum value of a data type  

### 16. What will happen if you attempt to access an array element outside its bounds?
A) It will give a compile-time error  
B) It will give a runtime error  
C) It may return a garbage value  
D) The program will terminate immediately  

### 17. Which of the following data types can hold a decimal value in C?
A) int  
B) char  
C) float  
D) string  

### 18. What is the output of the following code?
```c
#include <stdio.h>
int main() {
    int x = 10;
    printf("%d %d", x++, ++x);
    return 0;
}
```
A) 10 12  
B) 11 11  
C) 11 12  
D) 10 11  

### 19. Which of the following is a loop control statement in C?
A) if  
B) switch  
C) for  
D) goto  

### 20. What is the return type of the `main` function in C?
A) void  
B) int  
C) char  
D) float  

### 21. Which header file is required to use the `malloc` function?
A) stdio.h  
B) stdlib.h  
C) string.h  
D) conio.h  

### 22. Which of the following is a valid way to define a constant in C?
A) const int x = 10;  
B) #define x 10  
C) Both A and B  
D) None of the above  

### 23. What is the purpose of the `return` statement in a function?
A) To end the function  
B) To return a value to the caller  
C) To exit the program  
D) Both A and B  

### 24. What will be the output of the following code?
```c
#include <stdio.h>
int main() {
    printf("%d", 2 * 3 + 5 * 4);
    return 0;
}
```
A) 38  
B) 26  
C) 32  
D) 22  

### 25. What is the correct syntax for a preprocessor directive in C?
A) #include <stdio.h>  
B) include <stdio.h>  
C) #include stdio.h  
D) #include (stdio.h)  

### 26. In a structure, how do you access a member of the structure using a pointer?
A) . (dot)  
B) -> (arrow)  
C) & (address of)  
D) :: (scope resolution)  

### 27. Which of the following is used to declare a multi-dimensional array?
A) int arr[][];  
B) int arr[2][3];  
C) int arr(2)(3);  
D) Both A and B  

### 28. What will be the output of the following code?
```c
#include <stdio.h>
int main() {
    int x = 5;
    printf("%d", x++ + ++x);
    return 0;
}
```
A) 11  
B) 10  
C) 12  
D) 15  

### 29. What will happen if you forget to add `return 0;` at the end of the `main` function?
A) It will give a compilation error  
B) It will return a random value  
C) The program will terminate  
D) It will return 0 by default in C99 and later  

### 30. What is the use of the `volatile` keyword in C?
A) To declare a variable as constant  
B) To indicate that a variable may change unexpectedly  
C) To optimize performance  
D) To prevent the use of pointers  

Feel free to use or modify these questions as needed!

Here are the detailed answers with explanations for each of the 30 C programming MCQs:

---

### 1. **What is the output of the following code?**
```c
#include <stdio.h>
int main() {
    int a = 5, b = 10;
    printf("%d", a + b++);
    return 0;
}
```
**Answer: B) 16**  
**Explanation:**  
- `b++` is a **post-increment** operator, so the value of `b` used in the expression is 10 (before incrementing).
- `a + b++` is `5 + 10 = 15`. After the expression, `b` becomes 11, but this increment doesn't affect the output.
- Output: **16**

---

### 2. **Which of the following is not a valid variable name in C?**
**Answer: B) 2ndVar**  
**Explanation:**  
- In C, a variable name cannot start with a **digit**. All other options are valid identifiers.

---

### 3. **What is the purpose of the `static` keyword in C?**
**Answer: B) To limit the scope of a variable**  
**Explanation:**  
- `static` restricts the scope of a variable or function to the **file or function** where it is declared. It also preserves the variable’s value between function calls.

---

### 4. **What will be the output of the following code?**
```c
#include <stdio.h>
int main() {
    int x = 10;
    x += 5;
    printf("%d", x);
    return 0;
}
```
**Answer: C) 15**  
**Explanation:**  
- `x += 5` is equivalent to `x = x + 5`. So, `10 + 5 = 15`.  
- Output: **15**

---

### 5. **Which operator is used to access the members of a structure?**
**Answer: D) Both A and B**  
**Explanation:**  
- **`.`** is used when accessing members with a structure variable.  
- **`->`** is used when accessing members through a **pointer** to a structure.

---

### 6. **What is the size of an `int` data type in C on a 32-bit system?**
**Answer: B) 4 bytes**  
**Explanation:**  
- On a **32-bit system**, an `int` typically occupies **4 bytes** of memory.

---

### 7. **What is the correct way to allocate memory dynamically for an array of 10 integers?**
**Answer: D) Both A and B**  
**Explanation:**  
- `malloc()` allocates memory, and **casting** to `(int *)` is optional but common in C.  
- Both options A and B are correct.

---

### 8. **What does the following code print?**
```c
#include <stdio.h>
int main() {
    char str[] = "Hello";
    printf("%c", str[1]);
    return 0;
}
```
**Answer: B) e**  
**Explanation:**  
- The character at index 1 in `"Hello"` is **'e'**.

---

### 9. **Which function is used to find the length of a string in C?**
**Answer: B) strlen()**  
**Explanation:**  
- `strlen()` returns the **number of characters** in the string (excluding the null terminator).

---

### 10. **What will be the output of the following code?**
```c
#include <stdio.h>
int main() {
    int i;
    for (i = 0; i < 5; i++) {
        if (i == 3) break;
        printf("%d ", i);
    }
    return 0;
}
```
**Answer: B) 0 1 2**  
**Explanation:**  
- The loop **breaks** when `i == 3`, so the output is **0 1 2**.

---

### 11. **What is the default value of a static variable in C?**
**Answer: A) 0**  
**Explanation:**  
- **Static variables** are initialized to **0** by default if no other value is provided.

---

### 12. **Which of the following statements is used to terminate a loop in C?**
**Answer: C) break**  
**Explanation:**  
- The `break` statement terminates a loop immediately.

---

### 13. **What is the output of the following code?**
```c
#include <stdio.h>
int main() {
    int a = 5, b = 2;
    printf("%d", a / b);
    return 0;
}
```
**Answer: B) 2**  
**Explanation:**  
- Integer division discards the decimal part, so `5 / 2 = 2`.

---

### 14. **Which of the following is a correct declaration of a function pointer?**
**Answer: B) int (*ptr)();**  
**Explanation:**  
- This is the correct syntax for declaring a pointer to a function returning an `int`.

---

### 15. **In C, what does the `sizeof` operator return?**
**Answer: B) The size of a variable in bytes**  
**Explanation:**  
- `sizeof` returns the **memory size** of a variable or data type in **bytes**.

---

### 16. **What will happen if you access an array element outside its bounds?**
**Answer: C) It may return a garbage value**  
**Explanation:**  
- Accessing out-of-bounds elements causes **undefined behavior** and may return garbage.

---

### 17. **Which of the following data types can hold a decimal value in C?**
**Answer: C) float**  
**Explanation:**  
- The `float` data type stores decimal values.

---

### 18. **What is the output of the following code?**
```c
#include <stdio.h>
int main() {
    int x = 10;
    printf("%d %d", x++, ++x);
    return 0;
}
```
**Answer: C) 11 12**  
**Explanation:**  
- `x++` prints 10, then `++x` increments to 12 before printing.

---

### 19. **Which of the following is a loop control statement?**
**Answer: C) for**  
**Explanation:**  
- `for` is a loop control structure.

---

### 20. **What is the return type of the `main` function?**
**Answer: B) int**  
**Explanation:**  
- The standard return type of `main()` is `int`.

---

### 21. **Which header file is required to use `malloc`?**
**Answer: B) stdlib.h**  
**Explanation:**  
- `malloc()` is defined in `stdlib.h`.

---

### 22. **Which is a valid way to define a constant?**
**Answer: C) Both A and B**  
**Explanation:**  
- Constants can be defined using `const` or `#define`.

---

### 23. **What is the purpose of the `return` statement?**
**Answer: D) Both A and B**  
**Explanation:**  
- `return` ends the function and can return a value.

---

### 24. **What is the output of the code?**
```c
#include <stdio.h>
int main() {
    printf("%d", 2 * 3 + 5 * 4);
    return 0;
}
```
**Answer: B) 26**  
**Explanation:**  
- **Operator precedence:** `2 * 3 + 5 * 4 = 6 + 20 = 26`.

---

### 25. **What is the correct syntax for a preprocessor directive?**
**Answer: A) #include <stdio.h>**  
**Explanation:**  
- Preprocessor directives start with `#`.

---

### 26. **How do you access a structure member using a pointer?**
**Answer: B) -> (arrow)**  
**Explanation:**  
- Use `->` when accessing members via a pointer.

---

### 27. **Which defines a multi-dimensional array?**
**Answer: B) int arr[2][3];**  
**Explanation:**  
- Option B correctly declares a 2x3 array.

---

### 28. **What is the output of the code?**
```c
#include <stdio.h>
int main() {
    int x = 5;
    printf("%d", x++ + ++x);
    return 0;
}
```
**Answer: A) 11**  
**Explanation:**  
- `x++` uses 5, then `++x` becomes 7. Result: **5 + 6 = 11**.

---

### 29. **What happens if `return 0;` is missing?**
**Answer: D) It will return 0 by default**  
**Explanation:**  
- In C99 and later, `main()` returns 0 by default.

---

### 30. **What is the use of the `volatile` keyword?**
**Answer: B) To indicate that a variable may change unexpectedly**  
**Explanation:**  
- `volatile` prevents compiler optimizations on the variable.