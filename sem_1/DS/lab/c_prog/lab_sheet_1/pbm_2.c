//find the minimum element in an array 
#include <stdio.h>
int f_min(int arr[],int n)
{
    if(n <= 0)
    {
        printf("no element");
        return -1;
    }
    else
    {
        int min = arr[0];
      for(int i = 0;i<n;i++)
      {
        if(min > arr[i])
        {
            min = arr[i];
        }
      }  
      return min;
    }
}

int main()
{
    int arr[] = {1 , 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int min = f_min(arr,n);
    printf("%d\n",min);
    return 0;
}