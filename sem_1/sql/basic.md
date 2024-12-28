

``SELECT * FROM Customers;

## Some of The Most Important SQL Commands

- `SELECT` - extracts data from a database
- `UPDATE` - updates data in a database
- `DELETE` - deletes data from a database
- `INSERT INTO` - inserts new data into a database
- `CREATE DATABASE` - creates a new database 
- `ALTER DATABASE` - modifies a database
- `CREATE TABLE` - creates a new table
- `ALTER TABLE` - modifies a table
- `DROP TABLE` - deletes a table
- `CREATE INDEX` - creates an index (search key)
- `DROP INDEX` - deletes an index

## The SQL SELECT Statement

``SELECT CustomerName, City FROM Customers;

| CustomerID | CustomerName                       | ContactName        | Address                       | City        | PostalCode | Country |
| ---------- | ---------------------------------- | ------------------ | ----------------------------- | ----------- | ---------- | ------- |
| 1          | Alfreds Futterkiste                | Maria Anders       | Obere Str. 57                 | Berlin      | 12209      | Germany |
| 2          | Ana Trujillo Emparedados y helados | Ana Trujillo       | Avda. de la Constitución 2222 | México D.F. | 05021      | Mexico  |
| 3          | Antonio Moreno Taquería            | Antonio Moreno     | Mataderos 2312                | México D.F. | 05023      | Mexico  |
| 4          | Around the Horn                    | Thomas Hardy       | 120 Hanover Sq.               | London      | WA1 1DP    | UK      |
| 5          | Berglunds snabbköp                 | Christina Berglund | Berguvsvägen 8                | Luleå       | S-958 22   | Sweden  |


## SQL SELECT DISTINCT Statement

If you omit the `DISTINCT` keyword, the SQL statement returns the "Country" value from all the records of the "Customers" table:

By using the `DISTINCT` keyword in a function called `COUNT`, we can return the number of different countries.

``SELECT COUNT(DISTINCT Country) FROM Customers;

## The SQL WHERE Clause

The `WHERE` clause is used to filter records.

It is used to extract only those records that fulfill a specified condition

	``SELECT * FROM Customers WHERE Country='Mexico';

## Text Fields vs. Numeric Fields

SQL requires single quotes around text values (most database systems will also allow double quotes).

``SELECT * FROM Customers  WHERE CustomerID=1;

***only " = " is used for comparison***


## Between a certain range

``SELECT * FROM Products WHERE Price BETWEEN 50 AND 60;

Search for a pattern :
``SELECT * FROM Customers WHERE City LIKE 's%';

To specify multiple possible values for a column:
``SELECT * FROM Customers WHERE City IN ('Paris','London');


## SQL ORDER BY Keyword

``SELECT * FROM Products ORDER BY Price;

### DESC

The `ORDER BY` keyword sorts the records in ascending order by default. To sort the records in descending order, use the `DESC` keyword

`SELECT * FROM Products  ORDER BY Price DESC;`

### Order Alphabetically

`SELECT * FROM Products ORDER BY ProductName;`

### Alphabetically DESC

To sort the table reverse alphabetically, use the `DESC` keyword:

`SELECT * FROM Products ORDER BY ProductName DESC;`

### ORDER BY Several Columns

The following SQL statement selects all customers from the "Customers" table, sorted by the "Country" and the "CustomerName" column. This means that it orders by Country, but if some rows have the same Country, it orders them by CustomerName:

`SELECT * FROM Customers ORDER BY Country, CustomerName;`

### Using Both ASC and DESC

The following SQL statement selects all customers from the "Customers" table, sorted ascending by the "Country" and descending by the "CustomerName" column:

`SELECT * FROM Customers ORDER BY Country ASC, CustomerName DESC;`

## The SQL AND Operator

The `WHERE` clause can contain one or many `AND` operators.

`SELECT * FROM Customers WHERE Country = 'Spain' AND CustomerName LIKE 'G%';`

`SELECT * FROM Customers  WHERE Country = 'Germany'  AND City = 'Berlin'  AND PostalCode > 12000;`

### Combining AND and OR

`SELECT * FROM Customers  WHERE Country = 'Spain' AND (CustomerName LIKE 'G%' OR CustomerName LIKE 'R%');`

# SQL OR Operator

`SELECT *  FROM Customers  WHERE Country = 'Germany' OR Country = 'Spain';`

# SQL NOT Operator

