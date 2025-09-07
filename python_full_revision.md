
<mark style="background: #FF5582A6;">what does print(a[::5]) means</mark>


Great question! Let's break it down:

```python
print(a[::5])
```

This is a **slicing operation** on a sequence (like a list, string, or tuple). The general form is:

```
a[start:stop:step]
```

In your case:

- `start` is not specified → it defaults to the **beginning**.
    
- `stop` is not specified → it goes until the **end**.
    
- `step` is `5` → it takes **every 5th element**.
    

### So `a[::5]` means:

> Start from the beginning of `a`, go till the end, and take every 5th element.

### Example:

```python
a = "Hello, world!"
print(a[::5])
```

Output:

```
H,w
```

Explanation: Index: 0 → `'H'`, 5 → `','`, 10 → `'w'`, 15 → out of range (stop)

---

The `split()` method returns a list where the text between the specified separator becomes the list items.

```python
a = "Hello, World!"  
print(a.split(",")) # returns ['Hello', ' World!']
```

---
Sure! Here's the list converted into a clean, organized **table format**:

|**Method**|**Description**|
|---|---|
|`capitalize()`|Converts the first character to upper case|
|`casefold()`|Converts string into lower case|
|`center()`|Returns a centered string|
|`count()`|Returns the number of times a specified value occurs in a string|
|`encode()`|Returns an encoded version of the string|
|`endswith()`|Returns `True` if the string ends with the specified value|
|`expandtabs()`|Sets the tab size of the string|
|`find()`|Searches the string for a specified value and returns the position of where it was found|
|`format()`|Formats specified values in a string|
|`format_map()`|Formats specified values in a string|
|`index()`|Searches the string for a specified value and returns the position of where it was found|
|`isalnum()`|Returns `True` if all characters in the string are alphanumeric|
|`isalpha()`|Returns `True` if all characters in the string are in the alphabet|
|`isascii()`|Returns `True` if all characters in the string are ASCII characters|
|`isdecimal()`|Returns `True` if all characters in the string are decimals|
|`isdigit()`|Returns `True` if all characters in the string are digits|
|`isidentifier()`|Returns `True` if the string is a valid identifier|
|`islower()`|Returns `True` if all characters in the string are lower case|
|`isnumeric()`|Returns `True` if all characters in the string are numeric|
|`isprintable()`|Returns `True` if all characters in the string are printable|
|`isspace()`|Returns `True` if all characters in the string are whitespaces|
|`istitle()`|Returns `True` if the string follows the rules of a title|
|`isupper()`|Returns `True` if all characters in the string are upper case|
|`join()`|Joins the elements of an iterable to the end of the string|
|`ljust()`|Returns a left-justified version of the string|
|`lower()`|Converts a string into lower case|
|`lstrip()`|Returns a left-trimmed version of the string|
|`maketrans()`|Returns a translation table to be used in translations|
|`partition()`|Returns a tuple where the string is parted into three parts|
|`replace()`|Returns a string where a specified value is replaced with another specified value|
|`rfind()`|Searches the string for a specified value and returns the last position|
|`rindex()`|Searches the string for a specified value and returns the last position|
|`rjust()`|Returns a right-justified version of the string|
|`rpartition()`|Returns a tuple where the string is parted into three parts (from the right)|
|`rsplit()`|Splits the string at the specified separator, returns a list|
|`rstrip()`|Returns a right-trimmed version of the string|
|`split()`|Splits the string at the specified separator, returns a list|
|`splitlines()`|Splits the string at line breaks, returns a list|
|`startswith()`|Returns `True` if the string starts with the specified value|
|`strip()`|Returns a trimmed version of the string|
|`swapcase()`|Swaps cases: lower becomes upper and vice versa|
|`title()`|Converts the first character of each word to upper case|
|`translate()`|Returns a translated string using the translation table|
|`upper()`|Converts a string into upper case|
|`zfill()`|Fills the string with a specified number of 0s at the beginning|



## List

Here's your **List Methods** content converted into a neat table:

|**Method**|**Description**|
|---|---|
|`append()`|Adds an element at the end of the list|
|`clear()`|Removes all the elements from the list|
|`copy()`|Returns a copy of the list|
|`count()`|Returns the number of elements with the specified value|
|`extend()`|Adds the elements of a list (or any iterable) to the end of the current list|
|`index()`|Returns the index of the first element with the specified value|
|`insert()`|Adds an element at the specified position|
|`pop()`|Removes the element at the specified position|
|`remove()`|Removes the item with the specified value|
|`reverse()`|Reverses the order of the list|
|`sort()`|Sorts the list|

