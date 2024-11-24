

```c
//search a name in an array of names 
#include <stdio.h>
#include <string.h>

#define MAX_NAMES 5
#define NAME_LENGTH 50

int main() {
    // Define an array of names
    char names[MAX_NAMES][NAME_LENGTH] = {
        "Alice",
        "Bob",
        "Charlie",
        "David",
        "Eve"
    };

    char searchName[NAME_LENGTH];
    int found = 0;

    // Prompt user to enter a name to search
    printf("Enter a name to search: ");
    fgets(searchName, NAME_LENGTH, stdin);
    
    // Remove newline character if present
    searchName[strcspn(searchName, "\n")] = '\0';

    // Search for the name in the array
    for (int i = 0; i < MAX_NAMES; i++) {
        if (strcmp(names[i], searchName) == 0) {
            found = 1;
            break;
        }
    }

    // Output the result
    if (found) {
        printf("%s is found in the list.\n", searchName);
    } else {
        printf("%s is not found in the list.\n", searchName);
    }

    return 0;
}
```



```c
#include <stdio.h>
#include <string.h>

int main() {
    // Define an array of names
    char *names[] = {"Alice", "Bob", "Charlie", "David", "Eve"};
    int size = sizeof(names) / sizeof(names[0]);

    char searchName[50];
    printf("Enter a name to search: ");
    scanf("%s", searchName);

    int found = 0; // Flag to check if the name is found

    for (int i = 0; i < size; i++) {
        if (strcmp(names[i], searchName) == 0) { // Compare each name
            printf("Name '%s' found at index %d.\n", searchName, i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Name '%s' not found in the list.\n", searchName);
    }

    return 0;
}

```