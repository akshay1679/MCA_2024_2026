### Bubble sort 
- Doesn't have any real time application 
- Ascending order 
- Initially finds the largest number and place it in the last position 
- main operations comparison and swapping 

Two operations here - Comparison and Swap. The first two element are compared first, then the second and third elements are compared and so on In ascending order sort after the first pass the largest element is at the back of the array 

 Even if The value is same no swap  happens ie according to the implementation The next greatest value is  selected ie if two values are the same . Then the second value comparison next
 
in bubble sort max no of comparison = 

Let size of Array be 5
Then
	1st pass comparisons-4          `Inputs -5`
	2nd pass comparisons - 3      `Inputs -4`
	3rd pas comparisons - 2         `Inputs -3`
	4th pars comparison - 1          `Inputs -2`

## Apply bubble sort

![[Pasted image 20240928032225.png]]

![[Pasted image 20240928032303.png]]
## Algorithm for bubble sort

```
bubble_sort(arr,n)
{
for(int i = 0;i<n-1,i++)
{
for(int j = 0;j<n-i-1;j++)
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

## Modified bubble sort

To prevent the loop to run multiple time even if the array is sorted we use a flag method 
to check if swapping has happened

```
bubble_sort(arr,n)
{
for(int i = 0;i<n-1,i++)
{
swap = false;
for(int j = 0;j-i-1;j++)
{
if(arr[i]>arr[i+1])
{
temp = arr[i];
arr[i] = arr[i+1];
arr[i+1]= temp;
swap = true;
}
}
if (swap = false)
break;
}

```
## Analysis of the algorithm(for optimized bubble sort)

------
###  **Best case scenario** -> O(n)

**scenario** ==> Already elements are arranged in the ascending order
- If there are n elements no of comparison is (n-1) if n is very large ≈ n
- The complexity is linear O(n)
- no of changes in input and comparison are similar 
- comparison = n - 1 (1 pass)
- ==Complexity  = **O**($n$)==


------
### **Worst case scenario** -> O($n^2$)

 **scenario** ==> elements are arranged in descending order 
- the number of pass is n-1 and number of comparisons is :
- (n-1)(n-2)(n-3)......... 
- ==complexity = O($n^2$) = Quadratic complexity==
- $$\text{comparisons =}\frac{n(n-1)}{2}$$
# bubble sort cont and image

![[Pasted image 20240928035433.png]]


---

### Algorithm features 

1. **Adaptive** -> different complexities for best and best cases
	Bubble And insertion sort are adaptive 

2. **In place** -> sorting algorithm doesn't use any extra variable spaces to perform the sorting 

	Bubble is in place since it uses only one variable for 10 and even 100
	insertion is also in place 

3. **Stable** ->if the duplicate value in the output matches the input
4. bubble and insertion

---

```
#include <stdio.h>

// Function to perform Bubble Sort
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        // Last i elements are already in place
        for (j = 0; j < n-i-1; j++) {
            // Swap if the element found is greater than the next element
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

// Function to print an array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    printf("Original array: \n");
    printArray(arr, n);
    
    bubbleSort(arr, n);
    
    printf("Sorted array: \n");
    printArray(arr, n);
    
    return 0;
}
```
