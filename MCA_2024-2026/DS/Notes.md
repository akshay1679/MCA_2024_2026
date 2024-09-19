




## Data Structure

**def** -> organised collection of data along with their permissible operations
### Classification of data structure

1. **Arrangement**
	- linear and non linear
2. **Type of data**
	- homegenous and hetrogenous
3. **Size**
	- Static and dynamic

### Arrays
1. Elements are arranged in linear fashion 
2. homogenous ollection of values tored under a single name continuously in memory
3. Elements are accessed with respect to location ie: indexed 
4. ==operations== :- 
	1. insertion
	2. deletion
	3. Search
	4. merge/split
	5. sort
5. in array we know the address of first value so we can access the next element since it is continuous
6. the first address of the arrar is called the ==base address== ,the consecutive address are accessed by incrementing from the base address.
7. The index starts fron a[0]
#### Insertion into array

find the last last occupied index and add 1 to the index and insert new value if the new index is < the size of the array
1. Insertion at a partiular position
2. if arr[pos]=-1
3. then arr[pos] = val

#### Insertion into a particular position in array

step 1: start
step 2:traverse the array from the position to check if the its full if full overflow exit
step 3: check if the given index is free go and replace
step 4: else find the clocest index that  
### Time complexity

  ![[cs50Week3Slide042.png]]

It’s the shape of the curve that shows the efficiency of an algorithm. Some common running times we may see are:

- O(n2)
- O(nlog⁡n)
- O(n)
- O(log⁡n)
- O(1)

- Of the running times above, O(n2) is considered the worst running time, O(1) is the fastest.
- ==Linear search ==was of order O(n) because it could take _n_ steps in the worst case to run.
- ==Binary search== was of order O(log⁡n) because it would take fewer and fewer steps to run even in the worst case.
- Programmers are interested in both the worst case, or **_upper bound_**, and the best case, or **_lower bound_**.
- The Ω symbol is used to denote the ==best case== of an algorithm, such as Ω(log⁡n).
- The Θ symbol is used to denote where the upper bound and lower bound are the same, where the best case and the worst case running times are the same.
- As you continue to develop your knowledge in computer science, you will explore these topics in more detail in future courses.

---

1. upper bound --> O
2. lower bound --> Ω
3. if upper bound == lower bound --> Θ

---
## Searching
### Linear search

```
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // An array of integers
    int numbers[] = {20, 500, 10, 5, 100, 1, 50};

    // Search for number
    int n = get_int("Number: ");
    for (int i = 0; i < 7; i++)
    {
        if (numbers[i] == n)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}
```


Best case -> O(1)
- ==scenario== element to be searched is in the first position 
- here the no of comparisons is independent of input size
- ie no of comparisons is constant 
- complexity = constant 
Worst case -> O(n)
- ==scenario== 
    1. element to be searched is in the last position 
    2. Element to be searched is not in array
- no of comparison is the input size
- if the input size is increased the number of comparison is also increased 
- therefore they are proportional and comparison is linear
---

### Binary search 

**Devide and conquer**

Shorted array
Requersieve structure 
Doesn't compare all the elements 
```

Int Binary_search (arr,key,low,heigh)
If low <= heigh
Mid = low + heigh \ 2
If key = arr[mid]
Return mid
Else if key



```

Maximum number of steps binary search has to do is log2n
Worst case scenario is log2n

**Best case scenario** -> O(1)
- The element supposed to be searched is in the middle position 
- Number of comparison 1
- complexity is constant 
Worst case scenario 
 1. Successful search -> O(log n)
      - first position or last position 
      - number of comparison = log n
      - complexity = log n ->logethomic complexity
2. Unsuccessful search -> O log n
     -  not present in the array 
     - number of comparison = log 2 n
     - complexity log 2 n -> logarithmic complexity

Search for a rank in rank list -> binary search because the rank list is sorted ? 

---

## SORTING 

Bubble, insertion ,selection, shell

---

### Bubble sort 
- Doesn't have any real time application 
- Ascending order 
- Initially finds the largest number and place it in the last position 
- operation comparison and swapping 

#### Algorithm for bubble sort
```
bubble_sort(arr,n)
{
for(int i = 0;i<n-1,i++)
{
for(int j = 0;j-i-1;j++)
{
if(arr[i]>arr[i+1])
{
temp = arr[i];
arr[i] = arr[i+1];
arr[i+1]= temp;
}
}
}
```

#### Modified bubble sort

to prevent the loop to run multiple time even if the array is sorted we use a flag method 
to check if swapping has happened
```
\\ modified bubble sort code

```
#### Analysis of the algorithm

##### **Best case scenario** -> O(n)
------

- Already elements are arranged in the ascending order 
- If there are n elements no of comparison is (n-1) if n is very large ≈ n
- The complexity is linear O(n)
- no of changes in input and comparison are similar 
##### **worst case scenario** -> O(n)
------
- elements are arranged in descending order 
- n-1 comparison 
- 1
- 1
- 1

### Insertion sort

Select the values from each index and the  values to the right till values to the left of key is less than itself 

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
##### **Worst case scenario** ->
------
- Arranged in descending order
- Number of passes n-1
- number of comparison. 

##### **Best case scenario** -> O(n)
------
- Arranged in ascending order
- Number of passes n-1
- number of comparison. 

==When partially shorted insertion sort performance lesser number of comparison . So for partially sorted insertion sort is Faster== 

==Insertion sort is better for smaller number of elements 
It is better for element number  up-to 10==


####  Algorithm features 

1. **Adaptive** -> different complexities for best and best cases
	Bubble And insertion sort are adaptive 

2. **In place** -> sorting algorithm doesn't use any extra variable spaces to perform the sorting 

	Bubble is in place since it uses only one variable for 10 and even 100
	insertion is also in place 

3. **Stable** ->

### Selection sort

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

### Shell sort
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
### Quick sort

[[Quick sort]]






