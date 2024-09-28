**Def** ->
	Select the values from each index and move the  values to the right till values to the left of key is less than itself 

```
#include <stdio.h>

void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        // Move elements of arr[0..i-1], that are greater than key,
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: \n");
    printArray(arr, n);

    insertionSort(arr, n);

    printf("Sorted array: \n");
    printArray(arr, n);

    return 0;
}
```

##### How it works
1. The function insertionSort() sorts the array by iterating from the second element to the last.
2. For each element, it moves elements greater than the current element (key) one position to the right.
3. It then inserts the current element in its correct position relative to the already sorted elements on the left.

---
### Algorithm:

1. Start with the second element of the array, as the first element is considered sorted.
2. Compare the current element with the elements in the sorted part (to the left).
3. Shift elements in the sorted part to the right until the correct position for the current element is found.
4. Insert the current element into its correct position.
5. Repeat the process for all elements in the array.

---

### Pseudocode

```
def insertion_sort(arr):
    for i in range(1, len(arr)):
        key = arr[i]
        j = i - 1
        # Move elements of arr[0..i-1], that are greater than key, one position ahead
        while j >= 0 and key < arr[j]:
            arr[j + 1] = arr[j]
            j -= 1
        arr[j + 1] = key
```

----
### Example:

Consider the array: [12, 11, 13, 5, 6]

1. **Step 1:** [12, 11, 13, 5, 6] → Move 11 to its correct position → [11, 12, 13, 5, 6]
2. **Step 2:** [11, 12, 13, 5, 6] → 13 is already in the correct position.
3. **Step 3:** [11, 12, 13, 5, 6] → Move 5 to its correct position → [5, 11, 12, 13, 6]
4. **Step 4:** [5, 11, 12, 13, 6] → Move 6 to its correct position → [5, 6, 11, 12, 13]

Now the array is sorted.

---
### **Best case scenario** -> O(n)

**scenario** ==>  Arranged in ascending order
- If total n inputs then number of comparison is  n-1
- Complexity = O(n) 

==When partially shorted insertion sort performance lesser number of comparison . So for partially sorted insertion sort is Faster== 

==Insertion sort is better for smaller number of elements 
It is better for element number  up-to 10==

---
### **Worst case scenario** -> O($n^2$)

**scenario** ==> Arranged in descending order

- Number of passes = n-1
- complexity =  O($n^2$) = quadratic
-  $$\text{comparisons =}\frac{n(n-1)}{2}$$

---
###  Algorithm features 

1. **Adaptive** -> different complexities for best and best cases
	Bubble And insertion sort are adaptive 

2. **In place** -> sorting algorithm doesn't use any extra variable spaces to perform the sorting 

	Bubble is in place since it uses only one variable for 10 and even 100
	insertion is also in place 

3. **Stable** ->if the duplicate value in the output matches the input
4. bubble and insertion
---
![[Pasted image 20240928044235.png]]