

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
