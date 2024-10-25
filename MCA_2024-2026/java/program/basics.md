
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



4. Type Casting and Type Conversion

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

