### Problem 1

Write a program to reverse digits of a number N.

**Input Format**

The first line of input contains an integer T, denoting the number of test cases. T testcases follow. Each test case contains an integer N.

**Constraints**

1 ≤ T ≤ 104 1 ≤ N ≤ 1015

**Output Format**

For each test case, print the reverse digits of number N .

**Sample Input 0**

2
200
122

**Sample Output 0**

2
221

#### Explanation 1

```
def reverse_digits(N):
    return int(str(N)[::-1])

T = int(input())

for _ in range(T):
    N = int(input())
    print(reverse_digits(N))

```

- **Input:**
    - First, the number of test cases TTT is read.
    - For each test case, an integer NNN is input.
- **Reversing the digits:**
    - The function `reverse_digits` converts the number NNN to a string, reverses the string using slicing (`[::-1]`), and then converts it back to an integer.
- **Output:**
    - For each test case, the reversed integer is printed.


##### **Explain return int(str(N)`[::-1])` in detail**

break down the line `return int(str(N)[::-1])` step by step:

###### 1. `str(N)`

- This converts the integer NNN into a string.
    
- **Reason**: We cannot reverse an integer directly, but we can reverse a string. By converting NNN to a string, we make it easy to manipulate its digits.
    
    **Example:**
    
    - If N=200N = 200N=200, then `str(200)` will result in the string `"200"`.

###### 2. `[::-1]`

- This is Python's slicing syntax used to reverse a string.
- **Explanation**:
    
    - `start:stop:step` is the general format for slicing in Python. By setting `step` to `-1`, we tell Python to read the string backward, effectively reversing it.
    
    **Example:**
    - If N=200N = 200N=200, the string version is `"200"`. Applying `[::-1]` reverses it to `"002"`.
    - If N=122N = 122N=122, `"122"` becomes `"221"`.

###### 3. `int(...)`

- Once we have the reversed string, we convert it back to an integer using `int()`.
    
- **Reason**: After reversing the string, it may have leading zeros (like `"002"`), but converting it back to an integer removes these leading zeros.
    
    **Example:**
    
    - For N=200N = 200N=200, the reversed string is `"002"`, and `int("002")` becomes `2`.
    - For N=122N = 122N=122, the reversed string is `"221"`, and `int("221")` becomes `221`.

###### Putting It All Together:

- `str(N)` converts NNN into a string.
- `[::-1]` reverses the string.
- `int(...)` converts the reversed string back into an integer, which is returned as the final result.

###### Example 1:

For N=200N = 200N=200:

1. `str(200)` → `"200"`
2. `"200"[::-1]` → `"002"`
3. `int("002")` → `2`

**Final result**: `2`

###### Example 2:

For N=122N = 122N=122:

1. `str(122)` → `"122"`
2. `"122"[::-1]` → `"221"`
3. `int("221")` → `221`

**Final result**: `221`

This approach efficiently reverses the digits while taking care of removing any leading zeros after the reversal.

#### Explanation 2

There are several alternative ways to reverse the digits of a number. Here are some other approaches without converting the number to a string:

### 1. **Mathematical Approach (Without String Conversion)**
You can reverse the digits of a number using arithmetic operations like modulus (`%`) and integer division (`//`).

#### Algorithm:
- Start with a variable `reverse_num = 0`.
- Use a loop to extract the last digit of \( N \) using `N % 10` and add it to `reverse_num`.
- Multiply `reverse_num` by 10 to shift digits and remove the last digit from \( N \) using `N // 10`.
- Repeat until \( N = 0 \).

#### Code:
```python
# Function to reverse digits using mathematical operations
def reverse_digits(N):
    reverse_num = 0
    while N > 0:
        last_digit = N % 10         # Extract the last digit
        reverse_num = reverse_num * 10 + last_digit  # Add to the reverse number
        N = N // 10                 # Remove the last digit from N
    return reverse_num

# Input number of test cases
T = int(input())

# Iterate over each test case
for _ in range(T):
    N = int(input())
    print(reverse_digits(N))
```

