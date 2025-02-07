
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


```python
while True:
    n = int(input("What's n? "))
    if n < 0:
        continue
    else:
        break
```

```python
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

```python
students = ["Hermoine", "Harry", "Ron"]

print(students[0])
print(students[1])
print(students[2])
```

```python
for student in students:
    print(student)
```

```python
for i in range(len(students)):
    print(i + 1, students[i])
```
## Dictionaries

```python
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

```python
students = {
    "Hermoine": "Gryffindor",
	    "Harry": "Gryffindor",
    "Ron": "Gryffindor",
    "Draco": "Slytherin",
}
for student in students:
    print(student)
```

```python
thisdict = {
"brand": "Ford",
"model": "Mustang",
"year": 1964,
"year": 2020
}

print(thisdict)
print(len(thisdict))
print(type(thisdict))
m = thisdict["year"]
print(m)
c = thisdict.get("model")
print(c)
print(thisdict.keys())
print(thisdict.values())
print(thisdict.items())
thisdict["year"] = 2003
print(thisdict["year"])
thisdict.update({"color":"red"})
print(thisdict.items())
for x,y in thisdict.items():
print(x)
print(y)
```

```output
{'brand': 'Ford', 'model': 'Mustang', 'year': 2020}
3
<class 'dict'>
2020
Mustang
dict_keys(['brand', 'model', 'year'])
dict_values(['Ford', 'Mustang', 2020])
dict_items([('brand', 'Ford'), ('model', 'Mustang'), ('year', 2020)])
2003
dict_items([('brand', 'Ford'), ('model', 'Mustang'), ('year', 2003), ('color', 'red')])
brand
Ford
model
Mustang
year
2003
color
red
```