## Break vs Conti

Awesome! Here's a **cheat sheet** for Python **loop control statements** — `break`, `continue`, and `pass`, with descriptions and examples:

---

## 🌀 Python Loop Control Statements Cheat Sheet

|**Statement**|**Description**|
|---|---|
|`break`|Exits the loop entirely|
|`continue`|Skips the current iteration and goes to the next|
|`pass`|Does nothing (placeholder statement)|

---

### 🔴 `break` – Exit the loop

```python
for i in range(1, 6):
    if i == 3:
        break
    print(i)
```

**Output:**

```
1
2
```

---

### 🟡 `continue` – Skip current iteration

```python
for i in range(1, 6):
    if i == 3:
        continue
    print(i)
```

**Output:**

```
1
2
4
5
```

---

### ⚪ `pass` – Do nothing (used when a statement is required syntactically)

```python
for i in range(1, 4):
    if i == 2:
        pass  # Placeholder for future code
    print(i)
```

**Output:**

```
1
2
3
```

> 💡 `pass` is useful when you're planning to write the code later but want to keep the structure intact.

---
## Arbitrary Arguments, *args

If you do not know how many arguments that will be passed into your function, add a `*` before the parameter name in the function definition.

This way the function will receive a _tuple_ of arguments, and can access the items accordingly:

### Example

If the number of arguments is unknown, add a `*` before the parameter name:

```python
def my_function(*kids):  
  print("The youngest child is " + kids[2])  
  
my_function("Emil", "Tobias", "Linus")
```




## Arbitrary Keyword Arguments, **kwargs

If you do not know how many keyword arguments that will be passed into your function, add two asterisk: `**` before the parameter name in the function definition.

This way the function will receive a _dictionary_ of arguments, and can access the items accordingly:

### Example

If the number of keyword arguments is unknown, add a double `**` before the parameter name:

```python
def my_function(**kid):  
  print("His last name is " + kid["lname"])  
  
my_function(fname = "Tobias", lname = "Refsnes")
```

## Default Parameter Value

The following example shows how to use a default parameter value.

If we call the function without argument, it uses the default value:

### Example

```python
def my_function(country = "Norway"):
```

---
##  Lambda

```python
lambda _arguments_ : _expression_
```

1. 1 argument

```python
x = lambda a : a + 10  
print(x(5))
```

2. 2 argument

```python
x = lambda a, b : a * b  
print(x(5, 6))
```

```python
def myfunc(n):
  return lambda a : a * n

mydoubler = myfunc(2)
mytripler = myfunc(3)

print(mydoubler(11)) 
print(mytripler(11))

```


---
# python string

1. finding the length of the string

```python
a = "geeks"

#Initialize a variable 's' 
#to keep track of the string's length
s = 0

for i, a in enumerate(a):
  # Increment 's' by 1 for each character in the string
    s += 1
print(s)

```

2. Remove i’th character from string

```python
s = "Geeks for Geeks"

print(s[0:s.index("k")]+s[s.index("k")+1:])
```

3. Python program to print even length words in a string

```python
s = "This is a python language"
s = s.split(" ")
for i in s:

    print(i if len(i) % 2 == 0 else "",end = " ")
```


4. Uppercase Half String
here i used `// ` floor division to  find the half if its an odd no will generate float whic can cause an error

```python
s = "This is a python language"
print(s[:len(s)//2].upper()+s[len(s)//2:])
```

5. Accept the strings which contains all vowels
```python
s = "Geeksforgeeks"
v = 'aeiou'


# check if each vowel exists in the string
if all(i in s.lower() for i in v):
  
    print("True")
else:
    print("False")
```

6. Count the Number of matching characters in a pair of string
```python
s1 = "VISHAKSHI"
s2 = "VANSHIKA"

# find common characters
res= len(set(s1.lower()).intersection(set(s2.lower())))
print(res)
```


<mark style="background: #FF5582A6;">intersection</mark>  

7. code | Remove all duplicates from a given string
```python
s = "Python Programming"
vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'}
c = sum(1 for ch in s if ch in vowels)

print("Number of vowels:", c)
```

