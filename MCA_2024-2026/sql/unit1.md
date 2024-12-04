### **Subqueries**

**Single-row subqueries**: Returns one row.

```sql
SELECT * FROM employees WHERE salary = (SELECT MAX(salary) FROM employees);
```

**Multi-row subqueries**: Returns multiple rows.

```sql
SELECT * FROM employees WHERE department_id IN (SELECT department_id FROM departments WHERE location = 'New York');
```

**Correlated subqueries**: Uses outer query values.

```sql
SELECT * FROM employees e WHERE salary > (SELECT AVG(salary) FROM employees WHERE department_id = e.department_id);
```

### **Joins**

**Inner Join**: Matches rows with common values.
```sql
SELECT e.name, d.department_name 
FROM employees e 
INNER JOIN departments d ON e.department_id = d.department_id;
```

- **Left Join**: Includes all rows from the left table and matched rows from the right.
- **Right Join**: Includes all rows from the right table and matched rows from the left.
- **Full Join**: Includes all rows from both tables.

#### **Set Operations**

- Combine results of two or more SELECT queries.
    - **UNION**: Removes duplicates.
    - **UNION ALL**: Includes duplicates.
    - **INTERSECT**: Common rows only.
    - **EXCEPT**: Rows in the first query but not in the second.

```sql
SELECT name FROM employees 
UNION 
SELECT name FROM contractors;
```

#### **EXISTS**

- Tests for the existence of rows in a subquery

```sql
SELECT * FROM employees e 
WHERE EXISTS (SELECT 1 FROM departments d WHERE e.department_id = d.department_id);
```

#### **Views**

- **Definition**: A virtual table based on a query.

```sql
CREATE VIEW employee_view AS 
SELECT name, salary FROM employees WHERE department_id = 10;
SELECT * FROM employee_view;
```

#### **WITH Clause**

- **Definition**: Used for defining temporary named subqueries.

```sql
WITH sales AS (
    SELECT employee_id, SUM(amount) as total_sales 
    FROM sales_data 
    GROUP BY employee_id
)
SELECT * FROM sales WHERE total_sales > 10000;

```

#### **Recursion in SQL**

- Used with the `WITH` clause to perform recursive queries

```sql
WITH RECURSIVE employee_hierarchy AS (
    SELECT employee_id, manager_id, 1 AS level 
    FROM employees WHERE manager_id IS NULL 
    UNION ALL 
    SELECT e.employee_id, e.manager_id, eh.level + 1 
    FROM employees e 
    INNER JOIN employee_hierarchy eh ON e.manager_id = eh.employee_id
)
SELECT * FROM employee_hierarchy;
```

