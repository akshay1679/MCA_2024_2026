
```c
//swap the first and last values in an integer array without a temporary variable 
//swap the first and last values in an integer array without a temporary variable



#include <stdio.h>


void swapFL(int arr[], int size) {

if (size > 1) { // Ensure there are at least two elements to swap

arr[0] = arr[0] + arr[size - 1]; // Add last to first

arr[size - 1] = arr[0] - arr[size - 1]; // Subtract last from new first

arr[0] = arr[0] - arr[size - 1]; // Subtract new last from new first

}

}

  

int main() {

int arr[] = {1, 2, 3, 4, 5};

int size = sizeof(arr) / sizeof(arr[0]);

  

printf("Original array: ");

for (int i = 0; i < size; i++) {

printf("%d ", arr[i]);

}

printf("\n");

  

swapFL(arr, size);

  

printf("Array after swapping first and last: ");

for (int i = 0; i < size; i++) {

printf("%d ", arr[i]);

}

printf("\n");

  

return 0;

}
```