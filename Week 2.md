
## Loops

``` python
print("meow")
print("meow")
print("meow")
```


## While Loops

```python
i = 3
while i != 0:
    print("meow")
    i -= 1
```


## For Loops

```python
for i in [0, 1, 2]:
    print("meow")
```

```python
for _ in range(3):
    print("meow")
```

```python
print("meow" * 3)
```

```python
print("meow\n" * 3, end="")
```

## Improving with User Input


```
while True:
    n = int(input("What's n? "))
    if n < 0:
        continue
    else:
        break
```

```
def main():
    meow(get_number())


def get_number():
    while True:
        n = int(input("What's n? "))
        if n > 0:
            return n


def meow(n):
    for _ in range(n):
        print("meow")


main()
```

```
students = ["Hermoine", "Harry", "Ron"]

print(students[0])
print(students[1])
print(students[2])
```

```
for student in students:
    print(student)
```

```
for i in range(len(students)):
    print(i + 1, students[i])
```
## Dictionaries

```
students = {
    "Hermoine": "Gryffindor",
    "Harry": "Gryffindor",
    "Ron": "Gryffindor",
    "Draco": "Slytherin",
}
print(students["Hermoine"])
print(students["Harry"])
print(students["Ron"])
print(students["Draco"])
```

```
students = {
    "Hermoine": "Gryffindor",
    "Harry": "Gryffindor",
    "Ron": "Gryffindor",
    "Draco": "Slytherin",
}
for student in students:
    print(student)
```
