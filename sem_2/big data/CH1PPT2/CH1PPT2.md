
### **Types of Big Data**

1. **Structured Data**
	PSR fixed format 
	No easy search 
    - Mean data that can be <mark style="background: #ABF7F7A6;">processed, stored, and retrieved in a fixed format</mark>.
    - Structured data is <mark style="background: #ABF7F7A6;">neatly organized, making it easy for computers to search and process</mark>. 
    - Example: A company’s employee database with names, job titles, and salaries
    
2. **Unstructured Data**
    
    - <mark style="background: #ABF7F7A6;">Lacks a defined structure, making it harder to process</mark>.
    - Example: <mark style="background: #ABF7F7A6;">Emails</mark>, social media posts, videos, and images.
    
3. **Semi-Structured Data**
    
    - Contains <mark style="background: #ABF7F7A6;">both structured and unstructured elements</mark>.
    - Example: **JSON files**, which have structured tags but flexible content.

---

### **Structured Data Example:**

- **Relational Databases** store data in rows and columns.

- Stored in tables with rows and columns (like a database).
- Data is organized into ==fixed fields==.
- Similar data is grouped into categories (relations or classes).
- Entities in the ==same group have same attributes==
- Easy to search and use in other programs.
- Efficient for analysis and processing.

- Example: A customer database for an e-commerce store with fields like:
    
    |Customer ID|Name|Email|Purchase History|
    
---
### Structured to Un structured

![[CH1PPT2 1.webp]]

[[CH1PPT2.pdf#page=8&rect=81,74,591,151|CH1PPT2, p.8]]



---

### **Industry Examples of Big Data**

- **Healthcare** – Patient records and medical images.

- **Banking** – Fraud detection and transaction analysis.

---

### **Schema-on-Write vs. Schema-on-Read**

- **Schema-on-Write:** Define the structure **before storing** the data.
    - Example: Traditional databases where tables are predefined.
    - ==Structured data is typically stored using schema-on-write.== 
    - This is because the schema is known in advance and can be used to optimize the storage and performance of the data.
- **Schema-on-Read:** Define the structure **when reading** the data.
    - Example: ==Analyzing social media posts where the format isn't fixed==.
    - ==Unstructured data is typically stored using schema-onread==. 
    - This is because the schema is not known in advance and may need to be changed frequently.

