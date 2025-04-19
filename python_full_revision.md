
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


