//display all the values in even positions 
#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80};
    int size = sizeof(arr) / sizeof(arr[0]); 

    printf("Values in even positions:\n");
    for (int i = 0; i < size; i++) {
        if (i % 2 == 0) { 
            printf("%d ", arr[i]); 
        }
    }
    
    printf("\n");
    return 0;
}