```python
s = "geeksforgeeks"

res = "".join([char for i, char in enumerate(s) if char not in s[:i]])
print(res)
```

8. 

---

# Python Text alig
# ljust


```python
txt = "banana"  
  
x = txt.ljust(20)  
  
print(x, "is my favorite fruit.")
```

syntax:

```python
_string_.ljust(_length_, _character_)
```



- [x] Problem 1  
- [ ] Problem 2  
- [ ] Problem 3  
- [ ] Problem 4  
- [ ] Problem 5  
- [ ] Problem 6  
- [ ] Problem 7  
- [ ] Problem 8  
- [ ] Problem 9  
- [ ] Problem 10  
- [ ] Problem 11  
- [ ] Problem 12  
- [ ] Problem 13  
- [ ] Problem 14  
- [ ] Problem 15  
- [ ] Problem 16  
- [ ] Problem 17  
- [ ] Problem 18  
- [ ] Problem 19  
- [ ] Problem 20


---

- [x] Pattern 1  
- [x] Pattern 2  
- [x] Pattern 3  
- [x] Pattern 4  
- [x] Pattern 5  
- [x] Pattern 6  
- [x] Pattern 7  
- [x] Pattern 8  
- [x] Pattern 9  
- [ ] Pattern 10  
- [ ] Pattern 11  
- [ ] Pattern 12  
- [ ] Pattern 13  
- [ ] Pattern 14  
- [ ] Pattern 15  
- [ ] Pattern 16  
- [ ] Pattern 17  
- [ ] Pattern 18  
- [ ] Pattern 19  
- [ ] Pattern 20  
- [ ] Pattern 21  
- [ ] Pattern 22  
- [ ] Pattern 23  
- [ ] Pattern 24  
- [ ] Pattern 25  
- [ ] Pattern 26  
- [ ] Pattern 27  
- [ ] Pattern 28  
- [ ] Pattern 29  
- [ ] Pattern 30  
- [ ] Pattern 31  
- [ ] Pattern 32  
- [ ] Pattern 33  
- [ ] Pattern 34  
- [ ] Pattern 35  
- [ ] Pattern 36  
- [ ] Pattern 37  
- [ ] Pattern 38  
- [ ] Pattern 39  
- [ ] Pattern 40  
- [ ] Pattern 41  
- [ ] Pattern 42  
- [ ] Pattern 43  
- [ ] Pattern 44  
- [ ] Pattern 45  
- [ ] Pattern 46  
- [ ] Pattern 47  
- [ ] Pattern 48  
- [ ] Pattern 49  
- [ ] Pattern 50  
- [ ] Pattern 51  
- [ ] Pattern 52  
- [ ] Pattern 53  
- [ ] Pattern 54  
- [ ] Pattern 55  
- [ ] Pattern 56  
- [ ] Pattern 57  
- [ ] Pattern 58  
- [ ] Pattern 59  
- [ ] Pattern 60  
- [ ] Pattern 61  
- [ ] Pattern 62  
- [ ] Pattern 63  
- [ ] Pattern 64  
- [ ] Pattern 65  
- [ ] Pattern 66  
- [ ] Pattern 67  
- [ ] Pattern 68  
- [ ] Pattern 69  
- [ ] Pattern 70  
- [ ] Pattern 71  
- [ ] Pattern 72  
- [ ] Pattern 73  
- [ ] Pattern 74  
- [ ] Pattern 75  
- [ ] Pattern 76  
- [ ] Pattern 77  
- [ ] Pattern 78  
- [ ] Pattern 79  
- [ ] Pattern 80  
- [ ] Pattern 81  
- [ ] Pattern 82  
- [ ] Pattern 83  
- [ ] Pattern 84  
- [ ] Pattern 85  
- [ ] Pattern 86  
- [ ] Pattern 87  
- [ ] Pattern 88  
- [ ] Pattern 89  
- [ ] Pattern 90  
- [ ] Pattern 91  
- [ ] Pattern 92  
- [ ] Pattern 93  
- [ ] Pattern 94  
- [ ] Pattern 95  
- [ ] Pattern 96  
- [ ] Pattern 97  
- [ ] Pattern 98  
- [ ] Pattern 99  
- [ ] Pattern 100
