
1. Write a Java program to create an abstract class Shape with abstract methods calculateArea() and calculatePerimeter(). Create subclasses Circle and Rectangle that extend the Shape class and implement the respective methods to calculate the area and perimeter of each shape. (Note: Circle - Area - 3.14 x r x r, Perimeter - 2 x 3.14 x r and Rectangle - Area - Length x Width, Perimeter - (L + W) x 2 ).

```run-java
abstract class Shape {
    // Abstract methods to be implemented by subclasses
    abstract double calculateArea();
    abstract double calculatePerimeter();
}

// Circle subclass extending Shape
class Circle extends Shape {
    private double radius;

    // Constructor to initialize radius
    Circle(double radius) {
        this.radius = radius;
    }

    @Override
    double calculateArea() {
        return 3.14 * radius * radius;
    }

    @Override
    double calculatePerimeter() {
        return 2 * 3.14 * radius;
    }
}

// Rectangle subclass extending Shape
class Rectangle extends Shape {
    private double length;
    private double width;

    // Constructor to initialize length and width
    Rectangle(double length, double width) {
        this.length = length;
        this.width = width;
    }

    @Override
    double calculateArea() {
        return length * width;
    }

    @Override
    double calculatePerimeter() {
        return 2 * (length + width);
    }
}

// Main class to demonstrate functionality
public class Main {
    public static void main(String[] args) {
        Shape circle = new Circle(5); // Circle with radius 5
        System.out.println("Circle Area: " + circle.calculateArea());
        System.out.println("Circle Perimeter: " + circle.calculatePerimeter());

        Shape rectangle = new Rectangle(4, 7); // Rectangle with length 4 and width 7
        System.out.println("Rectangle Area: " + rectangle.calculateArea());
        System.out.println("Rectangle Perimeter: " + rectangle.calculatePerimeter());
    }
}

```


### **Explanation:**

- `Shape` is an abstract class with abstract methods for area and perimeter.
- `Circle` and `Rectangle` are subclasses that implement these methods.
- The `Main` class demonstrates how instances of these subclasses can be used.


2. Write a Java program to create an interface Flyable with a method called fly_obj(). Create three classes Spacecraft, Airplane, and Helicopter that implement the Flyable interface. Implement the fly_obj() method for each of the three classes.


```run-java
// Flyable interface with a method fly_obj()
interface Flyable {
    void fly_obj();
}

// Spacecraft class implementing Flyable
class Spacecraft implements Flyable {
    @Override
    public void fly_obj() {
        System.out.println("Spacecraft is flying into outer space.");
    }
}

// Airplane class implementing Flyable
class Airplane implements Flyable {
    @Override
    public void fly_obj() {
        System.out.println("Airplane is flying through the sky.");
    }
}

// Helicopter class implementing Flyable
class Helicopter implements Flyable {
    @Override
    public void fly_obj() {
        System.out.println("Helicopter is hovering above the ground.");
    }
}

// Main class to demonstrate functionality
public class MainFly {
    public static void main(String[] args) {
        Flyable spacecraft = new Spacecraft();
        spacecraft.fly_obj();

        Flyable airplane = new Airplane();
        airplane.fly_obj();

        Flyable helicopter = new Helicopter();
        helicopter.fly_obj();
    }
}

```

### **Explanation:**

- `Flyable` is an interface with the method `fly_obj()`.
- `Spacecraft`, `Airplane`, and `Helicopter` implement this interface.
- The `MainFly` class shows how objects of these classes execute the `fly_obj()` method.