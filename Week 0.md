# Python round() Function

```run-python
x = round(5.76543, 2)  
print(x)
```


The `round()` function returns a floating point number that is a rounded version of the specified number, with the specified number of decimals.

The default number of decimals is 0, meaning that the function will return the nearest integer.


round_(number, digits_)

|Parameter|Description|
|---|---|
|_number_|Required. The number to be rounded|
|_digits_|Optional. The number of decimals to use when rounding the number. Default is 0|


```
# Get the user's input
x = float(input("What's x? "))
y = float(input("What's y? "))

# Create a rounded result
z = round(x + y)

# Print the result
print(z)
```


```
# Print the formatted result
print(f"{z:,}")
```

```
# Calculate the result and round
z = round(x / y, 2)
```

```
# Print the result
print(f"{z:.2f}")
```

## def



```
def hello():
    print("hello")


name = input("What's your name? ")
hello()
print(name)
```



```python
m = input("what is your name ?").strip().title()

print("hello my name is ",end = "")

print(m)

  

print(f"my name is {m}")
```


```python
x = int(input("What's x? "))

y = int(input("What's y? "))

z = x + y

print(z)
```



using default parameter
```python
def hello(to = "appu"):
print(f"hello my name is {to}")

name = input("enter the name: ")
hello(name)
hello()
```

```output
enter the name: akshay
hello my name is akshay
hello my name is appu
```


usage of main function in python


```python
def main():

name = input("Enter your name: ")

hello(name)

hello()

  

def hello(to = "shibu"):

print(f"Hello,my name is {to}!")

if __name__ == "__main__":

main()
```


```output
Enter your name: akshay
Hello,my name is akshay!
Hello,my name is shibu!
```

```python
def main():

x = int(input("enterthe number"))

print(f"the square of x is {square(x)}")

def square(x):

return x*x

  

if __name__ == "__main__":

main()
```