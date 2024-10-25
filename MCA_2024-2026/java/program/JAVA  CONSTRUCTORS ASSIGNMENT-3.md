
1. Default Constructor:
Write a Java program to create a class called "Cat" with instance variables name and age. Implement a default constructor that initializes the name to "Unknown" and the age to 0. Print the values of the variables using a method.

```run-java
class Cat {
    String name;
    int age;

    // Default constructor
    public Cat() {
        name = "Unknown";
        age = 0;
    }

    // Method to print instance variables
    public void printDetails() {
        System.out.println("Cat Name: " + name);
        System.out.println("Cat Age: " + age);
    }

    public static void main(String[] args) {
        Cat cat = new Cat();  // Create an object of Cat using default constructor
        cat.printDetails();   // Print the values
    }
}

```

2. Parameterized Constructor:
Write a Java program to create a class called Dog with instance variables name and color. Implement a parameterized constructor that takes name and color as parameters and initializes the instance variables. Print the values of the variables using a method.

```run-java
class Dog {
    String name;
    String color;

    // Parameterized constructor
    public Dog(String name, String color) {
        this.name = name;
        this.color = color;
    }

    // Method to print instance variables
    public void printDetails() {
        System.out.println("Dog Name: " + name);
        System.out.println("Dog Color: " + color);
    }

    public static void main(String[] args) {
        Dog dog = new Dog("Buddy", "Brown");  // Create an object of Dog with parameters
        dog.printDetails();  // Print the values
    }
}

```



3. Constructor Overloading
Write a Java program to create a class called "Book" with instance variables title, author, and price. Implement a default constructor and two parameterized constructors:

> One constructor takes title and author as parameters.
> The other constructor takes title, author, and price as parameters.
> Print the values of the variables for each constructor using a method.


```run-java
class Book {
    String title;
    String author;
    double price;

    // Default constructor
    public Book() {
        title = "Unknown";
        author = "Unknown";
        price = 0.0;
    }

    // Constructor with two parameters
    public Book(String title, String author) {
        this.title = title;
        this.author = author;
        this.price = 0.0;  // Default price
    }

    // Constructor with three parameters
    public Book(String title, String author, double price) {
        this.title = title;
        this.author = author;
        this.price = price;
    }

    // Method to print instance variables
    public void printDetails() {
        System.out.println("Title: " + title);
        System.out.println("Author: " + author);
        System.out.println("Price: $" + price);
    }

    public static void main(String[] args) {
        Book book1 = new Book();  // Default constructor
        Book book2 = new Book("The Alchemist", "Paulo Coelho");  // Two-parameter constructor
        Book book3 = new Book("Sapiens", "Yuval Noah Harari", 19.99);  // Three-parameter constructor

        System.out.println("Book 1:");
        book1.printDetails();

        System.out.println("\nBook 2:");
        book2.printDetails();

        System.out.println("\nBook 3:");
        book3.printDetails();
    }
}

```