1. Write a Java program to create a class called "Person" with a name and age attributes. Create two instances of the "Person" class, set their attributes using a method "input()", and print their name and age using the method "display()".

### 1. Java Program: Class `Person`

This program creates a `Person` class, sets the name and age using the `input()` method, and prints the details using the `display()` method.

```run-java
import java.util.Scanner;

class Person {
    String name;
    int age;

    // Method to input name and age
    void input() {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter name: ");
        name = scanner.nextLine();
        System.out.print("Enter age: ");
        age = scanner.nextInt();
    }

    // Method to display name and age
    void display() {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
    }
}

public class Main {
    public static void main(String[] args) {
        // Creating two Person instances
        Person person1 = new Person();
        Person person2 = new Person();

        // Input and display details for each person
        System.out.println("Enter details for Person 1:");
        person1.input();
        System.out.println("Enter details for Person 2:");
        person2.input();

        System.out.println("\nDetails of Person 1:");
        person1.display();
        System.out.println("\nDetails of Person 2:");
        person2.display();
    }
}

```

2. Write a Java program to create a class called "Rectangle" with width and height attributes. Input the values for the attributes by the user using Scanner class using a method "accept()". Calculate and print the area and perimeter of the rectangle using another method "calculateshow()".

```run-java
import java.util.Scanner;

class Rectangle {
    double width;
    double height;

    // Method to accept width and height from the user
    void accept() {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter width: ");
        width = scanner.nextDouble();
        System.out.print("Enter height: ");
        height = scanner.nextDouble();
    }

    // Method to calculate and display area and perimeter
    void calculateshow() {
        double area = width * height;
        double perimeter = 2 * (width + height);
        System.out.println("Area: " + area);
        System.out.println("Perimeter: " + perimeter);
    }
}

public class Main {
    public static void main(String[] args) {
        // Creating a Rectangle instance
        Rectangle rectangle = new Rectangle();

        // Input dimensions and calculate results
        rectangle.accept();
        System.out.println("\nRectangle Details:");
        rectangle.calculateshow();
    }
}

```

### Explanation:

1. **For the `Person` Class**:
    
    - We use the `Scanner` class to take input from the user.
    - Two instances of `Person` are created, and each has its own `name` and `age`.
    - The `display()` method prints the details of each person.
2. **For the `Rectangle` Class**:
    
    - The `accept()` method takes width and height as input from the user.
    - The `calculateshow()` method computes the area and perimeter, and prints them.

Both programs demonstrate the use of **object-oriented principles**, such as classes and methods, along with **user input handling** using `Scanner`.