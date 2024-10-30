
1. basic java prgram to take ==float varible==

```run-java
class simple2 {
public static void main(String[] args) {
float m = 20.5f;
System.out.println(m);
}
}
```


2. ==typecasting== in java

```java
class simple2 {
public static void main(String[] args) {
float m = 20.5f;
int a = (int)m;
System.out.println(m);
System.out.println(a);
}
}
```

3. Boolean Data Type
```run-java
Boolean one = false
```

4. ==if == usage
```run-java
 public class Student {    
 public static void main(String[] args) {    
 int x = 10;    
 int y = 12;    
 if(x+y > 20) {    
 System.out.println("x + y is greater than 20");    
 }    
 }      
 }
```

5. ==if else==

```run-java
class if_else{
public static void main(String args[])
{
int a = 10;
int b = 50;
if(a>b)
{
System.out.println("a is greater than b");
}
else{
System.out.println("b is greater than a");
}
}
}
```

6. ==if else if== ladder
```run-java
public class if_else_if_ladder {
public static void main(String args[])
{
String m = "meerut";
if(m == "delhi")
{
System.out.println("ys it is delhi");
}
else if(m == "noida")
{
System.out.println("its noida");
}
else if(m == "culcuta")
{
System.out.println("its culcuta");
}
else
{
System.err.println("it is meerut");
}
}
}
```

7. ==nested if==
```run-java
public class Student {    
public static void main(String[] args) {    
String address = "Delhi, India";    
    
if(address.endsWith("India")) {    
if(address.contains("Meerut")) {    
System.out.println("Your city is Meerut");    
}else if(address.contains("Noida")) {    
System.out.println("Your city is Noida");    
}else {    
System.out.println(address.split(",")[0]);    
}    
}else {    
System.out.println("You are not living in India");    
}    
}    
} 
```

8. ==Switch Statement==

```run-java
public class Student implements Cloneable {  
public static void main(String[] args) {  
int num = 2;  
switch (num){  
case 0:  
System.out.println("number is 0");  
break;  
case 1:  
System.out.println("number is 1");  
break;  
default:  
System.out.println(num);  
}  
}  
}  
```

```run-java
public class SwitchMonthExample {    
public static void main(String[] args) {    
    //Specifying month number  
    int month=7;    
    String monthString="";  
    //Switch statement  
    switch(month){    
    //case statements within the switch block  
    case 1: monthString="1 - January";  
    break;    
    case 2: monthString="2 - February";  
    break;    
    case 3: monthString="3 - March";  
    break;    
    case 4: monthString="4 - April";  
    break;    
    case 5: monthString="5 - May";  
    break;    
    case 6: monthString="6 - June";  
    break;    
    case 7: monthString="7 - July";  
    break;    
    case 8: monthString="8 - August";  
    break;    
    case 9: monthString="9 - September";  
    break;    
    case 10: monthString="10 - October";  
    break;    
    case 11: monthString="11 - November";  
    break;    
    case 12: monthString="12 - December";  
    break;    
    default:System.out.println("Invalid Month!");    
    }    
    //Printing month of the given number  
    System.out.println(monthString);  
}    
}   
```


```run-java
public class NestedSwitchExample {    
    public static void main(String args[])  
      {  
      //C - CSE, E - ECE, M - Mechanical  
        char branch = 'C';                 
        int collegeYear = 4;  
        switch( collegeYear )  
        {  
            case 1:  
                System.out.println("English, Maths, Science");  
                break;  
            case 2:  
                switch( branch )   
                {  
                    case 'C':  
                        System.out.println("Operating System, Java, Data Structure");  
                        break;  
                    case 'E':  
                        System.out.println("Micro processors, Logic switching theory");  
                        break;  
                    case 'M':  
                        System.out.println("Drawing, Manufacturing Machines");  
                        break;  
                }  
                break;  
            case 3:  
                switch( branch )   
                {  
                    case 'C':  
                        System.out.println("Computer Organization, MultiMedia");  
                        break;  
                    case 'E':  
                        System.out.println("Fundamentals of Logic Design, Microelectronics");  
                        break;  
                    case 'M':  
                        System.out.println("Internal Combustion Engines, Mechanical Vibration");  
                        break;  
                }  
                break;  
            case 4:  
                switch( branch )   
                {  
                    case 'C':  
                        System.out.println("Data Communication and Networks, MultiMedia");  
                        break;  
                    case 'E':  
                        System.out.println("Embedded System, Image Processing");  
                        break;  
                    case 'M':  
                        System.out.println("Production Technology, Thermal Engineering");  
                        break;  
                }  
                break;  
        }  
    }  
}  
```


