# Selection sort -> O($n^2$)


Here the algorithm finds the lowest element in an array and moves it  to the front of an array 

---
## Working 

| 20  | 12  | 10  | 15  |  2  |
| :-: | :-: | :-: | :-: | :-: |

We first set the first element as minimum.then compare  it with the second element. If the second element is smaller then it is set as minimum . We repeat it till the min is found and it is swapped to the first position. (till n-1 indexes)

![[Pasted image 20240928122632.png]]

![[Pasted image 20240928122713.png]]

![[Pasted image 20240928122743.png]]

complexity = O($n^2$)

---



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

```
#include <stdio.h>

// Function to swap two elements
void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// Function to perform Selection Sort
void selectionSort(int arr[], int n) {
    int i, j, min_idx;

    // One by one move the boundary of the unsorted subarray
    for (i = 0; i < n-1; i++) {
        // Find the minimum element in the unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        // Swap the found minimum element with the first element
        if (min_idx != i) {
            swap(&arr[min_idx], &arr[i]);
        }
    }
}

// Function to print the array
void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    printf("Original array: \n");
    printArray(arr, n);
    
    selectionSort(arr, n);
    
    printf("\nSorted array: \n");
    printArray(arr, n);
    
    return 0;
}
```

Explanation:

Swap Function: Swaps two values using pointers.

Selection Sort Function: The algorithm repeatedly selects the smallest element from the unsorted part and swaps it with the first unsorted element.

Print Function: Simply prints the elements of the array.


Time Complexity:

Best/Average/Worst Case: O(n²)

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