
```PLSQL
DECLARE 
	Declare section (optional), used for declaring variables 
BEGIN 
	Executable section (commands) 
EXCEPTION
	Error handling section (optional) 
END;
/
```


**program 2**

--2. Write a PL/SQL program to display a welcome message along with a user name

```sql
Set serveroutput on

Declare
Na varchar(20);
Begin
Na:='Sachin';
Dbms_output.put_line('Welcome to pl sql'||Na);
End;
/
```

**program3**

--3. Write a PL/SQL program to display a welcome message after reading a user name

```plsql
Set serveroutput on
Declare
Na varchar(20);
Begin
Na:='&Enter_the_name';
Dbms_output.put_line('Welcome to plsql'||Na);
End;
/
```

**program_4**

--3. Write a PL/SQL program to display a welcome message after reading a user name

```plsql

```