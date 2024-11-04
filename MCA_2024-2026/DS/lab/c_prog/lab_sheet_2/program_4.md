
```c
//search an integer in an array of integers 
#include <stdio.h>

int search(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; // Return the index of the target if found
        }
    }
    return -1; // Return -1 if the target is not found
}

int main() {
    int arr[] = {10, 20, 30, 40, 50}; // Example array
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    int target;

    printf("Enter an integer to search: ");
    scanf("%d", &target); // Input target integer

    int result = search(arr, size, target); // Call the search function

    if (result != -1) {
        printf("Element found at index: %d\n", result);
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}
```