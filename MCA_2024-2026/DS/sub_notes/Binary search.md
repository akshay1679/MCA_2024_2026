#Binary_search

- ==Divide and conquer==
- used in sorted array
- Recursive structure 
- Doesn't compare all the elements 

**def** -->Binary search is applied for sorted element after each comparison the no of steps keeps decreasing starting point is mid

## Binary search algo non recursive
```
int binary_s(int arr[], int key, int low, int high)
{
    while (low <= high) {
        int mid = (low + high)/2;
        if (arr[mid] == key){
            return mid;
        }
        else if (arr[mid] < key )
        {
            low = mid+1;
        }
        else if (arr[mid] > key)
        {
            high = mid - 1;
        }
    }
    return -1;
}
```



Maximum number of steps binary search has to do is log2n
Worst case scenario is log2n

## Binary search algo recursive

```
int binary_s(int arr[], int key, int low, int high)
{
    if (low <= high) {
        int mid = (low + high)/2;
        if (arr[mid] == key){
            return mid;
        }
        else if (key < arr[mid] )
        {
            binary_s(arr[],key, low, mid - 1);
        }
        else 
        {
			binary_s(arr[],key, mid + 1 , high);
        }
    }
    else 
	    {
		    return -1;
		}
}
```

---
## **Best case scenario** -> O(1)

- The element supposed to be searched is in the middle position. 
- Number of comparison = 1
- ==complexity is constant==. 

---
## Worst case scenario -> O(log n) 

 1. Successful search -> O(log n)
      - first position or last position 
      - number of comparison = log n
      - complexity = log n ->logethomic complexity
2. Unsuccessful search -> O log n
     -  not present in the array 
     - number of comparison = log 2(n)
     - ==complexity log 2 n -> logarithmic complexity==

---
# binary search graph 
#complete

```
#include <stdio.h>

// Function to perform Binary Search
int binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Check if target is at mid
        if (arr[mid] == target)
            return mid;

        // If target is greater, ignore the left half
        if (arr[mid] < target)
            left = mid + 1;

        // If target is smaller, ignore the right half
        else
            right = mid - 1;
    }

    // If target is not present in array
    return -1;
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 10;
    
    int result = binarySearch(arr, 0, n - 1, target);
    
    if (result != -1)
        printf("Element is present at index %d\n", result);
    else
        printf("Element is not present in array\n");
    
    return 0;
}
```


```
#include <stdio.h>

int binary_s(int arr[], int key, int low, int high)
{
    while (low <= high) {
        int mid = (low + high)/2;
        if (arr[mid] == key){
            return mid;
        }
        else if (arr[mid] < key )
        {
            low = mid+1;
        }
        else if (arr[mid] > key)
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[]= {1,12,15,16,17,18,19,20,21,22,23};
    int low = 0;
    int high = sizeof(arr)/sizeof(arr[0]) - 1; // subtract 1 because array indices start from 0
    printf("enter the key: ");
    int key;
    scanf("%d",&key);
    int result =  binary_s(arr,key,low,high);
    if (result != -1){
        printf("the number is found at index %d",result);

    }
    else{
        printf("the element is not found");
    }
    return 0;
}
```

Q. Search for a rank in rank list -> binary search because the rank list is sorted ? 