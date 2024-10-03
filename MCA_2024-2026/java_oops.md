
# multilevel

``` java
class WorkerDetail {
    int code;
    String name;
    double salary;
    double hra;

    // Method to set the salary details
    void setSalary(int c, String n, double s) {
        code = c;
        name = n;
        salary = s;
    }

    // Method to show the worker's details
    void showDetail() {
        System.out.println("The employee code is " + code);
        System.out.println("The employee name is " + name);
        System.out.println("The employee salary is " + salary);
    }

    // Method to calculate and display the HRA
    void getHRA() {
        hra = salary * 0.60;
        System.out.println("HRA: " + hra);
    }
}

class OfficerSal extends WorkerDetail {
    double da;

    // Method to calculate and display the DA
    void getDA() {
        da = salary * 0.98;
        System.out.println("DA: " + da);
    }
}

class ManagerSal extends OfficerSal {
    double ca, gross;

    // Method to calculate and display the CA
    void getCA() {
        ca = salary * 0.20;
        System.out.println("CA: " + ca);
    }

    // Method to calculate and display the gross salary
    void getGross() {
        gross = hra + da + ca + salary;
        System.out.println("The gross salary is " + gross);
    }
}

public class MultiLevel {
    public static void main(String args[]) {
        ManagerSal ms = new ManagerSal();
        ms.setSalary(101, "Sreedar", 75000);
        
        System.out.println("Details of Manager: ");
        ms.showDetail();
        
        ms.getHRA();
        ms.getDA();
        ms.getCA();
        ms.getGross();
    }
}

```

# Hierarchial

```java
// Base class 'Fruit'
class Fruit {
    void fruitInfo() {
        System.out.println("I am a fruit.");
    }
}

// Class 'Mango' inherits from class 'Fruit'
class Mango extends Fruit {
    public void mangoInfo() {
        fruitInfo(); // calling base class function
        System.out.println("My name is mango.");
    }
}

// Class 'Apple' inherits from class 'Fruit'
class Apple extends Fruit {
    public void appleInfo() {
        fruitInfo(); // calling base class function
        System.out.println("My name is apple.");
    }
}

// Main class demonstrating hierarchical inheritance
public class HierarchicalInheritanceDemo {
    public static void main(String args[]) {
        Mango m = new Mango(); // Create object of Mango class
        Apple a = new Apple(); // Create object of Apple class

        // Call methods from derived classes
        m.mangoInfo();

```

