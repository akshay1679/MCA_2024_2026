==**Devide and conquer**==

- Shorted array
- Recursive structure 
- Doesn't compare all the elements 
```
Int Binary_search (arr,key,low,high)
{
If low <= heigh
{
Mid = low + heigh \ 2
If key = arr[mid]
Return mid
elseif (key < arr[mid])
Binary_search (arr,key,low,mid - 1)
else
Binary_search (arr,key,low,mid + 1)
}
return -1;
}
```

Maximum number of steps binary search has to do is log2n
Worst case scenario is log2n

#### **Best case scenario** -> O(1)
- The element supposed to be searched is in the middle position. 
- Number of comparison = 1
- complexity is constant. 
#### Worst case scenario -> O(log n) or O log n
 1. Successful search -> O(log n)
      - first position or last position 
      - number of comparison = log n
      - complexity = log n ->logethomic complexity
2. Unsuccessful search -> O log n
     -  not present in the array 
     - number of comparison = log 2(n)
     - ==complexity log 2 n -> logarithmic complexity==

Q. Search for a rank in rank list -> binary search because the rank list is sorted ? 

# binary search graph