The `NOT` operator is used in combination with other operators to give the opposite result, also called the negative result.

In the select statement below we want to return all customers that are NOT from Spain:

Select only the customers that are NOT from Spain:
`SELECT * FROM Customers WHERE NOT Country = 'Spain';`

### NOT LIKE

`SELECT * FROM Customers WHERE CustomerName NOT LIKE 'A%';`

### NOT BETWEEN

`SELECT * FROM Customers WHERE CustomerID NOT BETWEEN 10 AND 60;`

### NOT IN

`SELECT * FROM Customers WHERE City NOT IN ('Paris', 'London');`

### NOT Greater Than

`SELECT * FROM Customers WHERE NOT CustomerID > 50;`

# SQL INSERT INTO Statement

1. Specify both the column names and the values to be inserted:
`INSERT INTO _table_name_ (_column1_, _column2_, _column3_, ...) VALUES (_value1_, _value2_, _value3_, ...);`

2. If you are adding values for all the columns of the table, you do not need to specify the column names in the SQL query. However, make sure the order of the values is in the same order as the columns in the table. Here, the `INSERT INTO` syntax would be as follows:
`INSERT INTO _table_name_ VALUES (_value1_, _value2_, _value3_, ...);`

3. It is also possible to only insert data in specific columns.

### Insert Multiple Rows

``INSERT INTO Customers (CustomerName, ContactName, Address, City, PostalCode, Country)  
`VALUES  `
`('Cardinal', 'Tom B. Erichsen', 'Skagen 21', 'Stavanger', '4006', 'Norway'),  
`('Greasy Burger', 'Per Olsen', 'Gateveien 15', 'Sandnes', '4306', 'Norway'), ` 
`('Tasty Tee', 'Finn Egan', 'Streetroad 19B', 'Liverpool', 'L1 0AA', 'UK');`

# SQL NULL Values

### IS NULL Syntax

`SELECT _column_names _FROM _table_name_  WHERE _column_name_ IS NULL;`

### IS NOT NULL Syntax

`SELECT _column_names  _FROM _table_name_ WHERE _column_name_ IS NOT NULL;`

### The IS NULL Operator

The `IS NULL` operator is used to test for empty values (NULL values).

`SELECT CustomerName, ContactName, Address  
`FROM Customers  `
`WHERE Address IS NULL;`

### The IS NOT NULL Operator

The `IS NOT NULL` operator is used to test for non-empty values (NOT NULL values).

The following SQL lists all customers with a value in the "Address" field:
`SELECT CustomerName, ContactName, Address  FROM Customers  WHERE Address IS NOT NULL;`


## SQL UPDATE Statement

The `UPDATE` statement is used to modify the existing records in a table.

`UPDATE _table_name_  SET _column1_ = _value1_, _column2_ = _value2_, ...  WHERE _condition_;`

|CustomerID|CustomerName|ContactName|Address|City|PostalCode|Country|
|---|---|---|---|---|---|---|
|1|Alfreds Futterkiste|Maria Anders|Obere Str. 57|Berlin|12209|Germany|
|2|Ana Trujillo Emparedados y helados|Ana Trujillo|Avda. de la Constitución 2222|México D.F.|05021|Mexico|
|3|Antonio Moreno Taquería|Antonio Moreno|Mataderos 2312|México D.F.|05023|Mexico|
|4|Around the Horn|Thomas Hardy|120 Hanover Sq.|London|WA1 1DP|UK|
|5|Berglunds snabbköp|Christina Berglund|Berguvsvägen 8|Luleå|S-958 22|Sweden|

`UPDATE Customers  SET ContactName = 'Alfred Schmidt', City= 'Frankfurt'  WHERE CustomerID = 1;`

|CustomerID|CustomerName|ContactName|Address|City|PostalCode|Country|
|---|---|---|---|---|---|---|
|1|Alfreds Futterkiste|Alfred Schmidt|Obere Str. 57|Frankfurt|12209|Germany|
|2|Ana Trujillo Emparedados y helados|Ana Trujillo|Avda. de la Constitución 2222|México D.F.|05021|Mexico|
|3|Antonio Moreno Taquería|Antonio Moreno|Mataderos 2312|México D.F.|05023|Mexico|
|4|Around the Horn|Thomas Hardy|120 Hanover Sq.|London|WA1 1DP|UK|
|5|Berglunds snabbköp|Christina Berglund|Berguvsvägen 8|Luleå|S-958 22|Sweden|

