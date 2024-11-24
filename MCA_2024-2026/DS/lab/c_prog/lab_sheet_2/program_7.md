

```c
//search a number in a sorted integer array 
#include <stdio.h>

// Function to perform binary search
int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Check if the target is present at mid
        if (arr[mid] == target) {
            return mid; // Target found
        }
        // If target is greater, ignore the left half
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        // If target is smaller, ignore the right half
        else {
            right = mid - 1;
        }
    }

    return -1; // Target not found
}

int main() {
    int arr[] = {2, 3, 4, 10, 40}; // Sorted array
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 10;

    int result = binarySearch(arr, size, target);
    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found in the array\n");
    }

    return 0;
}
```



```c
#include <stdio.h>

int binarySearch(int arr[], int size, int target) {
    int left = 0, right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Check if the target is at the middle
        if (arr[mid] == target) {
            return mid; // Return the index where the target is found
        }

        // If target is greater, ignore the left half
        if (arr[mid] < target) {
            left = mid + 1;
        }
        // If target is smaller, ignore the right half
        else {
            right = mid - 1;
        }
    }

    return -1; // Target not found
}

int main() {
    int arr[] = {2, 3, 4, 10, 40, 50}; // Must be sorted
    int size = sizeof(arr) / sizeof(arr[0]);

    int target;
    printf("Enter a number to search: ");
    scanf("%d", &target);

    int result = binarySearch(arr, size, target);

    if (result != -1) {
        printf("Number %d found at index %d.\n", target, result);
    } else {
        printf("Number %d not found in the array.\n", target);
    }

    return 0;
}

```