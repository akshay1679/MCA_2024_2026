
In Python, the `map()` function is a **built-in functional programming tool** used to **apply a function to each item in an iterable** (like a list, tuple, etc.) and return a new iterator with the results.

---

### 🔹 Syntax:

```python
map(function, iterable)
```

- `function`: A function to apply to each element.
    
- `iterable`: The collection (like list, tuple, etc.) to map over.
    

---

### 🔹 Basic Example:

```python
nums = [1, 2, 3, 4]
squared = list(map(lambda x: x**2, nums))
print(squared)  # Output: [1, 4, 9, 16]
```

---

### 🔹 Common Uses in LeetCode

On **LeetCode**, you’ll often use `map()` when:

#### ✅ 1. **Converting Input Strings to Integers**

For problems where input is given as space-separated strings (common in interactive or custom input):

```python
arr = list(map(int, input().split()))
```

#### ✅ 2. **String to List of Integers**

Given a string of digits or a comma-separated string:

```python
s = "1,2,3"
nums = list(map(int, s.split(',')))  # [1, 2, 3]
```

#### ✅ 3. **Processing 2D Input**

```python
matrix = [list(map(int, input().split())) for _ in range(n)]
```

#### ✅ 4. **In One-liners**

`map()` is used in one-liner solutions to make them concise:

```python
return list(map(int, reversed(str(x))))
```

---

### 🔹 Lambda with `map()` in LeetCode

Used frequently for in-place transformation:

```python
words = ["leet", "code"]
uppercased = list(map(lambda x: x.upper(), words))  # ['LEET', 'CODE']
```

---

### 🔹 When Not to Use `map()`

Although `map()` is useful, **list comprehensions** are often more readable:

```python
# Preferred by many over map+lambda
[x**2 for x in nums]
```

---

### 🔹 Summary

|Use Case|Example|
|---|---|
|Convert str to int list|`list(map(int, input().split()))`|
|Apply function to list|`list(map(abs, nums))`|
|Use with lambda|`list(map(lambda x: x+1, nums))`|
|2D list input|`[list(map(int, input().split())) for _ in range(n)]`|

Let me know if you'd like to see `map()` used in a specific LeetCode problem!