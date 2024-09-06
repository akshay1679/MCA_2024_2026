## Data Structure 
 1. Mainly classified on the ==basis of arrangements==
    * Linear and non linear 
 2. ==On types of data==
    * Homogeneous and heterogeneous 
 3. ==On basis of size==
    * Static and dynamic 

### Arrays
1. Elements are arranged in linear fassion 
2. Elements are accessed with respect to location ie indexed 
3. ==operations== :- 
	1. insertion
	2. deletion
	3. Search
	4. merge/split
	5. sort
4. in array we know the address of first value so we can access the next element since it is continuous
5. The index starts fron a[0]
#### Insertion into array
1. Insertion at a partiular position
2. if arr[pos]=-1
3. then arr[pos] = val

### Time complexity

  ![[cs50Week3Slide042.png]]

It’s the shape of the curve that shows the efficiency of an algorithm. Some common running times we may see are:

- O(n2)
- O(nlog⁡n)
- O(n)
- O(log⁡n)
- O(1)

- Of the running times above, O(n2) is considered the worst running time, O(1) is the fastest.
- ==Linear search ==was of order O(n) because it could take _n_ steps in the worst case to run.
- ==Binary search== was of order O(log⁡n) because it would take fewer and fewer steps to run even in the worst case.
- Programmers are interested in both the worst case, or **_upper bound_**, and the best case, or **_lower bound_**.
- The Ω symbol is used to denote the ==best case== of an algorithm, such as Ω(log⁡n).
- The Θ symbol is used to denote where the upper bound and lower bound are the same, where the best case and the worst case running times are the same.
- As you continue to develop your knowledge in computer science, you will explore these topics in more detail in future courses.

---

1. upper bound --> O
2. lower bound --> Ω
3. if upper bound == lower bound --> Θ


---

### Linear search

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





