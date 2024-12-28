

```c
//search a number in an integer array, if its found then swap its left and right values. 
#include <stdio.h>

void swapLeftRight(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            // Check if the left and right neighbors exist
            if (i > 0 && i < size - 1) {
                // Swap the left and right values
                int temp = arr[i - 1];
                arr[i - 1] = arr[i + 1];
                arr[i + 1] = temp;
                printf("Swapped values at indices %d and %d\n", i - 1, i + 1);
            } else {
                printf("Cannot swap, target is at an edge of the array.\n");
            }
            return; // Exit after first swap
        }
    }
    printf("Number %d not found in the array.\n", target);
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    printf("Enter a number to search and swap: ");
    scanf("%d", &target);

    swapLeftRight(arr, size, target);

    // Print the modified array
    printf("Modified array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
```