### UPDATE Multiple Records

It is the `WHERE` clause that determines how many records will be updated.

The following SQL statement will update the ContactName to "Juan" for all records where country is "Mexico":

`UPDATE Customers  SET ContactName='Juan'  WHERE Country='Mexico';`

***Be careful when updating records. If you omit the `WHERE` clause, ALL records will be updated!***

## The SQL DELETE Statement

The `DELETE` statement is used to delete existing records in a table.

`DELETE FROM _table_name_ WHERE _condition_;`

`DELETE FROM Customers WHERE CustomerName='Alfreds Futterkiste';`

### Delete a Table

To delete the table completely, use the `DROP TABLE` statement:
`DROP TABLE Customers;`

## The SQL SELECT TOP Clause

The `SELECT TOP` clause is used to specify the number of records to return.

The `SELECT TOP` clause is useful on large tables with thousands of records. Returning a large number of records can impact performance.

`SELECT TOP 3 * FROM Customers;
`SELECT TOP 3 * FROM Customers ORDER BY CustomerName DESC;`

## LIMIT

`SELECT * FROM Customers  LIMIT 3;`

## SQL Aggregate Functions

An aggregate function is a function that performs a calculation on a set of values, and returns a single value.

Aggregate functions are often used with the `GROUP BY` clause of the `SELECT` statement. The `GROUP BY` clause splits the result-set into groups of values and the aggregate function can be used to return a single value for each group.

The most commonly used SQL aggregate functions are:

- `MIN()` - returns the smallest value within the selected column
- `MAX()` - returns the largest value within the selected column
- `COUNT()` - returns the number of rows in a set
- `SUM()` - returns the total sum of a numerical column
- `AVG()` - returns the average value of a numerical column

Aggregate functions ignore null values (except for `COUNT()`).


## SQL MIN() and MAX() Functions

Find the lowest price in the Price column:

`SELECT MIN(Price) FROM Products;`

Find the highest price in the Price column:

`SELECT MAX(Price) FROM Products;`

## Set Column Name (Alias)

When you use `MIN()` or `MAX()`, the returned column will not have a descriptive name. To give the column a descriptive name, use the `AS` keyword:

### Example

`SELECT MIN(Price) AS SmallestPrice FROM Products;`

## The SQL COUNT() Function

The `COUNT()` function returns the number of rows that matches a specified criterion.

`SELECT COUNT(*)  FROM Products;`

### Specify Column

You can specify a column name instead of the asterix symbol `(*)`.

If you specify a column name instead of `(*)`, NULL values will not be counted.

`SELECT COUNT(ProductName) FROM Products;`
`SELECT COUNT(ProductID)  FROM Products  WHERE Price > 20;
### Ignore Duplicates

`SELECT COUNT(DISTINCT Price) FROM Products;`

#Important_study

```plsql
SELECT COUNT(*) AS [Number of records], CategoryID
FROM Products
GROUP BY CategoryID;
```


![[WhatsApp Image 2024-10-04 at 11.22.18 PM.jpeg]]

SELECT AVG(Price) AS [average price]
FROM Products;

square bracket used for double word no need of [ ] if it is a  single word

Return all products with a higher price than the average price:
```plsql
SELECT * FROM Products  
WHERE price > (SELECT AVG(price) FROM Products);
```

## Using the [] Wildcard

The `[]` wildcard returns a result if _any_ of the characters inside gets a match.

Return all customers starting with either "b", "s", or "p":

```plsql
SELECT * FROM Customers  
WHERE CustomerName LIKE '[bsp]%';
```

## Using the - Wildcard

The `-` wildcard allows you to specify a range of characters inside the `[]` wildcard.

Return all customers starting with "a", "b", "c", "d", "e" or "f":

```plsql
SELECT * FROM Customers  
WHERE CustomerName LIKE '[a-f]%';
```

## The SQL IN Operator
```plsql
SELECT * FROM Customers  
WHERE Country IN ('Germany', 'France', 'UK');
```

## NOT IN

```plsql
SELECT * FROM Customers  
WHERE Country NOT IN ('Germany', 'France', 'UK');
```

