[1. Two Sum](https://leetcode.com/problems/two-sum/)

Solved

Easy

Topics

Companies

Hint

Given an array of integers `nums` and an integer `target`, return _indices of the two numbers such that they add up to `target`_.

You may assume that each input would have **_exactly_ one solution**, and you may not use the _same_ element twice.

You can return the answer in any order.

**Example 1:**

**Input:** nums = [2,7,11,15], target = 9
**Output:** [0,1]
**Explanation:** Because nums[0] + nums[1] == 9, we return [0, 1].

**Example 2:**

**Input:** nums = [3,2,4], target = 6
**Output:** [1,2]

**Example 3:**

**Input:** nums = [3,3], target = 6
**Output:** [0,1]

---
## **<u>Solution</u>**

```python
class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        for i in range(len(nums)):
            for j in range(i + 1, len(nums)):  # Correct range for j
                if target == nums[i] + nums[j]:  # Fix the condition
                    return [i, j]  # Return as a list, not a tuple

```

---
## **<u>MY MISTAKES</u>**

- ==**Nested Loop Range**:==
    
    - `for j = i+1 in range(len(nums))` is invalid syntax. Use `for j in range(i + 1, len(nums))`.
- **Condition**:
    
    - Your condition checks `nums[i] + nums[i]` instead of `nums[i] + nums[j]`. This means you're adding the same element twice. Fixed it to `nums[i] + nums[j]`.
- **Return Statement**:
    
    - Typically, the result should be returned as a list, `[i, j]`, not a tuple `(i, j)` based on conventions in Python.