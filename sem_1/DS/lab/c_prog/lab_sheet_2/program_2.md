

```c
//to find the average of an integer array using function
#include <stdio.h>

// Function to calculate the average of an integer array
float calculateAverage(int arr[], int size) {
    int sum = 0;
    
    // Calculate the sum of the elements in the array
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    
    // Return the average
    return (float)sum / size;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50}; // Example array
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    
    // Call the function to calculate the average
    float average = calculateAverage(arr, size);
    
    // Print the average
    printf("The average is: %.2f\n", average);
    
    return 0;
}
```