
# Java Syntax

```java
 class Main {
  public static void main(String[] args) {
    System.out.println("Hello World");
  }
}
```

Every line of code that runs in Java must be inside a `class`. 
conventionally  class name should always start with an uppercase first letter. 
Java is case-sensitive

## The main Method

 ```java
public static void main(String[] args)
```

Any code inside the `main()` method will be executed.

Java program has a `class` name which must match the filename, and that every program must contain the `main()` method.

In Java, the `main` method is the entry point of any standalone Java application. 
It's where the program starts execution. 

### Explanation:

- **`public`**: The method is accessible from anywhere, which is necessary for the Java runtime to call it.
- **`static`**: The method belongs to the class, not to an instance of the class. This allows the Java runtime to call the method without creating an instance of the class.
- **`void`**: The method does not return any value.
- **`main`**: This is the name of the method. It is a predefined name that Java looks for when running the program.
- **`String[] args`**: This is an array of `String` objects that stores command-line arguments passed to the program.

```java
public static void main(String[] args) {
  System.out.println("Hello World");
}
```

## The Print() Method

There is also a `print()` method, which is similar to `println()`.

The only difference is that it does not insert a new line at the end of the output

```java
System.out.println(3 + 3);
```

# Java Comments

## Single-line Comments

Single-line comments start with two forward slashes (`//`).

```java
System.out.println("Hello World"); // This is a comment
```


## Java Multi-line Comments

Multi-line comments start with `/*` and ends with `*/`.
Any text between `/*` and `*/` will be ignored by Java.

```java
/* The code below will print the words Hello World
to the screen, and it is amazing */
System.out.println("Hello World");
```

# Java Variables

In Java, there are different **types** of variables, for example:

- `String` - stores text, such as "Hello". String values are surrounded by double quotes
- `int` - stores integers (==whole numbers==), without decimals, such as 123 or -123
- `float` - stores floating point numbers, with decimals, such as 19.99 or -19.99
- `char` - stores single characters, such as 'a' or 'B'. Char values are surrounded by ==single quotes==
- `boolean` - stores values with two states: true or false


## Declaring (Creating) Variables

To create a variable, you must specify the type and assign it a value:

```java
type variableName = value;
```


```java
String name = "John";
System.out.println(name);
```

## Final Variables  (no overwrite)

If you don't want others (or yourself) to overwrite existing values, use the `final` keyword (this will declare the variable as "final" or "constant", which means unchangeable and read-only):

```java
final int myNum = 15;
myNum = 20;  // will generate an error: cannot assign a value to a final variable
```


```java
int myNum = 5;
float myFloatNum = 5.99f;
char myLetter = 'D';
boolean myBool = true;
String myText = "Hello";
```


# Java Print Variables

To combine both text and a variable, use the `+` character:

```java
String name = "John";
System.out.println("Hello " + name);
```

You can also use the `+` character to add a variable to another variable:

```java
String firstName = "John ";
String lastName = "Doe";
String fullName = firstName + lastName;
System.out.println(fullName);
```

The general rules for naming variables are:

- Names can contain letters, digits, underscores, and dollar signs
- Names must begin with a letter
- Names should start with a lowercase letter, and cannot contain whitespace
- Names can also begin with $ and _
- Names are case-sensitive ("myVar" and "myvar" are different variables)
- Reserved words (like Java keywords, such as `int` or `boolean`) cannot be used as names


# Java Data Types



```java
int myNum = 5;               // Integer (whole number)
float myFloatNum = 5.99f;    // Floating point number
char myLetter = 'D';         // Character
boolean myBool = true;       // Boolean
String myText = "Hello";     // String
```

Data types are divided into two groups:

- Primitive data types - includes `byte`, `short`, `int`, `long`, `float`, `double`, `boolean` and `char`
- Non-primitive data types - such as String, Arrays and Classes.

## Primitive Data Types

A primitive data type specifies the size and type of variable values, and it has no additional methods.

![[Pasted image 20241001123127.png]]


| **Data Type** | **Default Value** | **Default size** |
| ------------- | ----------------- | ---------------- |
| boolean       | false             | 1 bit            |
| char          | '\u0000'          | 2 byte           |
| byte          | 0                 | 1 byte           |
| short         | 0                 | 2 byte           |
| int           | 0                 | 4 byte           |
| long          | 0L                | 8 byte           |
| float         | 0.0f              | 4 byte           |
| double        | 0.0d              | 8 byte           |

Primitive number types are divided into two groups:

**Integer types** stores whole numbers, positive or negative (such as 123 or -456), without decimals. Valid types are `byte`, `short`, `int` and `long`. Which type you should use, depends on the numeric value.

**Floating point types** represents numbers with a fractional part, containing one or more decimals. There are two types: `float` and `double`.


## Byte

```java
byte myNum = 100;
System.out.println(myNum);
```

## Floating Point Types

