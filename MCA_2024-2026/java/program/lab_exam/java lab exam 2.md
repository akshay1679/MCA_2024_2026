
1.Write a Student class with:
String name
int rollNo
double marks
Add methods:
displayDetails() – to print the student's details.
acceptDetails() – to enter marks and other details
checkPass() – returns true if marks > 40, else false.
Create 3 Student objects, and test these methods.

```java
import java.util.Scanner;

class Student {
    String name;
    int rollNo;
    double marks;

    void displayDetails() {
        System.out.println("Name: " + name);
        System.out.println("Roll No: " + rollNo);
        System.out.println("Marks: " + marks);
    }

    void acceptDetails() {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Name: ");
        name = sc.nextLine();
        System.out.print("Enter Roll No: ");
        rollNo = sc.nextInt();
        System.out.print("Enter Marks: ");
        marks = sc.nextDouble();
    }

    boolean checkPass() {
        return marks > 40;
    }
}

public class StudentTest {
    public static void main(String[] args) {
        Student s1 = new Student();
        s1.acceptDetails();
        s1.displayDetails();
        System.out.println("Passed: " + s1.checkPass());
    }
}

```


2.  Create a BankAccount class with three constructors:
 A constructor that takes only the account number.
 A constructor that takes the account number and the initial balance.
 A constructor that takes the account number, balance, and the account holder's name.
Write methods to deposit and withdraw amounts from the account and display the balance.
Test all the constructors by creating objects.

```java
class BankAccount {
    String accountHolder;
    int accountNumber;
    double balance;

    // Constructors
    public BankAccount(int accountNumber) {
        this.accountNumber = accountNumber;
        this.balance = 0;
    }

    public BankAccount(int accountNumber, double balance) {
        this.accountNumber = accountNumber;
        this.balance = balance;
    }

    public BankAccount(int accountNumber, double balance, String accountHolder) {
        this.accountNumber = accountNumber;
        this.balance = balance;
        this.accountHolder = accountHolder;
    }

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
        } else {
            System.out.println("Insufficient balance");
        }
    }

    void displayBalance() {
        System.out.println("Account Number: " + accountNumber);
        System.out.println("Balance: " + balance);
    }
}

public class BankAccountTest {
    public static void main(String[] args) {
        BankAccount acc1 = new BankAccount(12345);
        acc1.deposit(500);
        acc1.displayBalance();
    }
}

```

3.** Employee Array**

```java
import java.util.Scanner;

class Employee {
    int empId;
    String empName;
    String designation;
    double salary;

    void acceptDetails() {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Emp ID: ");
        empId = sc.nextInt();
        sc.nextLine(); // consume newline
        System.out.print("Enter Name: ");
        empName = sc.nextLine();
        System.out.print("Enter Designation: ");
        designation = sc.nextLine();
        System.out.print("Enter Salary: ");
        salary = sc.nextDouble();
    }

    void displayDetails() {
        System.out.println("Emp ID: " + empId);
        System.out.println("Name: " + empName);
        System.out.println("Designation: " + designation);
        System.out.println("Salary: " + salary);
    }
}

public class EmployeeArrayTest {
    public static void main(String[] args) {
        Employee[] employees = new Employee[3];
        for (int i = 0; i < employees.length; i++) {
            employees[i] = new Employee();
            employees[i].acceptDetails();
        }

        for (Employee emp : employees) {
            emp.displayDetails();
        }
    }
}

```

**4. AreaCalculator Class with Overloaded Methods**

```java
class AreaCalculator {
    // Method to calculate the area of a circle
    double calculateArea(int radius) {
        return Math.PI * radius * radius;
    }

    // Method to calculate the area of a rectangle
    double calculateArea(int length, int breadth) {
        return length * breadth;
    }

    // Method to calculate the area of a square
    double calculateArea(double side) {
        return side * side;
    }
}

public class AreaCalculatorTest {
    public static void main(String[] args) {
        AreaCalculator ac = new AreaCalculator();
        
        System.out.println("Area of Circle: " + ac.calculateArea(5));
        System.out.println("Area of Rectangle: " + ac.calculateArea(4, 5));
        System.out.println("Area of Square: " + ac.calculateArea(4.0));
    }
}

```

**5. Calculator Class with Overloaded max() Methods**

```java
class Calculator {
    // Method to find the maximum of two integers
    int max(int a, int b) {
        return (a > b) ? a : b;
    }

    // Method to find the maximum of two doubles
    double max(double a, double b) {
        return (a > b) ? a : b;
    }

    // Method to find the maximum of three integers
    int max(int a, int b, int c) {
        return (a > b && a > c) ? a : (b > c) ? b : c;
    }
}

public class CalculatorTest {
    public static void main(String[] args) {
        Calculator calc = new Calculator();
        
        System.out.println("Max of 3 and 5: " + calc.max(3, 5));
        System.out.println("Max of 4.5 and 3.2: " + calc.max(4.5, 3.2));
        System.out.println("Max of 1, 5, and 3: " + calc.max(1, 5, 3));
    }
}

```


