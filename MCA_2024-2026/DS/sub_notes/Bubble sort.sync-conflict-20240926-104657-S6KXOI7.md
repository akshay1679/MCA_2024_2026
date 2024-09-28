### Bubble sort 
- Doesn't have any real time application 
- Ascending order 
- Initially finds the largest number and place it in the last position 
- main operations comparison and swapping 
# apply bubble sort
#### Algorithm for bubble sort

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

#### Modified bubble sort

to prevent the loop to run multiple time even if the array is sorted we use a flag method 
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
#### Analysis of the algorithm(for optimized bubble sort)

##### **Best case scenario** -> O(n)
------
**scenario** ==> Already elements are arranged in the ascending order
- If there are n elements no of comparison is (n-1) if n is very large ≈ n
- The complexity is linear O(n)
- no of changes in input and comparison are similar 
##### **worst case scenario** -> O(n)
------
 **scenario** ==> elements are arranged in descending order 
- the number of pass is n-1 and number of comparisons is :
- (n-1)(n-2)(n-3).........
- = n(n-1)/2 
# bubble sort cont and image

