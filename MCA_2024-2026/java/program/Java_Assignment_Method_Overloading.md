
Create a class named Billing that includes three overloaded computeBill() methods for a photo book store. 
-  When computeBill() receives a single parameter, it represents the price of one photo book ordered. Add 8% tax, and return the total due. 

- When computeBill() receives two parameters, they represent the price of a photo book and the quantity ordered. Multiply the two values, add 8% tax, and return the total due. 

 - When computeBill() receives three parameters, they represent the price of a photo book, the quantity ordered, and a coupon value. Multiply the quantity and price, reduce the result by the coupon value, and then add 8% tax and return the total due. Write a main() method that tests all three overloaded methods.

```run-java
public class Billing {

    // Method 1: Single parameter - Price of one book
    public static double computeBill(double price) {
        double total = price + (price * 0.08); // Adding 8% tax
        return total;
    }

    // Method 2: Two parameters - Price and quantity of books
    public static double computeBill(double price, int quantity) {
        double total = (price * quantity) + (price * quantity * 0.08); // Adding 8% tax
        return total;
    }

    // Method 3: Three parameters - Price, quantity, and coupon value
    public static double computeBill(double price, int quantity, double coupon) {
        double subtotal = (price * quantity) - coupon; // Subtracting coupon value
        double total = subtotal + (subtotal * 0.08); // Adding 8% tax
        return total;
    }

    // Main method to test the overloaded methods
    public static void main(String[] args) {
        // Testing the first method (price of one book)
        double total1 = computeBill(50.0);
        System.out.println("Total for 1 book: $" + total1);

        // Testing the second method (price and quantity)
        double total2 = computeBill(50.0, 3);
        System.out.println("Total for 3 books: $" + total2);

        // Testing the third method (price, quantity, and coupon)
        double total3 = computeBill(50.0, 3, 20.0);
        System.out.println("Total for 3 books with a $20 coupon: $" + total3);
    }
}

```

Here’s the Java implementation of the `Billing` class with overloaded `computeBill()` methods, followed by a `main()` method to test them.

### Java Code:

java

Copy code

`public class Billing {      // Method 1: Single parameter - Price of one book     public static double computeBill(double price) {         double total = price + (price * 0.08); // Adding 8% tax         return total;     }      // Method 2: Two parameters - Price and quantity of books     public static double computeBill(double price, int quantity) {         double total = (price * quantity) + (price * quantity * 0.08); // Adding 8% tax         return total;     }      // Method 3: Three parameters - Price, quantity, and coupon value     public static double computeBill(double price, int quantity, double coupon) {         double subtotal = (price * quantity) - coupon; // Subtracting coupon value         double total = subtotal + (subtotal * 0.08); // Adding 8% tax         return total;     }      // Main method to test the overloaded methods     public static void main(String[] args) {         // Testing the first method (price of one book)         double total1 = computeBill(50.0);         System.out.println("Total for 1 book: $" + total1);          // Testing the second method (price and quantity)         double total2 = computeBill(50.0, 3);         System.out.println("Total for 3 books: $" + total2);          // Testing the third method (price, quantity, and coupon)         double total3 = computeBill(50.0, 3, 20.0);         System.out.println("Total for 3 books with a $20 coupon: $" + total3);     } }`

### Explanation:

1. **Overloaded Methods:**
    
    - **First method:** Accepts one parameter (price), applies 8% tax, and returns the total.
    - **Second method:** Accepts two parameters (price and quantity), calculates the total price, applies 8% tax, and returns the total.
    - **Third method:** Accepts three parameters (price, quantity, and coupon value), subtracts the coupon value from the subtotal, applies 8% tax, and returns the total.
2. **Main Method:**
    
    - Tests all three overloaded methods with sample inputs and prints the results.

### Sample Output:

```java
Total for 1 book: $54.0
Total for 3 books: $162.0 
Total for 3 books with a $20 coupon: $140.4`
```


This example demonstrates method overloading and shows how to handle different sets of inputs efficiently using overloaded methods.