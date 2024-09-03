
# INTERACTIVE SQL PART -1
### Def : 

table is database object that holds user data. The simplest analogy is to think of a table as a spreadsheet, The cells of the spreadsheet equate to the columns of a table having a specific data type associated with them. 

## Basic data  type

### CHAR(size)
 
 1. This data type is used to store character strings values of fixed length. The size in ‘ | brackets determines the number of characters the cell can hold. 
 2. ==The data held is right- ‘ padded with spaces to whatever length specified.==
 3. in case of ==Name CHAR(60)== ==> data 20 characters in length, then the entry will be padded with 40 characters worth of spaces.
 4. [[Binary att]]
### VARCHAR 
1. used to store variable length alphanumeric data. 
2. can hold upto 4000 characters.
3. ==values using non-padded comparison semantics==
4. CHAR is much faster than VARCHAR, sometimes up to 50%.
### DATE

1. standard format is DD-MM-YY as in 21-JUN-04.
2. By default, the time in a date field is 12:00:00 am, if no time portion is specified.
3. The default date for a date field is the first day of  the current month. 
###  NUMBER(p,s)
==The precision (p), determines the maximum length of the data, whereas the scale (S), determines the number of places to the right of the decimal. ==
1. numbers may be expressed in two ways: first, with the numbers 0 to 9, the signs + and -, and a decimal point (.); second, in scientific notation
### LONG
1. This data type is used to store variable.length character strings containing upto 2 GB. LONG data can be used to store arrays of binary data in ASCII format
2. ==Only one LONG value can be defined per table. ==
3. LONG values ==cannot be used== in subqueries, functions, ; expressions, where clauses or indexes and the normal chare functions such as | SUBSTR cannot be applied to LONG values. A table containing a LONG value cannot L V‘bfl:lgstered


---


## CREATE TABLE Command
1. The ==CREATE TABLE ==Command  defines each column of the table uniquely. Each column has an minimum of three attributes **a name, datatype and size**  (i.e. column width). 
### Syntax:



Each column must have a datatype. The column should either be defined as null or not null and if this value is left blank, the database assumes ==null== as the default.

## Inserting Data Into Tables

### Syntax
==INSERT INTO  tablename (columnname 1, columnname 2, columnname 3) VALUES (expression 1,expression 2);==

1. Character expressions placed within the INSERT INTO statement must be enclosed in single quotes 
2. INSERT INTO SQL sentence, table columns and values have a one to one relationship
3. in an INSERT INTO SQL sentence if there are exactly the same numbers of values as there are columns and the values are sequenced in exactly in accordance with the data type of the table columns, there is no need to indicate the column names.
4. However, if there are less values being described than there are columns in the table then it is mandatory to indicate both the table column name and its corresponding value in the INSERT INTO SQL sentence.


---


## VIEWING DATA IN THE TABLES
### syntax

SELECT ColumnName 1 TO ColumnName N FROM TableName;

==>ColumnName 1 to ColumnName N represents table column names.
### note

1. when data from all rows and columns from the table are to be viewed the syntax of the SELECT statement will be: SELECT * FROM **TableName**;

2. Oracle allows the use of the Meta character asterisk (*), ==this is expanded by Oracle to mean all rows and all columns in the table.==

### Filtering Table Data
+  [[Sel col & all row]] 
+ [[Sel row & all col]] 
+ [[Sel col & sel row]]


---


## ELIMINATING DUPLICATE ROWS WHEN USING A SELECT STATEMENT

### DISTINCT:
1. The **DISTINCT** clause can only be used with select statements.

#### Syntax: 

+ SELECT DISTINCT **ColumnNamel**, **ColumnName2** FROM **TableName**;

#### Syntax:
+ SELECT DISTINCT * FROM **TableName**;

---

## SORTING DATA IN A TABLE:

1. The rows retrieved from the  the table will be sorted in either ascending or descending order depending on the condition specified in the SELECT sentence.
### Syntax: 
+ SELECT * FROM  **TableName** ORDER BY **ColumnNamel**, **ColumnName2**  **[Sort Order]**;

2. The ORDER BY clause sorts the result set based on the columns specified. The ORDER BY clause can only be used in SELECT statements.
3. example => SELECT * FROM BRANCH_MSTR ORDER BY ==NAME==
4. example => SELECT * FROM BRANCH_MSTR 0R’DER BY NAME ==DESC==;

---

## CREATING A TABLE FROM A TABLE

### Syntax: 
+ CREATE TABLE **TableName** (**ColumnName**, ** ColumnName**) AS SELECT **ColumnName**, **ColumnName** FROM **TableName**
### note:
+ If the Source Table Acct_Mstr was populated with records then the target table Acet_Dtls will also be populated with the same.

1. The Source table is the table identified in the SELECT section of this SQL sentence. The Target table is one identified in the **CREATE** sectin of this SQL sentence. This SQL sentence populates the Target table with data from the Source table.

2. To create a Target table without the records from the source table (i.e. create the structure only), the select statement must have a **WHERE** clause. The WHERE clause must specify a condition that cannot be satisfied.
    #### example:
    + CREATE TABLE ACCT_DTLS (ACCT_NO, BRANCH_NO, BALANCE) AS SELECT ACCT_NO, BRANCH_NO, CURBAL FROM ACCT_MSTR WHERE ==1=2==;


---

## INSERTING DATA INTO A TABLE FROM ANOTHER TABLE :

### Syntax:
+ INSERT INTO **TableName** SELECT **ColumnName 1**, **ColumnName N** FROM **TableName**;


---


## DELETE OPERATION :

1. the verb **DELETE** in SQL is used to remove either: 
	* All the rows from a table 
	          OR 
	* A set of rows from a table

### Syntax:
+ DELETE FROM **TableName** WHERE **Condition**;


### Removal Of Specific Row(s) Based On The Data Held By The Other Table :

+ ==Sometimes it is desired to delete records in one table based on values in another table. Since it is not possible to list more than one table in the FROM clause while performing a delete, the EXISTS clause can be used.==

#### Example:
+ DELETE FROM ADDR_DTLS WHERE EXISTS(SELECT FNAME FROM CUST_MSTR WHERE CUST_MSTR.CUST_NO = ADDR_DTLS.CODE_NO AND CUST_MSTR.FNAME = 'Ivan’);


# Possible questions

