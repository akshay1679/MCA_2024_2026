In this type of sorting the smallest element is found in each pass and placed according to the array

```
#include <stdio.h>

void selectionSort(int arr[], int n) {
    int i, j, minIdx, temp;
    
    // Move the boundary of the unsorted subarray one by one
    for (i = 0; i < n-1; i++) {
        // Find the minimum element in the unsorted array
        minIdx = i;
        for (j = i+1; j < n; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        
        // Swap the found minimum element with the first element
        temp = arr[minIdx];
        arr[minIdx] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    printf("Original array: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    selectionSort(arr, n);
    
    printf("\nSorted array: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
```

#### Explanation:
1. The function selectionSort takes an array arr[] and its size n as input.
2. In each iteration of the outer loop, it selects the minimum element from the unsorted part of the array and swaps it with the element at the beginning of the unsorted part.
3. The process is repeated until the entire array is sorted.
#### **Worst case scenario** ->
- Arranged in descending order 
- number of passes
- number of comparisons

#### **best case scenario** ->
- Arranged in ascending order 
- number of passes
- number of comparisons

#### **Average case scenario** ->
- Arranged in random order 
- number of passes
- number of comparisons
####  Algorithm features 

1. **Adaptive** -> Adaptive 
2. **In place** -> In place 
3. **Stable** -> Unstable as the relative position is not maintained .