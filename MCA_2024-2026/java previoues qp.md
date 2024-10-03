### 7. **Discuss Briefly About Method Overloading and Write Example Program**

#### a) **Method Overloading:**

Method overloading is a feature in Java that allows a class to have multiple methods with the same name but different parameter lists (different number or types of parameters). This is known as **compile-time polymorphism**. Overloading improves code readability and allows the method to handle different types of data or parameters.

Key points about method overloading:

- The return type of the overloaded method can be the same or different.
- The method signature must differ in the number or types of parameters.
- Overloading cannot be achieved by just changing the return type of the method.

#### b) **Advantages of Method Overloading:**

1. **Code Readability:** It simplifies code by allowing a method to perform similar tasks with different input parameters.
2. **Reusability:** A single method name can handle various types of inputs, avoiding the need for multiple method names.
3. **Improves Maintainability:** Fewer method names lead to cleaner, more understandable code.

#### c) **Example Program:**

Here's an example that demonstrates method overloading:
```
class Calculator {
    // Method to add two integers
    int add(int a, int b) {
        return a + b;
    }

    // Method to add three integers
    int add(int a, int b, int c) {
        return a + b + c;
    }

    // Method to add two double numbers
    double add(double a, double b) {
        return a + b;
    }
}

public class TestOverloading {
    public static void main(String[] args) {
        Calculator calc = new Calculator();

        // Calling different overloaded methods
        System.out.println("Sum of two integers: " + calc.add(5, 10));        // Output: 15
        System.out.println("Sum of three integers: " + calc.add(5, 10, 15));  // Output: 30
        System.out.println("Sum of two doubles: " + calc.add(5.5, 10.5));     // Output: 16.0
    }
}

```

In this program:

- The `add()` method is overloaded to handle different types and numbers of parameters.
- Java automatically decides which method to call based on the number and type of arguments passed to the method.

### 6. **What Are the Benefits of Packages? Write a Program Importing One of the Packages? Write the Syntax of Creating a New Package**

#### a) **Benefits of Packages:**

Packages in Java provide a way to group related classes and interfaces. This modular approach provides several benefits:

1. **Namespace Management:** Packages avoid name conflicts by organizing classes with the same name into different packages. For instance, you can have a class `Employee` in both `hr` and `finance` packages.
2. **Access Control:** Packages provide another layer of protection. You can control the visibility of classes and methods within and outside the package using access modifiers (like `public`, `private`, `protected`).
3. **Code Reusability:** Packages make it easier to reuse classes. For example, you can create a package for utility classes and reuse them across multiple projects.
4. **Modularity:** Dividing your code into packages allows for better organization, maintenance, and scalability.

#### b) **Importing a Package:**

To use a class or an interface from a different package, you need to import that package. Here's an example of using the `Scanner` class from the `java.util` package:

- **Example Program:**
```
import java.util.Scanner;

public class InputExample {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter your name: ");
        String name = scanner.nextLine();
        System.out.println("Hello, " + name);
    }
}

```

#### c) **Creating a New Package:**

To create a package in Java, you use the `package` keyword at the top of your Java file. Here's the syntax for creating and using a package:

- **Syntax:**
```
package mypackage;

public class MyClass {
    public void displayMessage() {
        System.out.println("Hello from MyClass in mypackage");
    }
}

```

Once you have your class inside a package, you can import and use it like this:

```
import mypackage.MyClass;

public class Test {
    public static void main(String[] args) {
        MyClass obj = new MyClass();
        obj.displayMessage();
    }
}

```

### 5. **Write Notes on Object-Oriented Concepts**

Object-Oriented Programming (OOP) is a paradigm based on the concept of "objects," which can contain data and methods to operate on that data. The four main principles of OOP are:

#### a) **Encapsulation**

- **Definition:** Encapsulation is the mechanism of wrapping data (variables) and code (methods) together as a single unit. In Java, the fields of a class are often marked `private` while methods that operate on these fields are marked `public`. This approach restricts direct access to the fields from outside the class, maintaining control over the data.
```
class Employee {
    private int id;
    private String name;

    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }
}

```

In the above example, `id` and `name` are encapsulated and can only be accessed via the public methods `getId()` and `setId()`.

#### b) **Abstraction**

- **Definition:** Abstraction focuses on hiding the complexity of the system by exposing only the essential features. In Java, abstraction is achieved through abstract classes and interfaces. Users can interact with high-level concepts without worrying about underlying implementation details.
**Example:**

```
abstract class Animal {
    abstract void makeSound();  // abstract method
}

class Dog extends Animal {
    void makeSound() {
        System.out.println("Barks");
    }
}

class Cat extends Animal {
    void makeSound() {
        System.out.println("Meows");
    }
}

```

Here, the `Animal` class abstracts the method `makeSound()`, and the specific details are provided in the subclasses like `Dog` and `Cat`.

#### c) **Inheritance**

- **Definition:** Inheritance is a mechanism where one class (subclass/child class) inherits the attributes and methods from another class (superclass/parent class). It promotes code reusability and establishes a relationship between classes. In Java, inheritance is implemented using the `extends` keyword.
**Example:**

```
class Vehicle {
    void run() {
        System.out.println("Vehicle is running");
    }
}

class Car extends Vehicle {
    void run() {
        System.out.println("Car is running");
    }
}

```
- In this example, `Car` is inheriting the `run()` method from `Vehicle` but can also override it.