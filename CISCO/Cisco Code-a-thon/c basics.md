#c_basics 

- A compiler, like GCC, to translate the C code into a language that the computer will understand

- Single-line Comments  `//`

# C Variables

|Data Type|Size (bytes)|Range (Signed)|Range (Unsigned)|
|---|---|---|---|
|`char`|1|-128 to 127|0 to 255|
|`short` / `short int`|2|-32,768 to 32,767|0 to 65,535|
|`int`|4|-2,147,483,648 to 2,147,483,647|0 to 4,294,967,295|
|`long` / `long int`|4|-2,147,483,648 to 2,147,483,647|0 to 4,294,967,295|
|`long long` / `long long int`|8|−9,223,372,036,854,775,808 to 9,223,372,036,854,775,807|0 to 18,446,744,073,709,551,615|

| Data Type     | Size (bytes) | Range                                           | Precision    |
| ------------- | ------------ | ----------------------------------------------- | ------------ |
| `float`       | 4            | ~ ±3.4e−38 to ±3.4e+38                          | 6-7 digits   |
| `double`      | 8            | ~ ±1.7e−308 to ±1.7e+308                        | 15-16 digits |
| `long double` | 10/12/16     | ~ ±3.4e−4932 to ±1.1e+4932 (compiler-dependent) | ≥19 digits   |

| Data Type                             | Size (bytes) | Values                  |
| ------------------------------------- | ------------ | ----------------------- |
| `_Bool` or `bool` (via `<stdbool.h>`) | 1            | `0` (false), `1` (true) |
# C Format Specifiers

|Specifier|Data Type|Example Usage|
|---|---|---|
|`%d`|Signed int|`printf("%d", 10);`|
|`%i`|Signed int (same as `%d`)|`printf("%i", 10);`|
|`%u`|Unsigned int|`printf("%u", 10);`|
|`%f`|Float or double|`printf("%f", 3.14);`|
|`%lf`|Double (in `scanf`)|`scanf("%lf", &dbl_var);`|
|`%.2f`|Float (2 decimal)|`printf("%.2f", 3.14159);`|
|`%c`|Character|`printf("%c", 'A');`|
|`%s`|String|`printf("%s", "Hello");`|
|`%x`|Hexadecimal (lowercase)|`printf("%x", 255);`|
|`%X`|Hexadecimal (uppercase)|`printf("%X", 255);`|
|`%o`|Octal|`printf("%o", 10);`|
|`%p`|Pointer address|`printf("%p", ptr);`|
|`%%`|Percent sign|`printf("100%%");`|
|`%ld`|Long int|`printf("%ld", long_var);`|
|`%lld`|Long long int|`printf("%lld", long_long_var);`|
|`%e` or `%E`|Scientific notation|`printf("%e", 12345.678);`|
|`%g`|Float/Scientific (auto)|`printf("%g", 12345.678);`|

---

|Data Type|Size|Description|Example|
|---|---|---|---|
|`int`|2 or 4 bytes|Stores whole numbers, without decimals|`1`|
|`float`|4 bytes|Stores fractional numbers, containing one or more decimals. Sufficient for storing 6-7 decimal digits|`1.99`|
|`double`|8 bytes|Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits|`1.99`|
|`char`|1 byte|Stores a single character/letter/number, or ASCII values|`'A'`|


```c
#include <stdio.h>

int main() {
  char a = 65, b = 66, c = 67;
  printf("%c\n", a);
  printf("%c\n", b);
  printf("%c", c);
  return 0;
}
```

```output
A  
B  
C
```

```c
char myText[] = "Hello";  
printf("%s", myText);
```

```
int myInt;  
float myFloat;  
double myDouble;  
char myChar;  
  
printf("%zu\n", sizeof(myInt));  
printf("%zu\n", sizeof(myFloat));  
printf("%zu\n", sizeof(myDouble));  
printf("%zu\n", sizeof(myChar));
```

Note that we use the <mark style="background: #FFB8EBA6;">`%zu`</mark> format specifier to print the result, instead of `%d`. This is because the compiler expects the `sizeof` operator to return a value of type `size_t`, which is an <mark style="background: #FFB8EBA6;">unsigned integer</mark> type. On some computers it might work with `%d`, but it is safer and more portable to use `%zu`, which is specifically designed for printing `size_t` values.

