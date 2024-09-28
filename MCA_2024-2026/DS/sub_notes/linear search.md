# Linear search  
#Linear_search

```
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // An array of integers
    int numbers[] = {20, 500, 10, 5, 100, 1, 50};

    // Search for number
    int n = get_int("Number: ");
    for (int i = 0; i < 7; i++)
    {
        if (numbers[i] == n)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}
```


---
## Algorithm

==linearsearch(arr,key,size)==

```
linearsearch(arr,key,size)
{
for(i = 0 to size-1 )
if (key = arr[i])
	return i
return -1
}
```


# linear search images
#complete

![[Pasted image 20240927183746.png]]

- ==linear search has constant complexity with respect to size==
- used to search on unsorted array
---
## Best case -> O(1)

**scenario** ==> element to be searched is in the first position 
- Here the number of comparisons is independent of input size
- ie number of comparisons is **constant** 
- ==Complexity = constant== 

----
## Worst case -> O(n)

**scenario** ==>
    1. element to be searched is in the last position 
    2. Element to be searched is not in array
- Number  of comparison is the input size
- If the input size is increased the number of comparison is also increased 
- Therefore they are proportional and comparison is linear.
- ==Complexity  = linear==.
- no of comparison = no of element

---

Q. Write the search algorithm to search a particular name in a given rank list?

Ans: Using linear search  
and also write the algorithm

If the name is found return the rank of the name else the value -1 is returned indicating an unsuccessful search.

Q. apply linearsarch in the given array and identify the no of comparisons performed for each given value ?

![[Pasted image 20240927185750.png]]


