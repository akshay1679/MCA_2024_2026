
```c
//swap the first and last values in a character array 
#include <stdio.h>

void swapFirstAndLast(char arr[]) {
    int length = 0;

    // Calculate the length of the array
    while (arr[length] != '\0') {
        length++;
    }

    // Swap the first and last elements
    if (length > 1) { // Ensure there are at least two characters to swap
        char temp = arr[0];
        arr[0] = arr[length - 1];
        arr[length - 1] = temp;
    }
}

int main() {
    char str[] = "Hello, World!";
    
    printf("Before swap: %s\n", str);
    swapFirstAndLast(str);
    printf("After swap: %s\n", str);
    
    return 0;
}
```