Return all customers that have an order in the [**Orders**](https://www.w3schools.com/sql/trysql.asp?filename=trysql_orders) table:

```plsql
SELECT * FROM Customers  
WHERE CustomerID IN (SELECT CustomerID FROM Orders);
```

# SQL Aliases

```plsql
SELECT CustomerID AS ID  
FROM Customers;
```

Using \[square brackets] for aliases with space characters:
```plsql
SELECT ProductName AS [My Great Products]  
FROM Products;
```

SQL Joins
# SQL Joins


```plsql
SELECT Orders.OrderID, Customers.CustomerName, Orders.OrderDate  
FROM Orders  
INNER JOIN Customers ON Orders.CustomerID=Customers.CustomerID;
```


- `(INNER) JOIN`: Returns records that have **matching values in both tables**
- `LEFT (OUTER) JOIN`: Returns all records from the left table, and the matched records from the right table
- `RIGHT (OUTER) JOIN`: Returns all records from the right table, and the matched records from the left table
- `FULL (OUTER) JOIN`: Returns all records when there is a match in either left or right table


```run-python
print("apple")
print("Vault path:", @vault_path)
```




----



# generated by gpt

Here are some basic Oracle SQL commands to get you started, categorized by their functionality.

---

### 1. **Data Retrieval (SELECT Statements)**

- **Select All Columns**:
    
    ```sql
    SELECT * FROM table_name;
    ```
    
- **Select Specific Columns**:
    
    ```sql
    SELECT column1, column2 FROM table_name;
    ```
    
- **Using WHERE Clause (Filtering Rows)**:
    
    ```sql
    SELECT * FROM table_name WHERE condition;
    ```
    
- **Ordering Results (ORDER BY)**:
    
    ```sql
    SELECT * FROM table_name ORDER BY column1 ASC, column2 DESC;
    ```
    
- **Limiting Results (ROWNUM)**:
    
    ```sql
    SELECT * FROM table_name WHERE ROWNUM <= 5;
    ```
    

---

### 2. **Data Definition Language (DDL)**

- **Create Table**:
    
    ```sql
    CREATE TABLE table_name (
      column1 datatype,
      column2 datatype,
      ...
    );
    ```
    
- **Alter Table (Add Column)**:
    
    ```sql
    ALTER TABLE table_name ADD column_name datatype;
	
	ALTER TABLE employees ADD phone_number VARCHAR2(15);
    ```
    
- **Drop Table**:
    
    ```sql
    DROP TABLE table_name;
    ```
    

---

### 3. **Data Manipulation Language (DML)**

- **Insert Data**:
    
    ```sql
    INSERT INTO table_name (column1, column2) VALUES (value1, value2);
    ```
    
- **Update Data**:
    
    ```sql
    UPDATE table_name SET column1 = value1 WHERE condition;
    ```
    
- **Delete Data**:
    
    ```sql
    DELETE FROM table_name WHERE condition;
    ```
    

---

### 4. **Transaction Control**

- **Commit**: Save all changes made in the current transaction.
    
    ```sql
    COMMIT;
    ```
    
- **Rollback**: Undo changes in the current transaction.
    
    ```sql
    ROLLBACK;
    ```
    

---

### 5. **Basic Functions**

- **Aggregate Functions**:
    
    - **Count**: Counts the number of rows.
        
        ```sql
        SELECT COUNT(*) FROM table_name;
        ```
        
    - **Sum**: Adds up values.
        
        ```sql
        SELECT SUM(column_name) FROM table_name;
        ```
        
    - **Average**: Calculates the average value.
        
        ```sql
        SELECT AVG(column_name) FROM table_name;
        ```
        
- **String Functions**:
    
    - **UPPER**: Converts text to uppercase.
        
        ```sql
        SELECT UPPER(column_name) FROM table_name;
        ```
        
    - **LOWER**: Converts text to lowercase.
        
        ```sql
        SELECT LOWER(column_name) FROM table_name;
        ```
        
    - **Concatenate**: Joins two strings.
        
        ```sql
        SELECT CONCAT(column1, column2) FROM table_name;
        ```
        

---

### 6. **Join Operations**

- **Inner Join**:
    
    ```sql
    SELECT a.column1, b.column2 
    FROM table1 a 
    INNER JOIN table2 b ON a.common_column = b.common_column;
    ```
    
- **Left Join**:
    
    ```sql
    SELECT a.column1, b.column2 
    FROM table1 a 
    LEFT JOIN table2 b ON a.common_column = b.common_column;
    ```
    

---

These commands cover the basics of Oracle SQL, allowing you to create, retrieve, and manage data in a database. Let me know if you want more detailed examples or additional commands!

## table 1
coding form the beginning
```sql
CREATE TABLE employees (
  employee_id NUMBER(10) PRIMARY KEY,
  first_name VARCHAR(50),
  last_name VARCHAR(50),
  email VARCHAR(100) UNIQUE,
  hire_date DATE,
  job_id VARCHAR(10),
  salary NUMBER(10, 2),
  department_id NUMBER(10)
);
```

`Table created.`


```sql
INSERT INTO employees (employee_id, first_name, last_name, email, hire_date, job_id, salary, department_id) 
VALUES (1, 'John', 'Doe', 'john.doe@example.com', TO_DATE('2022-01-15', 'YYYY-MM-DD'), 'IT_PROG', 5000, 10);

INSERT INTO employees (employee_id, first_name, last_name, email, hire_date, job_id, salary, department_id) 
VALUES (2, 'Jane', 'Smith', 'jane.smith@example.com', TO_DATE('2021-05-10', 'YYYY-MM-DD'), 'HR_MAN', 6000, 20);

INSERT INTO employees (employee_id, first_name, last_name, email, hire_date, job_id, salary, department_id) 
VALUES (3, 'Alice', 'Johnson', 'alice.johnson@example.com', TO_DATE('2023-07-01', 'YYYY-MM-DD'), 'FIN_ANAL', 5500, 10);

```


`1 row(s) inserted.` 
`1 row(s) inserted.`
`1 row(s) inserted.`


```sql
select * from employees;
```

| EMPLOYEE_ID | FIRST_NAME | LAST_NAME | EMAIL                     | HIRE_DATE | JOB_ID   | SALARY | DEPARTMENT_ID |
| ----------- | ---------- | --------- | ------------------------- | --------- | -------- | ------ | ------------- |
| 1           | John       | Doe       | john.doe@example.com      | 15-JAN-22 | IT_PROG  | 5000   | 10            |
| 2           | Jane       | Smith     | jane.smith@example.com    | 10-MAY-21 | HR_MAN   | 6000   | 20            |
| 3           | Alice      | Johnson   | alice.johnson@example.com | 01-JUL-23 | FIN_ANAL | 5500   | 10            |


```sql
SELECT first_name, last_name, salary 
FROM employees 
WHERE department_id = 10;

```

| FIRST_NAME | LAST_NAME | SALARY |
| ---------- | --------- | ------ |
| John       | Doe       | 5000   |
| Alice      | Johnson   | 5500   |

**Update Salary**:

```sql
UPDATE employees 
SET salary = salary * 1.1 
WHERE job_id = 'IT_PROG';
```


`1 row(s) updated.`




```sql
DELETE FROM employees 
WHERE employee_id = 3;
```


`1 row(s) deleted.`

```sql
SELECT department_id, COUNT(*) AS employee_count 
FROM employees 
GROUP BY department_id;
```

| DEPARTMENT_ID | EMPLOYEE_COUNT |
| ------------- | -------------- |
| 10            | 1              |
| 20            | 1              |

to commit

```sql
commit;
```



## table 2

```sql
CREATE TABLE departments (
  department_id NUMBER PRIMARY KEY,
  department_name VARCHAR2(50)
);
```

```sql
INSERT INTO departments (department_id, department_name) VALUES (10, 'IT');
INSERT INTO departments (department_id, department_name) VALUES (20, 'HR');
INSERT INTO departments (department_id, department_name) VALUES (30, 'Sales');
INSERT INTO departments (department_id, department_name) VALUES (40, 'Marketing');
```

```sql
select * from departments;
```

|DEPARTMENT_ID|DEPARTMENT_NAME|
|---|---|
|10|IT|
|20|HR|
|30|Sales|
|40|Marketing|

### Inner Join Example

Now, let's perform an `INNER JOIN` to combine data from `employees` and `departments` based on `department_id`.

```sql
select * from employees;
select * from departments;
SELECT e.employee_id, e.first_name, e.last_name, e.salary, d.department_name
FROM employees e
INNER JOIN departments d ON e.department_id = d.department_id;
```

|EMPLOYEE_ID|FIRST_NAME|LAST_NAME|SALARY|DEPARTMENT_NAME|
|---|---|---|---|---|
|4|Michael|Brown|4500|Sales|
|5|Emma|Williams|4800|Marketing|
|6|Daniel|Lee|5200|IT|
|1|John|Doe|5000|IT|
|2|Jane|Smith|6000|HR|
|3|Alice|Johnson|5500|IT|