9.  Loops in Java ==Java Simple for Loop==

```run-java
public class NestedForExample {  
public static void main(String[] args) {  
//loop of i  
for(int i=1;i<=3;i++){  
//loop of j  
for(int j=1;j<=3;j++){  
        System.out.println(i+" "+j);  
}//end of i  
}//end of j  
}  
}  

```

10. **PyramidExample.java**

```run-java
public class PyramidExample {  
public static void main(String[] args) {  
for(int i=1;i<=5;i++){  
for(int j=1;j<=i;j++){  
        System.out.print("* ");  
}  
System.out.println();//new line  
}  
}  
}  
```

11. inverted pyramid

```run-java
public class PyramidExample2 {  
public static void main(String[] args) {  
int term=6;  
for(int i=1;i<=term;i++){  
for(int j=term;j>=i;j--){  
        System.out.print("* ");  
}  
System.out.println();//new line  
}  
}  
}  
```


12. Java for-each Loop

The for-each loop is used to traverse array or collection in Java. It is easier to use than simple for loop because we don't need to increment value and use subscript notation.

It works on the basis of elements and not the index. It returns element one by one in the defined variable.

```run-java
//Java For-each loop example which prints the  
//elements of the array  
public class ForEachExample {  
public static void main(String[] args) {  
    //Declaring an array  
    int arr[]={12,23,44,56,78};  
    //Printing array using for-each loop  
    for(int i:arr){  
        System.out.println(i);  
    }  
}  
}  
```

13. Java Labeled For Loop

```run-java
//A Java program to demonstrate the use of labeled for loop  
public class LabeledForExample {  
public static void main(String[] args) {  
    //Using Label for outer and for loop  
    aa:  
        for(int i=1;i<=3;i++){  
            bb:  
                for(int j=1;j<=3;j++){  
                    if(i==2&&j==2){  
                        break aa;  
                    }  
                    System.out.println(i+" "+j);  
                }  
        }  
}  
}  
```
14. **LabeledForExample2.java**

```run-java
public class LabeledForExample2 {  
public static void main(String[] args) {  
    aa:  
        for(int i=1;i<=3;i++){  
            bb:  
                for(int j=1;j<=3;j++){  
                    if(i==2&&j==2){  
                        break bb;  
                    }  
                    System.out.println(i+" "+j);  
                }  
        }  
}  
}  
```