**6. HotelRoom Class with Overloaded Constructors**

```java
class HotelRoom {
    int roomNumber;
    String customerName;
    int days;

    // Constructor 1: Room number only
    public HotelRoom(int roomNumber) {
        this.roomNumber = roomNumber;
        this.days = 1; // Default 1 day stay
    }

    // Constructor 2: Room number and customer name
    public HotelRoom(int roomNumber, String customerName) {
        this.roomNumber = roomNumber;
        this.customerName = customerName;
        this.days = 1; // Default 1 day stay
    }

    // Constructor 3: Room number, customer name, and number of days
    public HotelRoom(int roomNumber, String customerName, int days) {
        this.roomNumber = roomNumber;
        this.customerName = customerName;
        this.days = days;
    }

    // Calculate price based on the number of days (e.g., $100 per day)
    double calcPrice() {
        return days * 100;
    }

    void displayDetails() {
        System.out.println("Room Number: " + roomNumber);
        System.out.println("Customer Name: " + customerName);
        System.out.println("Days of Stay: " + days);
        System.out.println("Total Price: $" + calcPrice());
    }
}

public class HotelRoomTest {
    public static void main(String[] args) {
        HotelRoom room1 = new HotelRoom(101);
        room1.displayDetails();

        HotelRoom room2 = new HotelRoom(102, "Alice");
        room2.displayDetails();

        HotelRoom room3 = new HotelRoom(103, "Bob", 5);
        room3.displayDetails();
    }
}

```


**7. Shape Class with Inheritance and Overriding**

```java
class Shape {
    void area() {
        System.out.println("Area not defined");
    }
}

class Rectangle extends Shape {
    int length;
    int breadth;

    public Rectangle(int length, int breadth) {
        this.length = length;
        this.breadth = breadth;
    }

    @Override
    void area() {
        System.out.println("Rectangle Area: " + (length * breadth));
    }
}

class Square extends Rectangle {
    public Square(int side) {
        super(side, side);
    }

    @Override
    void area() {
        System.out.println("Square Area: " + (length * length));
    }
}

public class ShapeTest {
    public static void main(String[] args) {
        Rectangle rect = new Rectangle(4, 5);
        rect.area();

        Square sq = new Square(4);
        sq.area();
    }
}

```



**8. Person and Employee Classes with Inheritance and Method Overriding**

```java
class Person {
    String name;

    void display() {
        System.out.println("Name: " + name);
    }
}

class Employee extends Person {
    int salary;

    Employee(String name, int salary) {
        this.name = name;
        this.salary = salary;
    }

    @Override
    void display() {
        super.display();
        System.out.println("Salary: " + salary);
    }
}

public class EmployeeTest {
    public static void main(String[] args) {
        Employee emp = new Employee("John", 50000);
        emp.display();
    }
}

```


**9. Abstract Employee Class with FullTimeEmployee and PartTimeEmployee**

```java
abstract class Employee {
    abstract double calculateSalary();
}

class FullTimeEmployee extends Employee {
    private double salary;

    public FullTimeEmployee(double salary) {
        this.salary = salary;
    }

    @Override
    double calculateSalary() {
        return salary;
    }
}

class PartTimeEmployee extends Employee {
    private double hourlyRate;
    private int hoursWorked;

    public PartTimeEmployee(double hourlyRate, int hoursWorked) {
        this.hourlyRate = hourlyRate;
        this.hoursWorked = hoursWorked;
    }

    @Override
    double calculateSalary() {
        return hourlyRate * hoursWorked;
    }
}

public class EmployeeTestAbstract {
    public static void main(String[] args) {
        FullTimeEmployee ftEmployee = new FullTimeEmployee(60000);
        PartTimeEmployee ptEmployee = new PartTimeEmployee(20, 120);

        System.out.println("Full-time Employee Salary: " + ftEmployee.calculateSalary());
        System.out.println("Part-time Employee Salary: " + ptEmployee.calculateSalary());
    }
}

```


**10. Person, Worker, and Employee Interfaces with an Engineer Class Implementing Them**

```java
interface Person {
    void eat();
}

interface Worker {
    void work();
}

interface Employee extends Person, Worker {
    void salary();
}

class Engineer implements Employee {
    @Override
    public void eat() {
        System.out.println("Engineer is eating.");
    }

    @Override
    public void work() {
        System.out.println("Engineer is working.");
    }

    @Override
    public void salary() {
        System.out.println("Engineer has a salary.");
    }
}

public class InterfaceTest {
    public static void main(String[] args) {
        Engineer eng = new Engineer();
        eng.eat();
        eng.work();
        eng.salary();
    }
}

```


**3. Employee Array**

java

Copy code