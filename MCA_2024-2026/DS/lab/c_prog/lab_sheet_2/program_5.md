
```c
//search a character in your name 
#include <stdio.h>

int main() {
    char name[100]; // Array to hold the name
    char ch;       // Character to search for
    int found = 0; // Flag to indicate if the character is found

    // Input the name
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    // Input the character to search for
    printf("Enter a character to search for: ");
    scanf(" %c", &ch);

    // Search for the character in the name
    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] == ch) {
            found = 1; // Set flag if character is found
            break;     // Exit the loop as we found the character
        }
    }

    // Output the result
    if (found) {
        printf("The character '%c' is found in your name.\n", ch);
    } else {
        printf("The character '%c' is not found in your name.\n", ch);
    }

    return 0;
}
```