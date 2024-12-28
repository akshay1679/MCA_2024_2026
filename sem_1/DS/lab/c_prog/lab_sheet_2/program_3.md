
```c
//o replace an array value w.r.t position(your function must accept array, size of array, position, and new value) using function
#include <stdio.h>

void replaceValue(int arr[], int size, int position, int newValue) {
    // Check if the position is valid
    if (position < 0 || position >= size) {
        printf("Error: Position out of bounds.\n");
        return;
    }
    
    // Replace the value at the specified position
    arr[position] = newValue;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    int position = 2; // Position to replace (0-based index)
    int newValue = 99; // New value to insert
    
    replaceValue(arr, size, position, newValue);
    
    printf("Array after replacement: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
```