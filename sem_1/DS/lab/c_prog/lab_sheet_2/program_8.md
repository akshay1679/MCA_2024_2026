
```c
//search a character in alphabets 
#include <stdio.h>

int main() {
    char ch;

    // Prompt the user to enter a character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is an alphabet
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        printf("'%c' is an alphabet character.\n", ch);
    } else {
        printf("'%c' is not an alphabet character.\n", ch);
    }

    return 0;
}
```
