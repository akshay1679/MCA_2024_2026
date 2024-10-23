
Create a class “Person” with fields “name” and “age”.
Create a subclass “Employee” that extends “Person” and adds a field “salary”. 
Define a default constructor in "Person" class to assign the values in the fields name and age.
Define a default constructor in "Employee" class to assign the value in the salary field and a method “display()” that prints the name, age, and salary of the employee.


```run-java
class Person {
    String name;
    int age;

    // Default constructor for Person
    Person() {
        this.name = "Unknown";  // Default name
        this.age = 0;            // Default age
    }
}

class Employee extends Person {
    double salary;

    // Default constructor for Employee
    Employee() {
        super();  // Calls the default constructor of Person
        this.salary = 0.0;  // Default salary
    }

    // Method to display employee details
    void display() {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
        System.out.println("Salary: " + salary);
    }
}

// Test the implementation
public class Main {
    public static void main(String[] args) {
        Employee emp = new Employee(); // Create an Employee object
        emp.name = "John Doe";  // Assign values to fields
        emp.age = 30;
        emp.salary = 50000.0;

        emp.display();  // Display the employee's details
    }
}

```