#### Example:

For \( N = 200 \):
1. \( N \% 10 = 0 \), `reverse_num = 0`
2. \( N = N // 10 = 20 \)
3. \( 20 \% 10 = 0 \), `reverse_num = 0`
4. \( N = N // 10 = 2 \)
5. \( 2 \% 10 = 2 \), `reverse_num = 2`
6. \( N = N // 10 = 0 \) → Stop

**Final result**: `2`

For \( N = 122 \):
1. \( 122 \% 10 = 2 \), `reverse_num = 2`
2. \( 122 // 10 = 12 \)
3. \( 12 \% 10 = 2 \), `reverse_num = 22`
4. \( 12 // 10 = 1 \)
5. \( 1 \% 10 = 1 \), `reverse_num = 221`
6. \( 1 // 10 = 0 \) → Stop

**Final result**: `221`

---

### 2. **Recursive Approach**
This approach reverses the digits of \( N \) using recursion.

#### Algorithm:
- Create a recursive function that keeps reducing the number and builds the reversed number.
- Extract the last digit using `N % 10`, multiply the result by powers of 10 (tracked using recursion), and sum them up.

#### Code:
```python
def reverse_digits_recursive(N, reversed_num=0):
    if N == 0:
        return reversed_num
    else:
        last_digit = N % 10
        reversed_num = reversed_num * 10 + last_digit
        return reverse_digits_recursive(N // 10, reversed_num)

# Input number of test cases
T = int(input())

# Iterate over each test case
for _ in range(T):
    N = int(input())
    print(reverse_digits_recursive(N))
```

#### Explanation:
- The function `reverse_digits_recursive(N, reversed_num)` adds the last digit of \( N \) to `reversed_num`, shifts the digits, and recurses until \( N = 0 \).
  
**Example:** For \( N = 200 \), the function will return `2`, and for \( N = 122 \), it will return `221`.

---

### 3. **Using a Stack**
You can also use a stack to reverse the digits of a number. Push each digit onto the stack and then pop them off in reverse order.

#### Code:
```python
def reverse_digits_using_stack(N):
    stack = []
    
    # Push digits to stack
    while N > 0:
        stack.append(N % 10)
        N = N // 10
    
    # Pop digits from stack and rebuild the reversed number
    reverse_num = 0
    multiplier = 1
    while stack:
        reverse_num += stack.pop() * multiplier
        multiplier *= 10
    
    return reverse_num

# Input number of test cases
T = int(input())

# Iterate over each test case
for _ in range(T):
    N = int(input())
    print(reverse_digits_using_stack(N))
```

#### Explanation:
1. Push each digit of \( N \) onto a stack.
2. Pop each digit off the stack, multiplying by increasing powers of 10 to rebuild the reversed number.

---

### 4. **Using a Queue**
You could use a queue (first-in, first-out structure) by placing each digit into the queue and then retrieving them in reverse order.

#### Code:
```python
from collections import deque

def reverse_digits_using_queue(N):
    queue = deque()
    
    # Enqueue digits
    while N > 0:
        queue.appendleft(N % 10)  # Add to the front of the queue
        N = N // 10
    
    reverse_num = 0
    multiplier = 1
    while queue:
        reverse_num += queue.pop() * multiplier
        multiplier *= 10
    
    return reverse_num

# Input number of test cases
T = int(input())

# Iterate over each test case
for _ in range(T):
    N = int(input())
    print(reverse_digits_using_queue(N))
```

#### Explanation:
- The digits are placed into a deque, with the digits ordered so they can be popped in reverse.
- This is not necessarily the most efficient method but demonstrates a different approach using a queue structure.

---

### Conclusion:
- **Mathematical Approach** (without string conversion) is the most efficient, particularly for competitive programming.
- The **String Slicing** approach is quick and concise, but converting between data types is less efficient for very large inputs.
- **Recursive Approach** and **Stack/Queue Approaches** are less efficient but can be useful for learning or specific use cases where such data structures are needed.


### Problem 2