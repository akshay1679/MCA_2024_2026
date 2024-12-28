### Object-Relational Data Models (ORDM) in Simple Terms

1. **What is ORDM?**
    
    - ORDM is like a regular relational database (tables with rows and columns) but with extra features borrowed from object-oriented programming.
    - It helps manage more complex data types and structures while still using familiar database techniques.
2. **Key Features:**
    
    - **Complex Data Types:**  
        You can store more advanced data in a single column, like:
        
        - ==Nested tables== (tables inside a column).
        - ==Data structures== like lists or arrays.
    - **Structured Types:**  
        Similar to composite attributes, where a single attribute can hold multiple values grouped together (like a mini-record).
        
    - **Inheritance:**  
        You can define relationships where one type of data can inherit properties from another, similar to object-oriented classes.
        
    - **Object Orientation:**  
        Includes features like:
        
        - **Object Identifiers (OIDs):** Unique IDs for objects (like a primary key but specific to objects).
        - **References:** Columns that point to other objects, making it easy to link related data.
3. **Benefits:**
    
    - **Keeps Relational Foundations:**  
        You can still use SQL queries to access and manipulate data.
    - **Compatible with Existing Systems:**  
        Works with old relational databases but adds more modeling power.
4. **SQL Enhancements (SQL:1999):**  
    SQL was updated to include:
    
    - **Collection Types:** For storing sets or lists (like nested tables).
    - **Large Object Types:** For handling big data like images or videos.
    - **Structured Types:** For defining custom data types with multiple fields.
    - **Inheritance and Object Features:** To add more flexibility.