| Comparison                 | for loop                                                                                  | while loop                                                                                                                               | do-while loop                                                                                                                                                             |
| -------------------------- | ----------------------------------------------------------------------------------------- | ---------------------------------------------------------------------------------------------------------------------------------------- | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| Introduction               | The Java for loop is a control flow statement that iterates a part of the multiple times. | The Java while loop is a control flow statement that executes a part of the programs repeatedly on the basis of given boolean condition. | The Java do while loop is a control flow statement that executes a part of the programs at least once and the further execution depends upon the given boolean condition. |
| When to use                | If the number of iteration is fixed, it is recommended to use for loop.                   | If the number of iteration is not fixed, it is recommended to use while loop.                                                            | If the number of iteration is not fixed and you must have to execute the loop at least once, it is recommended to use the do-while loop.                                  |
| Syntax                     | for(init;condition;incr/decr){  <br>// code to be executed  <br>}                         | while(condition){  <br>//code to be executed  <br>}                                                                                      | do{  <br>//code to be executed  <br>}while(condition);                                                                                                                    |
| Example                    | //for loop  <br>for(int i=1;i<=10;i++){  <br>System.out.println(i);  <br>}                | //while loop  <br>int i=1;  <br>while(i<=10){  <br>System.out.println(i);  <br>i++;  <br>}                                               | //do-while loop  <br>int i=1;  <br>do{  <br>System.out.println(i);  <br>i++;  <br>}while(i<=10);                                                                          |
| Syntax for infinitive loop | for(;;){  <br>//code to be executed  <br>}                                                | while(true){  <br>//code to be executed  <br>}                                                                                           | do{  <br>//code to be executed  <br>}while(true);                                                                                                                         |
15. Java While Loop
```run-java
public class WhileExample {  
public static void main(String[] args) {  
    int i=1;  
    while(i<=10){  
        System.out.println(i);  
    i++;  
    }  
}  
}  
```

16. ## Java Infinitive While Loop
If you pass **true** in the while loop, it will be infinitive while loop.

```run-java
while(true){  
//code to be executed  
}  

```


17.  Java do-while Loop
```run-java
public class DoWhileExample {    
public static void main(String[] args) {    
    int i=1;    
    do{    
        System.out.println(i);    
    i++;    
    }while(i<=10);    
}    
}    
```


18. Java Break Statement


```run-java
//Java Program to demonstrate the use of break statement    
//inside the for loop.  
public class BreakExample {  
public static void main(String[] args) {  
    //using for loop  
    for(int i=1;i<=10;i++){  
        if(i==5){  
            //breaking the loop  
            break;  
        }  
        System.out.println(i);  
    }  
}  
}  
```


```run-java
//Java Program to illustrate the use of break statement    
//inside an inner loop   
public class BreakExample2 {  
public static void main(String[] args) {  
            //outer loop   
            for(int i=1;i<=3;i++){    
                    //inner loop  
                    for(int j=1;j<=3;j++){    
                        if(i==2&&j==2){    
                            //using break statement inside the inner loop  
                            break;    
                        }    
                        System.out.println(i+" "+j);    
                    }    
            }    
}  
}  
```


19. Java Continue Statement


```run-java
//Java Program to demonstrate the use of continue statement  
//inside the for loop.  
public class ContinueExample {  
public static void main(String[] args) {  
    //for loop  
    for(int i=1;i<=10;i++){  
        if(i==5){  
            //using continue statement  
            continue;//it will skip the rest statement  
        }  
        System.out.println(i);  
    }  
}  
}  
```

Java Continue Statement with Inner Loop

```run-java
//Java Program to illustrate the use of continue statement  
//inside an inner loop  
public class ContinueExample2 {  
public static void main(String[] args) {  
            //outer loop  
            for(int i=1;i<=3;i++){    
                    //inner loop  
                    for(int j=1;j<=3;j++){    
                        if(i==2&&j==2){    
                            //using continue statement inside inner loop  
                            continue;    
                        }    
                        System.out.println(i+" "+j);    
                    }    
            }    
}  
}  
```

Java Comments

```run-java
public class CommentExample1 {    
public static void main(String[] args) {    
int i=10; // i is a variable with value 10  
System.out.println(i);  //printing the variable i  
}    
}    

```


2) Java Multi Line Comment

```run-java
public class CommentExample2 {    
public static void main(String[] args) {    
/* Let's declare and  
 print variable in java. */    
  int i=10;    
    System.out.println(i);    
/* float j = 5.9; 
    float k = 4.4; 
    System.out.println( j + k ); */    
}    
}    
```

# topic 2

1. Example of different types:

```run-java
public class Students {

int id = 2024;

String name = "akshays";

public void display()

{

System.out.println("name :-" + " " +name +" " + "id :-" + " " +id);

}

public static void main(String[] args) {

Students student = new Students();

student.display();

  

}

}
```

2. Example of primitive data types:

```run-java
public class DataTypesDemo {
    public static void main(String[] args) {
        int age = 30;
        float price = 99.99f;
        char grade = 'A';
        boolean isJavaFun = true;

        System.out.println("Age: " + age);
        System.out.println("Price: " + price);
        System.out.println("Grade: " + grade);
        System.out.println("Is Java fun? " + isJavaFun);
    }
}

```



``float price = 99.99f;``


3.Reference Data Types(array)

```run-java
public class ReferenceExample {

public static void main(String[] args) {

String name = "john";

int id = 20;

int m[] = {20,21,22,25};

System.out.println(name);

System.out.println(id);

System.out.println(m[0]);

}

}
```



4. ==Type Casting and Type Conversion==

-  Implicit Type Casting (Widening)**

```run-java
int a = 50;
double b = a;  // Implicit casting from int to double
System.out.println(b);  // Output: 50.0
```

- Explicit Type Casting (Narrowing)

```run-java
double x = 9.99;
int y = (int) x;  // Explicit casting from double to int
System.out.println(y);  // Output: 9
```

## **2.4 Constants using `final` Keyword**run-java

```run-java
public class ConstantsDemo {
public static void main(String[] args) {
final float pi = 3.14f;
System.out.println(pi);
}
}
```


## **2.5 Default Values of Variables**

When you declare a variable inside a class but don't assign a value, it gets a **default value**:

| **Data Type** | **Default Value** |
| ------------- | ----------------- |
| int           | 0                 |
| float         | 0.0f              |
| boolean       | false             |
| char          | '\u0000'          |
| Object        | `null`            |


### **What is `parseInt` in Java?**

In Java, **`Integer.parseInt(String s)`** is a **method** used to convert a **String** into an **integer (int)** value. If the string contains numeric characters, `parseInt` converts it to the corresponding integer.


``int num = Integer.parseInt(String s);``

```run-java
public class ParseIntExample {
public static void main(String[] args) {
String str = "123";
int num = Integer.parseInt(str);
System.out.println(num);
System.out.println("The number is: " + num); 
System.out.println("After adding 10: " + (num + 10));
}
}
```


``int num = Integer.parseInt(str);``

### **Using `parseInt()` with Command-Line Arguments**

```run-java
public class AddArguments {
    public static void main(String[] args) {
        if (args.length < 2) {
            System.out.println("Please provide two numbers as arguments.");
            return;
        }

        // Convert string inputs to integers
        int num1 = Integer.parseInt(args[0]);
        int num2 = Integer.parseInt(args[1]);

        int sum = num1 + num2;
        System.out.println("The sum is: " + sum);
    }
}

```

```java
javac AddArguments.java
java AddArguments.java 10 20
```

```java
//out put
sum is 30
```

``if (args.length < 2) ``

### **Handling Errors with `parseInt()`**

```run-java
public class InvalidParseInt {
    public static void main(String[] args) {
        try {
            String invalidStr = "abc";  // Non-numeric string
            int num = Integer.parseInt(invalidStr);  // Will throw an exception
        } catch (NumberFormatException e) {
            System.out.println("Invalid input! Please provide a numeric string.");
        }
    }
}
```

# **Topic 3: Operators in Java**



## **3.1 Types of Operators in Java**

|**Category**|**Operators**|**Description**|
|---|---|---|
|**Arithmetic Operators**|`+`, `-`, `*`, `/`, `%`|Perform mathematical operations|
|**Relational (Comparison) Operators**|`==`, `!=`, `>`, `<`, `>=`, `<=`|Compare two values|
|**Logical Operators**|`&&`, `||
|**Assignment Operators**|`=`, `+=`, `-=`, `*=`, `/=`, `%=`|Assign values to variables|
|**Unary Operators**|`+`, `-`, `++`, `--`, `!`|Operate on a single operand|
|**Bitwise Operators**|`&`, `|`,` ^`,` ~`,` <<`,` >>`,` >>>`|
|**Ternary Operator**|`? :`|A shorthand for `if-else`|

## **Arithmetic Operators**


1. These operators are used to perform **basic math operations** like addition, subtraction, multiplication, division, and modulo (remainder).

```run-java
public class ArithmeticOperators {
public static void main(String args[])
{
int a=10,b=20;
System.out.println("addition :- " + (a+b));
System.out.println("Subtraction :- " + (a-b));
System.out.println("multiplication :- " + (a*b));
System.out.println("divition :- " + (a/b));
System.out.println("mod :- " + (a%b));
}
}

```

## ** Relational (Comparison) Operators**

```run-java
public class RelationalOperators 

{

public static void main(String args[])

{

int a= 4,b = 6;
System.out.println("if a == b "+(a==b));
System.out.println("if a != b "+(a!=b));
System.out.println("if a > b "+(a>b));
System.out.println("if a < b "+(a<b));
System.out.println("if a >= b "+(a>=b));
System.out.println("if a <= b "+(a<=b));
  
}
}
```


## **3.4 Logical Operators**

|**Operator**|**Description**|**Example**|
|---|---|---|
|`&&`|Logical AND (both must be true)|`a > 0 && b < 10`|
|`||`|
|`!`|Logical NOT (inverts value)|`!(a > b)`|
==this program wont work its because he input to the and operator is int it should be an expression or a bool==


```run-java
public class LogicalOperators {

public static void main(String[] args) {

int a = 10,b = 20;

System.out.println("a&&b" + ( a && b ));

}

}
```



**explanation**

Your code will not compile because logical operators like `&&` (logical AND) work with **boolean** expressions, not integers. Let's walk through how you can fix it.
### Issue:

- **`&&`** expects both operands to be boolean values (like `true` or `false`), but here you are passing integers (`a` and `b`).
- Java won't implicitly convert integers to boolean.


```run-java
public class LogicalOperators {
    public static void main(String[] args) {
        int a = 10, b = 20;
        
        // Checking if both 'a' and 'b' are non-zero (true)
        System.out.println("a > 0 && b > 0: " + (a > 0 && b > 0));
    }
}
```

```run-java
public class LogicalOperators 
{
public static void main(String[] args) {
int a = 10, b = 20;
System.out.println("a != 0 && b != 0: " + (a != 0 && b != 0));
}
}
```

```run-java
class LogicalOperators{
public static void main(String args[])
{
int a = 10, b = 20;
System.out.println("chek if a and b is greater than 0 "+(a > 0 && b > 0));
}
}
```

==usage of boolean==

```run-java
public class LogicalOperators {
    public static void main(String[] args) {
        boolean a = true, b = false;

        System.out.println("a && b: " + (a && b));  // false
        System.out.println("a || b: " + (a || b));  // true
        System.out.println("!a: " + !a);            // false
    }
}

```


## **3.7 Ternary Operator**

The ternary operator is a shorthand for **`if-else`** statements.

`result = (condition) ? value1 : value2;`


```run-java
public class TernaryOperator {

public static void main(String[] args) {

int a = 10, b = 20;

String result = (a > b)? "a is greater" : "b is greater";

System.out.println(result);

}

  

}
```


# **Topic 4: Control Flow Statements in Java**

## **4.1 Types of Control Flow Statements**

|**Category**|**Control Flow Statements**|**Description**|
|---|---|---|
|**Decision-making**|`if`, `if-else`, `if-else-if`, `switch`|Execute a block of code based on a condition|
|**Looping**|`for`, `while`, `do-while`|Repeat a block of code multiple times|
|**Branching**|`break`, `continue`, `return`|Control the flow within loops and methods|

### **`if-else-if` Ladder**


```run-java
public class IfElseIfExample {
    public static void main(String[] args) {
        int marks = 85;

        if (marks >= 90) {
            System.out.println("Grade: A+");
        } else if (marks >= 80) {
            System.out.println("Grade: A");
        } else if (marks >= 70) {
            System.out.println("Grade: B");
        } else {
            System.out.println("Grade: C");
        }
    }
}

```

### ** `switch` Statement**


```run-java
public class SwitchExample {
public static void main(String[] args) {
int day = 3;
switch (day){
case 1:
System.out.println("monday");
break;
case 2:
System.out.println("tuesday");
break;
case 3:
System.out.println("wednesday");
break;
default:
System.out.println("sorry wrong input");
}
  
}
}
```



## **4.3 Looping Statements**


### **4.3.2 `while` Loop**

```run-java
public class WhileLoopExample {
public static void main(String args[])
{
int m = 0;
while (m < 10)
{
System.out.println("Value of m: " + m);
m++;
}
}
}

```

### **4.3.3 `do-while` Loop**

```run-java
public class DoWhileExample {
    public static void main(String[] args) {
        int i = 1;

        do {
            System.out.println("Count: " + i);
            i++;
        } while (i <= 5);
    }
}
```

## **4.4 Branching Statements**

### **4.4.1 `break` Statement**

```run-java
public class BreakExample {
    public static void main(String[] args) {
        for (int i = 1; i <= 5; i++) {
            if (i == 3) {
                break;  // Exit the loop when i is 3
            }
            System.out.println("Count: " + i);
        }
    }
}

```


### **4.4.2 `continue` Statement**


```java
public class ContinueExample {
    public static void main(String[] args) {
        for (int i = 1; i <= 5; i++) {
            if (i == 3) {
                continue;  // Skip when i is 3
            }
            System.out.println("Count: " + i);
        }
    }
}

```


### **4.4.3 `return` Statement**

```run-java
public class ReturnExample {
    public static void main(String[] args) {
        System.out.println("Sum: " + add(5, 10));
    }

    public static int add(int a, int b) {
        return a + b;  // Return the sum
    }
}

```

# **Topic 5: Classes and Objects in Java**

## **5.1 What is a Class?**

A **class** defines:

- **Attributes** (fields/variables) that represent the state of the object.
- **Methods** (functions) that define the behavior of the object.

```java
class ClassName {
    // Attributes (fields)
    DataType variableName;

    // Methods (functions)
    ReturnType methodName() {
        // Code for the method
    }
}

```

```run-java
class Car {
    // Attributes (fields)
    String brand;
    int year;

    // Method
    void displayInfo() {
        System.out.println("Brand: " + brand + ", Year: " + year);
    }
}

```
## **5.3 Constructors**

A **constructor** is a special method used to **initialize objects**. It is called automatically when an object is created.

- A constructor has the **same name as the class** and no return type.
- You can have **multiple constructors** (constructor overloading) to initialize objects in different ways.

### **Example: Constructor in Java**


```run-java
class Car {
    String brand;
    int year;

    // Constructor
    Car(String b, int y) {
        brand = b;
        year = y;
    }

    void displayInfo() {
        System.out.println("Brand: " + brand + ", Year: " + year);
    }
}

public class Main {
    public static void main(String[] args) {
        // Creating objects using the constructor
        Car myCar = new Car("Tesla", 2023);
        myCar.displayInfo();  // Output: Brand: Tesla, Year: 2023
    }
}


```


my code


```run-java
class Car{

String model;

int year;

String color;

  

Car(String a,int b,String c)

{

model = a;

year = b;

color = c;

}

  

void displayInfo(){

System.out.println("Model: "+model);

System.out.println("Year: "+year);

System.out.println("Color: "+color);

}

}

  

/**

* Main

*/

public class Main {

  

public static void main(String[] args) {

Car car1 = new Car("bmw",2024,"red");

car1.displayInfo();

}

}
```

## **5.4 Methods in Java**

A **method** is a block of code that performs a specific task. Methods are used to **reorganize code into reusable blocks**.

### **Syntax of a Method:**

```run-java
ReturnType methodName(Parameters) {
    // Method body
    return value;  // (Optional: If the method has a return type)
}

```

```run-java
class Calculator {
    // Method to add two numbers
    int add(int a, int b) {
        return a + b;
    }
}

public class Main {
    public static void main(String[] args) {
        Calculator calc = new Calculator();
        int result = calc.add(5, 3);
        System.out.println("Sum: " + result);  // Output: Sum: 8
    }
}

```

```run-java
class Calculator{

int add(int a,int b)

{

return a+b;

}

}

  

public class Main

{

public static void main(String[] args)

{

Calculator c = new Calculator();

int result = c.add(10,12);

System.out.println("Result is : "+result);

}

}
```

## **5.5 Access Modifiers**

Java provides **access modifiers** to control access to the fields and methods of a class. They determine **how visible a member is** to other classes.

| **Modifier** | **Description**                                      |
| ------------ | ---------------------------------------------------- |
| `public`     | Accessible from **anywhere**                         |
| `private`    | Accessible **only within the same class**            |
| `protected`  | Accessible within **the same package** or subclasses |
| (default)    | Accessible **within the same package**               |

### **Example: Using Access Modifiers:**

```run-java
class Car {
    private String brand;  // Private field

    // Public setter method
    public void setBrand(String b) {
        brand = b;
    }

    // Public getter method
    public String getBrand() {
        return brand;
    }
}

public class Main {
    public static void main(String[] args) {
        Car myCar = new Car();
        myCar.setBrand("Tesla");
        System.out.println("Car brand: " + myCar.getBrand());  // Output: Car brand: Tesla
    }
}

```

## **5.6 `this` Keyword**

The `this` keyword refers to the **current object** of the class. It is used to:

- **Differentiate between class attributes and parameters** when they have the same name.
- **Invoke another constructor** from within a constructor.

### **Example: Using `this` Keyword**

```run-java
class Car {
    String brand;
    int year;

    // Constructor with 'this' keyword
    Car(String brand, int year) {
        this.brand = brand;
        this.year = year;
    }

    void displayInfo() {
        System.out.println("Brand: " + brand + ", Year: " + year);
    }
}

public class Main {
    public static void main(String[] args) {
        Car myCar = new Car("Tesla", 2023);
        myCar.displayInfo();  // Output: Brand: Tesla, Year: 2023
    }
}

```

```run-java
class Car{

String brand;

String model;

int year;

  

Car(String brand, String model, int year){

this.brand = brand;

this.year = year;

this.model = model;

  

}

}

  

class Main{

public static void main(String[] args) {

Car car1 = new Car("bmw","series 5",2020);

System.out.println(car1.brand);

System.out.println(car1.model);

System.out.println(car1.year);

}

  

}
```

## **5.7 Static Members**

- **Static fields** and **methods** belong to the **class, not to objects**.
- They can be accessed **without creating an object** of the class.

### **Example: Static Method and Variable**

```run-java
class MathUtils {
    static int square(int x) {
        return x * x;
    }
}

public class Main {
    public static void main(String[] args) {
        System.out.println("Square of 4: " + MathUtils.square(4));  // Output: Square of 4: 16
    }
}

```

## **5.8 Example Program: Class with Constructor and Methods**

```run-java
class Student {
    String name;
    int rollNumber;

    // Constructor
    Student(String name, int rollNumber) {
        this.name = name;
        this.rollNumber = rollNumber;
    }

    // Method to display student info
    void displayInfo() {
        System.out.println("Name: " + name + ", Roll Number: " + rollNumber);
    }
}

public class Main {
    public static void main(String[] args) {
        // Create student objects
        Student student1 = new Student("Alice", 101);
        Student student2 = new Student("Bob", 102);

        // Display student info
        student1.displayInfo();  // Output: Name: Alice, Roll Number: 101
        student2.displayInfo();  // Output: Name: Bob, Roll Number: 102
    }
}

```

```run-java
class Student{

String name;

int age;

String grade;

  

Student(String name, int age, String grade){

this.name = name;

this.grade = grade;

this.age = age;

}

void display(){

System.out.println("Name: " + name);

System.out.println("Age: " + age);

System.out.println("Grade: " + grade);

  

}

}

  
  

public class Main{

public static void main(String[] args){

Student stu = new Student("akshay",24,"b+");

stu.display();

}

}
```


# **Topic 6: Inheritance in Java**

- **Inheritance** allows a new class (subclass) to **reuse fields and methods** from an existing class (superclass).
- A subclass can **add new fields and methods** or **override existing ones**.

## **6.2 Types of Inheritance in Java**

Java supports **four types** of inheritrance:

1. **Single Inheritance:** One subclass inherits from one superclass.
2. **Multilevel Inheritance:** A class inherits from a class, which in turn inherits from another class.
3. **Hierarchical Inheritance:** Multiple subclasses inherit from a single superclass.
4. **Hybrid Inheritance:** A combination of multiple inheritance types (but Java doesn’t directly support multiple inheritance with classes—only with interfaces).

### **6.3 Example: Single Inheritance**



![[1711532114phpfEGhVM.jpeg]]


```run-java
class Animal {
    void eat() {
        System.out.println("This animal eats food.");
    }
}

class Dog extends Animal {
    void bark() {
        System.out.println("The dog barks.");
    }
}

public class Main {
    public static void main(String[] args) {
        Dog myDog = new Dog();
        myDog.eat();  // Inherited method from Animal
        myDog.bark(); // Method from Dog class
    }
}

```

```run-java
class Animal

{

void eat(){

System.out.println("this animal needs to eat");

}

  
  

}

  

class Dog extends Animal{

void bark()

{

System.out.println("the dog barks");

}

}

  

public class Main{

public static void main(String[] args) {

Dog dog = new Dog() ;

dog.eat();

dog.bark();

}

  

}
```




### **6.4 Multilevel Inheritance

![[Multilevel-Inheritance-in-Java-1.jpg.webp]]**

```run-java
class Animal {
    void eat() {
        System.out.println("Animals eat food.");
    }
}

class Mammal extends Animal {
    void walk() {
        System.out.println("Mammals walk.");
    }
}

class Dog extends Mammal {
    void bark() {
        System.out.println("Dogs bark.");
    }
}

public class Main {
    public static void main(String[] args) {
        Dog myDog = new Dog();
        myDog.eat();   // Inherited from Animal
        myDog.walk();  // Inherited from Mammal
        myDog.bark();  // Method from Dog
    }
}

```



### **6.5 Hierarchical Inheritance**


```run-java
class Animal {
    void sound() {
        System.out.println("Animals make sound.");
    }
}

class Dog extends Animal {
    void bark() {
        System.out.println("The dog barks.");
    }
}

class Cat extends Animal {
    void meow() {
        System.out.println("The cat meows.");
    }
}

public class Main {
    public static void main(String[] args) {
        Dog myDog = new Dog();
        Cat myCat = new Cat();

        myDog.sound();
        myDog.bark();

        myCat.sound();
        myCat.meow();
    }
}

```


## **6.6 Overriding Methods in Inheritance**


**Method overriding** occurs when a subclass provides a **specific implementation of a method** already defined in the superclass.

**Rules for Overriding:**

- The method in the child class must have the **same name and parameters** as in the parent class.
- The **return type** must be compatible.
- The **access level** cannot be more restrictive than the parent class method.

### **Example: Method Overriding**

```java
class Animal {
    void sound() {
        System.out.println("Animals make some sound.");
    }
}

class Dog extends Animal {
    @Override
    void sound() {
        System.out.println("The dog barks.");
    }
}

public class Main {
    public static void main(String[] args) {
        Animal myDog = new Dog();
        myDog.sound();  // Calls the overridden method in Dog class
    }
}

```