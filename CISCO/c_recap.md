
`printf("%zu\n", sizeof(myInt));`

Note that we use the %zu format specifier to print the result, instead of %d. This is because the compiler expects the sizeof operator to return a value of type size_t, which is an unsigned integer type. On some computers it might work with %d, but it is safer and more portable to use %zu, which is specifically designed for printing size_t values.

`printf("Cost per item: %.2f %c\n", cost_per_item, currency);`

// Manual conversion: int to float
float sum = (float) 5 / 2;



int num1 = 5;
int num2 = 2;
float sum = (float) num1 / num2;

printf("%.1f", sum); // 2.5


const int myNum = 15;

`>>=	x >>= 3	x = x >> 3`	
`<<=	x <<= 3	x = x << 3`


`bool isProgrammingFun = true;`
`bool isFishTasty = false;`

`// Return boolean values`
`printf("%d", isProgrammingFun);   // Returns 1 (true)`
`printf("%d", isFishTasty);        // Returns 0 (false)`

## Short if else

`int time = 20;`
`(time < 18) ? printf("Good day.") : printf("Good evening.");`

## Switch case

`switch (expression) {`
  `case x:`
    `// code block`
    `break;`
  `case y:`
    `// code block`
    `break;`
  `default:`
    `// code block`
`}`


## While loop false aavunna vare loop run aakum

`int i = 0;`

`while (i < 5) {`
  `printf("%d\n", i);`
  `i++;`
`}`


## Reverse a number 

`// A variable with some specific numbers`
`int numbers = 12345;`

`// A variable to store the reversed number`
`int revNumbers = 0;`

`// Reverse and reorder the numbers`
`while (numbers) {`
  `// Get the last number of 'numbers' and add it to 'revNumber'`
  `revNumbers = revNumbers * 10 + numbers % 10;`
  `// Remove the last number of 'numbers'`
  `numbers /= 10;`
`}`


## For looping 

`for (i = 0; i <= 10; i = i + 2)`

## For loop printing square 

`for (i = 2; i <= 512; i *= 2)`

## C Strings

`char greetings[] = "Hello World!";`
`printf("%s", greetings);`


## Nul charector in c

`char greetings2[] = "Hello World!";`

`printf("%zu\n", sizeof(greetings));   // Outputs 13`

## include <string.h>

==strlen()==

`printf("%zu", strlen(alphabet));`

==sizeof== will always return the ==memory size== (in bytes), and not the actual string length

==strcat()==

Concatenate str2 to str1 (result is stored in str1)

`char str1[20] = "Hello ";`
`char str2[] = "World!";`

`strcat(str1, str2);`

==strcpy()==

`char str1[20] = "Hello World!";`
`char str2[20];`

`// Copy str1 to str2`
`strcpy(str2, str1);`

==strcmp()==

`printf("%d\n", strcmp(str1, str2));` 

`char str1[20] = "Hello ";`
`char str2[] = "World!";`

==User Input==

`scanf("%d", &myNum);`

format specifier of the variable (%d
reference operator (&myNum)

`scanf("%d %c", &myNum, &myChar);`

But for string there's no & 

`scanf("%s", firstName);`

---

`int myAge = 43; // an int variable`

`printf("%d", myAge);  // Outputs the value of myAge (43)`
`printf("%p", &myAge); // Outputs the memory address of myAge (0x7ffe5367e044)`


---

int myAge = 43;     // An int variable
int* ptr = &myAge;  // A pointer variable, with the name ptr, that stores the address of myAge

// Output the value of myAge (43)
printf("%d\n", myAge);

// Output the memory address of myAge (0x7ffe5367e044)
printf("%p\n", &myAge);

// Output the memory address of myAge with the pointer (0x7ffe5367e044)
printf("%p\n", ptr);

---