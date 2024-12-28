### 1. Print ‘Hello World’

```java
public class HelloWorld {
    public static void main(String[] args) {
        System.out.println("Hello World");
    }
}

```

### 2. Largest of Three Numbers using If-Else

```java
import java.util.Scanner;

public class LargestOfThree {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter three numbers: ");
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();

        if (a >= b && a >= c) {
            System.out.println("Largest number is: " + a);
        } else if (b >= a && b >= c) {
            System.out.println("Largest number is: " + b);
        } else {
            System.out.println("Largest number is: " + c);
        }
    }
}

```

### 3. Multiplication Table using For Loop

```java
import java.util.Scanner;

public class MultiplicationTable {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int num = sc.nextInt();

        for (int i = 1; i <= 10; i++) {
            System.out.println(num + " x " + i + " = " + (num * i));
        }
    }
}

```


### 4 Write a program to reverse a number using while loop.

```java
import java.util.Scanner;

public class ReverseNumber {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int number = scanner.nextInt();
        
        int reversedNumber = 0;
        while (number != 0) {
            int digit = number % 10;      // Extract last digit
            reversedNumber = reversedNumber * 10 + digit;  // Append digit to reversed number
            number /= 10;                 // Remove last digit from original number
        }
        
        System.out.println("Reversed Number: " + reversedNumber);
    }
}

```

### 5. Maximum, Minimum, and Sum of an Array

```java
import java.util.Scanner;

public class ArrayOperations {
    public static void main(String[] args) {
        int[] arr = new int[10];
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter 10 numbers:");
        
        for (int i = 0; i < 10; i++) {
            arr[i] = sc.nextInt();
        }

        int max = arr[0], min = arr[0], sum = 0;

        for (int num : arr) {
            if (num > max) max = num;
            if (num < min) min = num;
            sum += num;
        }

        System.out.println("Max: " + max + ", Min: " + min + ", Sum: " + sum);
    }
}

```

### 6. Matrix Addition

```java
import java.util.Scanner;

public class MatrixAddition {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[][] matrix1 = new int[2][2];
        int[][] matrix2 = new int[2][2];


        System.out.println("Enter elements of first matrix:");
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                matrix1[i][j] = sc.nextInt();

        System.out.println("Enter elements of second matrix:");
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                matrix2[i][j] = sc.nextInt();

        System.out.println("Resulting matrix:");
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                System.out.print(matrix1[i][j] + matrix2[i][j] + " ");
            }
            System.out.println();
        }
    }
}

```


### 7. **BankAccount Class with Constructors and Methods**

```java
import java.util.Scanner;
class BankAccount { // Renamed from Bankaccount to BankAccount to follow Java naming conventions
private String name;
private Double balance; // Corrected spelling from balence to balance
private String accountNumber;
  
public BankAccount(String name) {
this.name = name;
this.balance = (double) 0; // Initialize balance to 0 to prevent null pointer issues
}
  
public BankAccount(double balance, String name) {
this.name = name;
this.balance = balance;
}
  
public BankAccount(double balance, String name, String accountNumber) {
this.name = name;
this.balance = balance;
this.accountNumber = accountNumber;
}
  
public void withdraw(double amount) {
if (balance >= amount) {
balance = balance - amount;
} else {
System.out.println("Insufficient balance");
}
}
  
public void deposit(double amount) {
balance += amount;
}
  
public void display() {
System.out.println("Balance = " + balance);
}
}
  
public class ArrayOperations{
public static void main(String []args) {
BankAccount acc1 = new BankAccount("Akshay");
BankAccount acc2 = new BankAccount(1000.0, "Akshay");
BankAccount acc3 = new BankAccount(1000.0, "Akshay", "1234567890"); // Renamed from acc2 to acc3 to avoid duplicate variable name

acc1.deposit(1000);
acc1.display();
acc2.deposit(3000);
acc2.display();
acc3.display();
}
}
```

==mistakes==

```java
this.balance = (double) 0; // Initialize balance to 0 to prevent null pointer issues
```
### 8. **Array of Employee Objects**

```java
import java.util.Scanner;

class Employee {
    int empID;
    String empName;
    double salary;

    public void getEmpData() {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Employee ID: ");
        empID = sc.nextInt();
        System.out.print("Enter Employee Name: ");
        empName = sc.next();
        System.out.print("Enter Salary: ");
        salary = sc.nextDouble();
    }

    public void printEmpData() {
        System.out.println("ID: " + empID + ", Name: " + empName + ", Salary: " + salary);
    }
}

public class EmployeeArray {
    public static void main(String[] args) {
        Employee[] employees = new Employee[3];

        for (int i = 0; i < 3; i++) {
            employees[i] = new Employee();
            employees[i].getEmpData();
        }

        System.out.println("Employee Details:");
        for (Employee emp : employees) {
            emp.printEmpData();
        }
    }
}

```

