

You are given two **non-empty** linked lists representing two non-negative integers. The digits are stored in **reverse order**, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

**Example 1:**
![[Pasted image 20241228141255.jpg]]


**Input:** l1 = [2,4,3], l2 = [5,6,4]
**Output:** [7,0,8]
**Explanation:** 342 + 465 = 807.

**Example 2:**

**Input:** l1 = [0], l2 = [0]
**Output:** [0]

**Example 3:**

**Input:** l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
**Output:** [8,9,9,9,0,0,0,1]

---
## **<u>Solution</u>**

```python
# Definition for singly-linked list.

# class ListNode(object):

# def __init__(self, val=0, next=None):

# self.val = val

# self.next = next

  

class Solution(object):

def addTwoNumbers(self, l1, l2):

"""

:type l1: Optional[ListNode]

:type l2: Optional[ListNode]

:rtype: Optional[ListNode]

"""

dummy = ListNode(0) # Dummy node to start the result linked list

current = dummy # Pointer to build the new list

carry = 0 # To keep track of the carry during addition

  

# Traverse through both linked lists until both are exhausted

while l1 or l2 or carry:

val1 = l1.val if l1 else 0 # Get the value from l1 or 0 if None

val2 = l2.val if l2 else 0 # Get the value from l2 or 0 if None

# Calculate the sum and update carry

total = val1 + val2 + carry

carry = total // 10 # Carry for the next position

current.next = ListNode(total % 10) # Create a node for the current digit

# Move the current pointer forward

current = current.next

# Move to the next nodes in l1 and l2 if they exist

if l1: l1 = l1.next

if l2: l2 = l2.next

return dummy.next # Return the head of the result linked list
```



---
## **<u>Discription</u>

Sure! Let's go through the code line by line for better understanding.

### Code:

```python
class Solution(object):
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: Optional[ListNode]
        :type l2: Optional[ListNode]
        :rtype: Optional[ListNode]
        """
```

- **Line 1-4**:  
    We define a class `Solution`, and inside it, a method `addTwoNumbers`. This method takes two arguments `l1` and `l2`, which are the heads of two linked lists. The type hint indicates that both `l1` and `l2` are optional `ListNode` objects, and the return type is also a `ListNode` object (the head of the result list).

```python
        dummy = ListNode(0)  # Dummy node to start the result linked list
        current = dummy  # Pointer to build the new list
        carry = 0  # To keep track of the carry during addition
```

- **Line 5-7**:  
    Here we initialize:
    - `dummy`: A dummy node with value `0` that acts as a placeholder for the start of the result list. It simplifies edge case handling, particularly when the list is initially empty.
    - `current`: A pointer to the last node of the result list. Initially, it points to the `dummy` node.
    - `carry`: A variable initialized to `0`, which stores the carry (if any) after adding two digits. It will be carried to the next iteration.

```python
        # Traverse through both linked lists until both are exhausted
        while l1 or l2 or carry:
```

- **Line 8**:  
    This `while` loop ensures that we continue processing as long as there are digits left in either `l1` or `l2` or if there is any leftover carry from the previous addition.

```python
            val1 = l1.val if l1 else 0  # Get the value from l1 or 0 if None
            val2 = l2.val if l2 else 0  # Get the value from l2 or 0 if None
```

- **Line 9-10**:
    - We get the value of the current node in `l1` or `l2`. If the current node is `None` (i.e., the list is exhausted), we treat it as `0`. This is because in a case like `l1 = [2]` and `l2 = [5, 6]`, `l1` has no more nodes after the first one, so we treat it as `0` for subsequent additions.
    - `val1` stores the current digit from `l1` (or `0` if `l1` is `None`), and `val2` stores the current digit from `l2` (or `0` if `l2` is `None`).

```python
            total = val1 + val2 + carry  # Calculate the sum and update carry
            carry = total // 10  # Carry for the next position
```

- **Line 11-12**:
    - `total`: The sum of the current digits (`val1`, `val2`) and the previous carry. For example, if `val1 = 7`, `val2 = 3`, and `carry = 1`, then `total = 7 + 3 + 1 = 11`.
    - `carry`: We calculate the carry by performing integer division (`//`) by 10. This ensures that if `total` is greater than or equal to 10, we pass the overflow as a carry to the next digit. For example, if `total = 11`, then `carry = 11 // 10 = 1`.

```python
            current.next = ListNode(total % 10)  # Create a node for the current digit
            current = current.next  # Move the current pointer forward
```

- **Line 13-14**:
    - A new node is created with the value `total % 10`. This gives the least significant digit of `total` (i.e., the digit in the ones place). For example, if `total = 11`, `total % 10 = 1`.
    - We move the `current` pointer to this new node, so it can be used for the next digit in the result list.

```python
            # Move to the next nodes in l1 and l2 if they exist
            if l1: l1 = l1.next
            if l2: l2 = l2.next
```

- **Line 15-16**:
    - We move the pointers `l1` and `l2` to the next node in their respective lists if they exist. If a list has already been exhausted (i.e., the pointer is `None`), it doesn't affect the loop because of the condition in line 8 (`while l1 or l2 or carry`).

```python
        return dummy.next  # Return the head of the result linked list
```

- **Line 17**:  
    After the loop ends, the result linked list has been built starting from `dummy.next`. The `dummy` node was used just to simplify list construction, and we don't need to include it in the final result. Therefore, we return `dummy.next`, which points to the head of the result list.

### Final Result:

- The function returns the linked list starting at `dummy.next`, which contains the sum of the two input lists, represented in reverse order.

### Example:

Given the input lists:

```
l1: 2 -> 4 -> 3 (represents 342)
l2: 5 -> 6 -> 4 (represents 465)
```

The function will return the linked list:

```
7 -> 0 -> 8 (represents 807)
```

### Summary:

- The function works by iterating through the linked lists and adding corresponding digits, managing carry, and building a new linked list to store the result.
- The loop continues until all digits are processed, and any leftover carry is added. The result is returned as a linked list in reverse order.