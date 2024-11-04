// Find the maximum element in an array 

#include <stdio.h>

int f_max(int arr[],int n)
{
    if(n <= 0 )
    {
        return -1;
    }

    int max = arr[0];

    for(int i = 0;i < n;i ++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
        
    }
    return max;

}

void main()
{
    int arr[] = {1 , 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max = f_max(arr,n);
    if(max == -1)
    {
        printf("Array is empty");
    }
    else{
        printf("Maximum element is %d",max);
    }
}