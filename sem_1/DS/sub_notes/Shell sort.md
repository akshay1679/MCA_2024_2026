```
#include <stdio.h>

void shellSort(int arr[], int n) {
    // Start with a large gap, then reduce the gap
    for (int gap = n / 2; gap > 0; gap /= 2) {
        // Perform a gapped insertion sort
        for (int i = gap; i < n; i++) {
            int temp = arr[i];
            int j;
            // Shift earlier gap-sorted elements up until the correct location for arr[i] is found
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            // Place temp at its correct position
            arr[j] = temp;
        }
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {12, 34, 54, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: \n");
    printArray(arr, n);

    shellSort(arr, n);

    printf("Sorted array: \n");
    printArray(arr, n);

    return 0;
}
```

#### Explanation:
1. The shellSort function starts with a large gap between elements and progressively reduces the gap.
2. For each gap, the code performs a modified insertion sort, where elements are compared and shifted over longer distances.
3. This reduces the number of total comparisons, improving the efficiency of sorting over simple insertion sort.