### 9. **Abstract Class Bird with Subclasses Eagle and Hawk**

```java
abstract class Bird {
    abstract void fly();
    abstract void makeSound();
}

class Eagle extends Bird {
    void fly() {
        System.out.println("Eagle flies high in the sky.");
    }

    void makeSound() {
        System.out.println("Eagle makes a screeching sound.");
    }
}

class Hawk extends Bird {
    void fly() {
        System.out.println("Hawk flies swiftly.");
    }

    void makeSound() {
        System.out.println("Hawk makes a shrill sound.");
    }
}

public class BirdTest {
    public static void main(String[] args) {
        Bird eagle = new Eagle();
        Bird hawk = new Hawk();

        eagle.fly();
        eagle.makeSound();
        hawk.fly();
        hawk.makeSound();
    }
}

```


### 10. **SavingsAccount Subclass Preventing Overdraw**

```java
class BankAccount {
    protected double balance;

    public BankAccount(double initialBalance) {
        this.balance = initialBalance;
    }

    public void deposit(double amount) {
        balance += amount;
    }

    public void withdraw(double amount) {
        balance -= amount;
    }
}

class SavingsAccount extends BankAccount {
    public SavingsAccount(double initialBalance) {
        super(initialBalance);
    }

    @Override
    public void withdraw(double amount) {
        if (balance - amount < 100) {
            System.out.println("Withdrawal denied. Minimum balance of Rs.100 must be maintained.");
        } else {
            super.withdraw(amount);
        }
    }
}

public class SavingsAccountTest {
    public static void main(String[] args) {
        SavingsAccount acc = new SavingsAccount(500);
        acc.withdraw(450); // This should be denied
        acc.withdraw(300); // This should be allowed
    }
}

```

### 11. **Interface Drawable with Multiple Implementations**

```java
interface Drawable {
    void draw();
}

class Circle implements Drawable {
    public void draw() {
        System.out.println("Drawing a Circle.");
    }
}

class Rectangle implements Drawable {
    public void draw() {
        System.out.println("Drawing a Rectangle.");
    }
}

class Triangle implements Drawable {
    public void draw() {
        System.out.println("Drawing a Triangle.");
    }
}

public class DrawableTest {
    public static void main(String[] args) {
        Drawable circle = new Circle();
        Drawable rectangle = new Rectangle();
        Drawable triangle = new Triangle();

        circle.draw();
        rectangle.draw();
        triangle.draw();
    }
}

```

### 12. **Arithmetic Exception Handling**


```java
public class DivisionTest {
    public static void divide(int a, int b) {
        try {
            int result = a / b;
            System.out.println("Result: " + result);
        } catch (ArithmeticException e) {
            System.out.println("Arithmetic Exception: Division by zero.");
        }
    }

    public static void main(String[] args) {
        divide(10, 2);
        divide(10, 0);
    }
}

```


### 13. **Custom Exception Demonstration**

```java
class CustomException extends Exception {
    public CustomException(String message) {
        super(message);
    }
}

public class CustomExceptionTest {
    public static void main(String[] args) {
        try {
            throw new CustomException("This is a custom exception.");
        } catch (CustomException e) {
            System.out.println(e.getMessage());
        }
    }
}

```


### 14. **Creating and Using Packages**

**Package: `pack.Useme`**

```java
package pack;

public class Useme {
    public double findArea(double length, double breadth) {
        return length * breadth;
    }

    public double calculateSalary(double basic, double hra, double da, double ta) {
        return basic + hra + da + ta;
    }

    public double findPercentage(double obtainedMarks, double totalMarks) {
        return (obtainedMarks / totalMarks) * 100;
    }
}

```

**Package: `mypack.PackageUse`**

```java
package mypack;

import pack.Useme;

public class PackageUse {
    public static void main(String[] args) {
        Useme useme = new Useme();

        double area = useme.findArea(5, 4);
        System.out.println("Area of Rectangle: " + area);

        double salary = useme.calculateSalary(20000, 5000, 3000, 2000);
        System.out.println("Total Salary: " + salary);

        double percentage = useme.findPercentage(450, 500);
        System.out.println("Percentage: " + percentage);
    }
}

```


