• Design patterns are prv, reusbl ,sol to com prbl   in sd. • a standardized way to structure code -> more flexible, maintainable, and scalable. • Rather than reinventing the wheel each time a common problem arises, developers can rely on these tried-and-tested approaches

## Y dp

common vocabulary and understanding
C readability and reduce complexity.
C. reuse and robustness.
best practices

## **Importance of Design Patterns**

1. **Code Reusability**  
    Design patterns promote **reusable solutions** to common problems, reducing the need to write code from scratch.
    
2. **Maintainability**  
    Patterns help create **well-structured and clean code**, making it easier to **maintain** and **modify**.
    
3. **Scalability**  
    They enable building **scalable architectures**, allowing the application to grow without major rewrites.
    
4. **Best Practices**  
    They encapsulate **industry-proven best practices**, improving **software quality** and **developer confidence**.
    
5. **Communication**  
    Patterns offer a **common vocabulary** among developers, simplifying **team communication** and **design discussions**.
    
6. **Faster Development**  
    By providing **ready-made templates**, design patterns **speed up** the development process.
    
7. **Decoupling**  
    They encourage **loose coupling** between components, enhancing **flexibility** and **testability**.
    
8. **Improved Debugging**  
    Recognizable patterns make **debugging and testing** easier due to **predictable code structures**.
    
9. **Documentation Aid**  
    They act as **self-documenting code**, reducing the need for excessive comments and external documentation.
    
10. **Future-Proofing**  
    Using design patterns makes the system more **adaptable to change**, ensuring **long-term viability**.
    

---

# Behavioral Design Patterns

## **Template Design Pattern**

![[UNIT-4 Behavioral Design Patterns.webp]]

[[UNIT-4 Behavioral Design Patterns.pdf#page=45&rect=56,127,869,449|UNIT-4 Behavioral Design Patterns, p.45]]
 refer the code in pdf

# Creational Design Patterns

### Singleton Design Pattern

is a creational design pattern that ensures a <mark style="background: #FFB8EBA6;">class has only one instance and provides a global point of access to it.</mark> This pattern is useful when exactly one object is needed to coordinate actions across a system, such as in logging, configuration settings, or database connections.

#### Key Features:

1. **Single Instance**:  restricts  instantiation of a cls to a 1 obj.
    
2. **Global Access**:  single instance is acc glbaly, usually through a static methd.
    
3. **Lazy Initialization**:  instance is created only when it is needed for the first time, which improves performance.
    

#### Implementation:

![[UNIT-4 Creational Design pattern.webp]]

[[UNIT-4 Creational Design pattern.pdf#page=14&rect=237,70,703,475|UNIT-4 Creational Design pattern, p.14]]


![[UNIT-4 Creational Design pattern 1.webp]]

[[UNIT-4 Creational Design pattern.pdf#page=15&rect=96,58,674,426|UNIT-4 Creational Design pattern, p.15]]
#### Advantages:

- Controlled access to the sole instance.
- Reduced memory footprint by avoiding multiple object creations.
- Useful in scenarios like caching, thread pools, or configuration handling.
    

#### Disadvantages:

- Can hinder unit testing due to global state.
    
- Can be less suitable for multithreaded environments unless synchronized.
    
# Structural Design Patterns

Adapter Design Pattern (5 Marks Answer):

Its is a SDP tht allow obj with incompatible interfaces to work together. It acts as a ==bridge between two different interfaces by converting the interface of one class into another expected by the client.==

Components:

1. Target – Interface expected by the client.


2. Adaptee – The existing incompatible class.


3. Adapter – Converts Adaptee to Target.


4. Client – Uses Target.



Use Case: Integrating XML-based stock data with a JSON-only analytics library using an adapter to convert formats.

Benefit: Increases code reusability and system flexibility without modifying existing code.

---

Decorator Design Pattern

Its a SDP that allows you to add new behavior to individual objects dynamically, without altering their structure or affecting other objects of the same class.

Key Points:

Purpose: To extend functionality of objects at runtime in a flexible and reusable way.

Components:

1. Component Interface – Defines the standard methods.


2. Concrete Component – The original object to be decorated.


3. Decorator – Abstract class that implements the interface and holds a reference to a component.


4. Concrete Decorators – Add specific functionalities.



Example: In a coffee shop app, decorators like MilkDecorator and SugarDecorator can be used to enhance a PlainCoffee object without changing its base class.

Advantages:

Follows the Open/Closed Principle.

Supports runtime behavior change.

Promotes modular design.



It is ideal when functionalities need to be combined in different ways without class explosion.

