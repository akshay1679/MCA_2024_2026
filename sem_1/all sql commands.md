
```sql
SELECT * FROM Customers  
WHERE Country = 'Spain' AND (CustomerName LIKE 'G%' OR CustomerName LIKE 'R%');
```


---

Select only the customers that are NOT from Spain:

```sql
SELECT * FROM Customers  
WHERE NOT Country = 'Spain';
```

---

## NOT IN

```sql
SELECT * FROM Customers  
WHERE City NOT IN ('Paris', 'London');
```


---

## How to Test for NULL Values?

`IS NULL` and `IS NOT NULL`

```sql
SELECT CustomerName, ContactName, Address  
FROM Customers  
WHERE Address IS NULL;
```


```sql
SELECT CustomerName, ContactName, Address  
FROM Customers  
WHERE Address IS NOT NULL;
```

---

## UPDATE Table

```sql
UPDATE Customers  
SET ContactName = 'Alfred Schmidt', City= 'Frankfurt'  
WHERE CustomerID = 1;
```

---

# DELETE Statement

```sql
DELETE FROM Customers WHERE CustomerName='Alfreds Futterkiste';
```


---
- `MIN()` - returns the smallest value within the selected column
- `MAX()` - returns the largest value within the selected column
- `COUNT()` - returns the number of rows in a set
- `SUM()` - returns the total sum of a numerical column
- `AVG()` - returns the average value of a numerical column

---

## MIN()

```sql
SELECT MIN(Price) AS SmallestPrice  
FROM Products;
```

---
- **`GROUP BY`** is used to combine rows into groups based on shared column values, mainly for summarizing data.
- **`ORDER BY`** simply sorts the output of a query without affecting its content.

---

How many _different_ prices are there in the `Products` table:

```sql
SELECT COUNT(DISTINCT Price)  
FROM Products;
```

---

