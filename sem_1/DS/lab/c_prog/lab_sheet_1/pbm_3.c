// display all the values in odd positions 
#include <stdio.h>

void odd(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (i % 2 != 0) { 
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    odd(arr, n); 
    return 0; 
}