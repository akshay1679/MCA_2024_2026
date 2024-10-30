JAVA PACKAGE ASSIGNMENT
===========================

Write a Java program to perform employee payroll processing using packages. Create a file Emp.java under the package employee with a class Emp. Declare the variables name, empid, category, bpay, hra, da, npay, pf, grosspay, incometax, and allowance. Calculate the values using a method calculate by passing the parameters name, empid, category and bpay. Use another method display to print the details after the calculation. Create another java file Emppay.java which contains the main function. In which create an object of Emp class, accept the values for name, empid, category and bpay. Call the methods calculate and display to perform the calculations and print values.

da = 5% of bpay
hra = 9% of bpay
pf = 11% of bpay
allowance = 10% of Basicpay
grosspay = (bpay + da + hra + allowance) - pf
incometax = 75% of grosspay
npay = grosspay - incometax

```run-java
// Save this file as Emp.java inside the 'employee' directory
package employee;

public class Emp {
    // Declare variables
    String name;
    int empid;
    String category;
    double bpay, hra, da, pf, allowance, grosspay, incometax, npay;

    // Method to calculate payroll details
    public void calculate(String name, int empid, String category, double bpay) {
        // Assign input values to instance variables
        this.name = name;
        this.empid = empid;
        this.category = category;
        this.bpay = bpay;

        // Calculate components
        da = 0.05 * bpay;          // DA = 5% of bpay
        hra = 0.09 * bpay;         // HRA = 9% of bpay
        pf = 0.11 * bpay;          // PF = 11% of bpay
        allowance = 0.10 * bpay;   // Allowance = 10% of bpay

        // Calculate gross pay and net pay
        grosspay = (bpay + da + hra + allowance) - pf;
        incometax = 0.75 * grosspay;   // Income tax = 75% of gross pay
        npay = grosspay - incometax;   // Net pay = gross pay - income tax
    }

    // Method to display employee details and payroll information
    public void display() {
        System.out.println("Employee Details:");
        System.out.println("Name       : " + name);
        System.out.println("Emp ID     : " + empid);
        System.out.println("Category   : " + category);
        System.out.println("Basic Pay  : " + bpay);
        System.out.println("HRA        : " + hra);
        System.out.println("DA         : " + da);
        System.out.println("PF         : " + pf);
        System.out.println("Allowance  : " + allowance);
        System.out.println("Gross Pay  : " + grosspay);
        System.out.println("Income Tax : " + incometax);
        System.out.println("Net Pay    : " + npay);
    }
}

```


```run-java
// Save this file as Emppay.java in the same directory as 'employee'
import employee.Emp;
import java.util.Scanner;

public class Emppay {
    public static void main(String[] args) {
        // Create a scanner object for user input
        Scanner sc = new Scanner(System.in);

        // Accept employee details from the user
        System.out.print("Enter Employee Name: ");
        String name = sc.nextLine();

        System.out.print("Enter Employee ID: ");
        int empid = sc.nextInt();
        sc.nextLine(); // Consume the newline character

        System.out.print("Enter Employee Category: ");
        String category = sc.nextLine();

        System.out.print("Enter Basic Pay: ");
        double bpay = sc.nextDouble();

        // Create an object of the Emp class
        Emp employee = new Emp();

        // Call the calculate method to process payroll
        employee.calculate(name, empid, category, bpay);

        // Display the employee details and payroll information
        employee.display();
    }
}

```