The `float` and `double` data types can store fractional numbers. ==Note that you should end the value with an "f" for floats and "d" for doubles:==


```java
float myNum = 5.75f;
System.out.println(myNum);
```

```java
double myNum = 19.99d;
System.out.println(myNum);
```

### Scientific Numbers

A floating point number can also be a scientific number with an "e" to indicate the power of 10:

### Example

```java
float f1 = 35e3f;
double d1 = 12E4d;
System.out.println(f1);
System.out.println(d1);
```

## Boolean Types

```java
boolean isJavaFun = true;
```

## Characters

Alternatively, if you are familiar with ASCII values, you can use those to display certain characters:

```java
char myGrade = 'B';
System.out.println(myGrade);
```

```java
char myVar1 = 65, myVar2 = 66, myVar3 = 67;
System.out.println(myVar1);
System.out.println(myVar2);
System.out.println(myVar3);
```

op
```
A  
B  
C
```

# Java Non-Primitive Data Types


Non-primitive data types are called **reference types** because they refer to objects.

## difference between **primitive** and **non-primitive**

The main difference between **primitive** and **non-primitive** data types are:

- Primitive types are predefined (already defined) in Java. Non-primitive types are created by the programmer and is not defined by Java (except for `String`).
- Non-primitive types can be used to call methods to perform certain operations, while primitive types cannot.
- A primitive type always has a value, while non-primitive types can be `null`.
- A primitive type starts with a lowercase letter, while non-primitive types starts with an uppercase letter.
# Java Type Casting

## Widening Casting

```java
public class Main {
  public static void main(String[] args) {
    int myInt = 9;
    double myDouble = myInt; // Automatic casting: int to double

    System.out.println(myInt);      // Outputs 9
    System.out.println(myDouble);   // Outputs 9.0
  }
}
```

## Narrowing Casting

```java
public class Main {
  public static void main(String[] args) {
    double myDouble = 9.78d;
    int myInt = (int) myDouble; // Manual casting: double to int

    System.out.println(myDouble);   // Outputs 9.78
    System.out.println(myInt);      // Outputs 9
  }
}
```



## Java Strings

```java
String greeting = "Hello";
```

## String Length

```java
String txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
System.out.println("The length of the txt string is: " + txt.length());
```

# Concatenation

```java
String x = "10";
int y = 20;
String z = x + y;  // z will be 1020 (a String)
```

| Escape character | Result | Description  |
| ---------------- | ------ | ------------ |
| \'               | '      | Single quote |
| \"               | "      | Double quote |
| \\\              | \      | Backslash    |

```java
String txt = "We are the so-called \"Vikings\" from the north.";
```

# Java If ... Else

- Use `if` to specify a block of code to be executed, if a specified condition is true
- Use `else` to specify a block of code to be executed, if the same condition is false
- Use `else if` to specify a new condition to test, if the first condition is false
- Use `switch` to specify many alternative blocks of code to be executed
```java
int time = 22;
if (time < 10) {
  System.out.println("Good morning.");
} else if (time < 18) {
  System.out.println("Good day.");
} else {
  System.out.println("Good evening.");
}
// Outputs "Good evening."
 
```

# Java Switch

```java
int day = 4;
switch (day) {
  case 6:
    System.out.println("Today is Saturday");
    break;
  case 7:
    System.out.println("Today is Sunday");
    break;
  default:
    System.out.println("Looking forward to the Weekend");
}
// Outputs "Looking forward to the Weekend"
```


  ==default==

# Java While Loop

The `while` loop loops through a block of code as long as a specified condition is `true`:

```java
while (condition) {
  // code block to be executed
}
```

```java
int i = 0;
while (i < 5) {
  System.out.println(i);
  i++;
}
```

##  For Loop

```java
for (statement 1; statement 2; statement 3) {
  // code block to be executed
}
```

# Java For Each Loop

There is also a "**for-each**" loop, which is used exclusively to loop through elements in an [**array**](https://www.w3schools.com/java/java_arrays.asp) (or other data sets):

```java
for (type variableName : arrayName) {
  // code block to be executed
}
```


```java
String[] cars = {"Volvo", "BMW", "Ford", "Mazda"};
for (String i : cars) {
  System.out.println(i);
}
```

# Java Arrays

```java
String[] cars;
```

```java
String[] cars = {"Volvo", "BMW", "Ford", "Mazda"};
```

## Array Length

```java
String[] cars = {"Volvo", "BMW", "Ford", "Mazda"};
System.out.println(cars.length);
// Outputs 4
```


### **Common Errors in Basic Programs**

- **Class name and filename mismatch:**
    
    text
    
    Copy code
    
    `Error: Main method not found in class HelloWorld.`
    
    - Ensure the filename matches the class name.
- **Missing semicolon:**
    
    java
    
    Copy code
    
    `System.out.println("Hello, World!")`
    
    - This will cause a compilation error. Always end statements with a semicolon.