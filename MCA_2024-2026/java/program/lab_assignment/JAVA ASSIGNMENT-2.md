1. Write a program in Java to input 5 numbers from the keyboard and find their sum and average. 

```run-java
import java.util.Scanner;

public class SumAndAverage {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int sum = 0;

        System.out.println("Enter 5 numbers:");
        for (int i = 0; i < 5; i++) {
            sum += sc.nextInt();
        }

        double average = sum / 5.0;
        System.out.println("Sum: " + sum);
        System.out.println("Average: " + average);
    }
}

```


2. Write a java program to create a class named “Employees” with the attributes “empid”, “name”, “designation”, “department” and “salary” and the methods to store the values into the attributes and to print those values. Create and store 5 employee details using object as array concept.
```run-java
import java.util.Scanner;

class Employees {
    int empid;
    String name;
    String designation;
    String department;
    double salary;

    // Method to set employee details
    void setDetails(int empid, String name, String designation, String department, double salary) {
        this.empid = empid;
        this.name = name;
        this.designation = designation;
        this.department = department;
        this.salary = salary;
    }

    // Method to display employee details
    void displayDetails() {
        System.out.println("EmpID: " + empid + ", Name: " + name + ", Designation: " + designation +
                ", Department: " + department + ", Salary: " + salary);
    }
}

public class EmployeeDetails {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Employees[] employees = new Employees[5];

        // Creating and storing details for 5 employees
        for (int i = 0; i < 5; i++) {
            employees[i] = new Employees();
            System.out.println("Enter details for Employee " + (i + 1) + ":");
            System.out.print("EmpID: ");
            int empid = sc.nextInt();
            sc.nextLine(); // Consume newline
            System.out.print("Name: ");
            String name = sc.nextLine();
            System.out.print("Designation: ");
            String designation = sc.nextLine();
            System.out.print("Department: ");
            String department = sc.nextLine();
            System.out.print("Salary: ");
            double salary = sc.nextDouble();
            employees[i].setDetails(empid, name, designation, department, salary);
        }

        System.out.println("\nEmployee Details:");
        for (Employees emp : employees) {
            emp.displayDetails();
        }
    }
}

```


3. Write a Java program to create a class known as "BankAccount" with attributes “accountNumber”, “balance” and methods called “deposit()” and “withdraw()”. The class should also have a parameterised constructor to initialize the attributes which are accepted from the user through main function using Scanner class. Create a subclass called “SavingsAccount” that overrides the “withdraw()” method to prevent withdrawals if the account balance falls below 100.

```run-java
import java.util.Scanner;

class BankAccount {
    String accountNumber;
    double balance;

    // Parameterized constructor
    BankAccount(String accountNumber, double balance) {
        this.accountNumber = accountNumber;
        this.balance = balance;
    }

    // Method to deposit amount
    void deposit(double amount) {
        balance += amount;
        System.out.println("Deposited: " + amount + ", New Balance: " + balance);
    }

    // Method to withdraw amount
    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            System.out.println("Withdrawn: " + amount + ", Remaining Balance: " + balance);
        } else {
            System.out.println("Insufficient balance!");
        }
    }
}

class SavingsAccount extends BankAccount {

    // Parameterized constructor for SavingsAccount
    SavingsAccount(String accountNumber, double balance) {
        super(accountNumber, balance);
    }

    // Overriding withdraw method
    @Override
    void withdraw(double amount) {
        if (balance - amount < 100) {
            System.out.println("Withdrawal denied! Minimum balance of 100 must be maintained.");
        } else {
            super.withdraw(amount);
        }
    }
}

public class BankApp {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter Account Number: ");
        String accountNumber = sc.nextLine();
        System.out.print("Enter Initial Balance: ");
        double balance = sc.nextDouble();

        SavingsAccount savings = new SavingsAccount(accountNumber, balance);

        System.out.println("Choose an option: 1. Deposit  2. Withdraw");
        int choice = sc.nextInt();

        System.out.print("Enter amount: ");
        double amount = sc.nextDouble();

        if (choice == 1) {
            savings.deposit(amount);
        } else if (choice == 2) {
            savings.withdraw(amount);
        } else {
            System.out.println("Invalid option.");
        }
    }
}

```

4. Write a Java program to perform studentsgrade calculation using packages. Create a file Student.java under the package students with a class Student. Declare the variables studid, name, mark1, mark2, mark3, total and grade. Calculate the total and grade using a method calculate by passing the parameters studid, name, mark1, mark2 and mark3. Use another method display to print all the above details. Create another java file StudentCalc.java which contains the main function. In which create an object of Student class, accept the values for studid, name, mark1, mark2 and mark3. Call the methods calculate and display to perform the calculations and print values. Grade is assigned based on the following conditions:
If the total >=75 and <=150 grade is “P”
If the total <75 grade is “F”

### **File: `students/Student.java`**

```run-java
package students;

public class Student {
    int studid;
    String name;
    int mark1, mark2, mark3;
    int total;
    String grade;

    // Method to calculate total and grade
    public void calculate(int studid, String name, int mark1, int mark2, int mark3) {
        this.studid = studid;
        this.name = name;
        this.mark1 = mark1;
        this.mark2 = mark2;
        this.mark3 = mark3;
        this.total = mark1 + mark2 + mark3;

        if (total >= 75 && total <= 150) {
            grade = "P";
        } else {
            grade = "F";
        }
    }

    // Method to display student details
    public void display() {
        System.out.println("Student ID: " + studid);
        System.out.println("Name: " + name);
        System.out.println("Marks: " + mark1 + ", " + mark2 + ", " + mark3);
        System.out.println("Total: " + total);
        System.out.println("Grade: " + grade);
    }
}

```

### **File: `StudentCalc.java`**


```run-java
import students.Student;
import java.util.Scanner;

public class StudentCalc {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Student student = new Student();

        System.out.print("Enter Student ID: ");
        int studid = sc.nextInt();
        sc.nextLine(); // Consume newline
        System.out.print("Enter Name: ");
        String name = sc.nextLine();
        System.out.print("Enter Mark 1: ");
        int mark1 = sc.nextInt();
        System.out.print("Enter Mark 2: ");
        int mark2 = sc.nextInt();
        System.out.print("Enter Mark 3: ");
        int mark3 = sc.nextInt();

        student.calculate(studid, name, mark1, mark2, mark3);
        student.display();
    }
}

```

