```java
import java.util.Scanner;

public class Calculator {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter first number: ");
        double num1 = scanner.nextDouble();

        System.out.print("Enter second number: ");
        double num2 = scanner.nextDouble();

        System.out.println("Choose an operation (+, -, *, /): ");
        char operator = scanner.next().charAt(0);

        double result;
        switch (operator) {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                result = num1 / num2;
                break;
            default:
                System.out.println("Invalid operator!");
                return;
        }

        System.out.println("The result is: " + result);
        scanner.close();
    }
}
```


```run-java
class Car {
    private String brand;  // Private field

    // Public setter method
    public void setBrand(String b) {
        brand = b;
    }

    // Public getter method
    public String getBrand() {
        return brand;
    }
}

public class Main {
    public static void main(String[] args) {
        Car myCar = new Car();
        myCar.setBrand("Tesla");
        System.out.println("Car brand: " + myCar.getBrand());  // Output: Car brand: Tesla
    }
}

```

