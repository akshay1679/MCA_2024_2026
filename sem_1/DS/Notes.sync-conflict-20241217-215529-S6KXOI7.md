
## Data Structure

**def** -> Organised collection of data along with their permissible operations.
### Classification of data structure

1. **Arrangement**
	- linear -> Can traverse the whole set of data in one traversal
	- non linear -> cannot traverse the whole set of node in one traversal
1. **Type of data**
	- homegenous -> only single type of value  
	- hetrogenous -> different types of data stored together 
1. **Size**
	- Static -> cannot alter the size 
	- dynamic -> can alter the size 
![[Pasted Image 20240826190918_971.jpg]]
### Arrays
1. Elements are arranged in **linear fashion**
2. Homogeneous collection of values stored under a single name in continuous  memory.
3. Elements are accessed with respect to location ie: indexed 
4. ==Operations== :- 
	1. insertion
	2. deletion
	3. Search
	4. merge/split
	5. sort
6. In array we know the address of first value so we can access the next element since it is continuous
7. The first address of the array is called the ==base address== ,the consecutive address are accessed by incrementing from the base address.
8. The index starts from a[0]
#### Insertion into array
#### **Insert at the end :**

* Find the last last occupied index and add 1 to the index and insert new value as long as the the new index is < the size of the array
* If the value is to be added to a pre occupied index shift all the values in the indexes from the particular index to the next index . The shifting should be started from the last occupied index 

#### Insertion into a particular position in array


|  a  |  d  |  b  |  e  |     |     |
| :-: | :-: | :-: | :-: | :-: | :-: |
|  0  |  1  |  2  |  3  |  4  |  5  |

==>

|  a  |  c  |  d  |  b  |  e  |     |
| :-: | :-: | :-: | :-: | :-: | :-: |
|  0  |  1  |  2  |  3  |  4  |  5  |

step 1: start
step 2:traverse the array from the position to check if the its full if full overflow exit
step 3: check if the given index is free go and replace
step 4: else find the closest index that  

**Algorithm Insertion at a particular position**

 `pos(arr,pos,val,size)`
1. if `arr[pos]`=-1
2. then `arr[pos]` = value 
3. Else for (i=(size-1 ) to pos)
4.         Arr`[i] = arr[i-1]`
5. Arr`[pos]= value `
#### Deletion at specific position:-

```c
If (pos > 0 && pos < size)
{
printf ("invalid position")
}
else {
for (i=pos-1;i<size-i;i++)
{
a[i] = a[i+1]
}
Size -- ;
```


#### Deletion at specific position:-
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
![[photo_6318590066234082058_x.jpg]]

![[photo_6318590066234082057_x.jpg]]

---
## Searching
- basic operation in search is comparison to perform continuous comparison we need traversal
---
### Linear search 

-> [[linear search]]

### Binary search   

->[[Binary search]]

---

## Sorting 

Bubble, insertion ,selection, shell

---

### 1. Bubble sort 

--> [[Bubble sort]]

### 2. Insertion sort

--> [[Insertion sort]]

### 3. Selection sort

--> [[Selection sort]]

### 4. Shell sort

--> [[Shell sort]]
### 5. Quick sort

--> [[Quick sort]]



