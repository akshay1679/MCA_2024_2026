
**Q**  Here's a simple Java program to take an integer input and reverse the number:

```java
import java.util.Scanner;

public class ReverseInteger {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        // Take an integer input from the user
        System.out.print("Enter an integer: ");
        int num = scanner.nextInt();
        
        int reversedNum = 0;
        int originalNum = num; // Store the original number for sign handling
        
        // Reverse the integer
        while (num != 0) {
            int digit = num % 10;        // Get the last digit
            reversedNum = reversedNum * 10 + digit;  // Append the digit
            num /= 10;                   // Remove the last digit
        }

        // If the original number was negative, make the reversed number negative
        if (originalNum < 0) {
            reversedNum = -reversedNum;
        }

        System.out.println("Reversed number: " + reversedNum);
    }
}

```