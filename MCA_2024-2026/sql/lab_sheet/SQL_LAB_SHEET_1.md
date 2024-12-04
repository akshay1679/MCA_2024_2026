# nov 10 lab exam


Create MEMBERS Table

sql > CREATE TABLE MEMBERS (Mcode NUMBER(4) PRIMARY KEY,Mname VARCHAR(20),Mphone NUMBER(10));

Create BOOKS Table

sql > CREATE TABLE BOOKS (Bcode NUMBER(4) PRIMARY KEY,Btitle VARCHAR(20),Bauthor VARCHAR(20),Bpub VARCHAR(10),Bprice NUMBER(7,2));


Create TRANS Table
 
sql > CREATE TABLE TRANS (Tcode NUMBER(4) PRIMARY KEY,TMcode NUMBER(4),TBcode NUMBER(4),Tissdate DATE, Tduedate DATE,Tretdate DATE,Tfine NUMBER(7,2),FOREIGN KEY (TMcode) REFERENCES MEMBERS(Mcode), FOREIGN KEY (TBcode) REFERENCES BOOKS(Bcode));

Step 3: Display the Structure of the Tables

sql > DESC MEMBERS;

 Name                                      Null?    Type
 ----------------------------------------- -------- ----------------------------
 MCODE                                     NOT NULL NUMBER(4)
 MNAME                                              VARCHAR2(20)
 MPHONE                                             NUMBER(10)

sql > DESC BOOKS;

 Name                                      Null?    Type
 ----------------------------------------- -------- ----------------------------
 BCODE                                     NOT NULL NUMBER(4)
 BTITLE                                             VARCHAR2(20)
 BAUTHOR                                            VARCHAR2(20)
 BPUB                                               VARCHAR2(10)
 BPRICE                                             NUMBER(7,2)

sql > DESC TRANS;


 Name                                      Null?    Type
 ----------------------------------------- -------- ----------------------------
 TCODE                                     NOT NULL NUMBER(4)
 TMCODE                                             NUMBER(4)
 TBCODE                                             NUMBER(4)
 TISSDATE                                           DATE
 TDUEDATE                                           DATE
 TRETDATE                                           DATE
 TFINE                                              NUMBER(7,2)

Step 4: Modify the Size of the Column Btitle to VARCHAR(40)

SQL> ALTER TABLE BOOKS MODIFY Btitle VARCHAR(40);

Step 5: Display the Modified Structure of the Books Table

SQL> DESC BOOKS;
```**SQL**
 Name                                      Null?    Type
 ----------------------------------------- -------- ----------------------------
 BCODE                                     NOT NULL NUMBER(4)
 BTITLE                                             VARCHAR2(40)
 BAUTHOR                                            VARCHAR2(20)
 BPUB                                               VARCHAR2(10)
 BPRICE                                             NUMBER(7,2)
```

Step 6: Enter 5 Records into MEMBERS and BOOKS Tables

INSERT INTO MEMBERS (Mcode, Mname, Mphone) VALUES (1, 'Alice', 9876543210);
INSERT INTO MEMBERS (Mcode, Mname, Mphone) VALUES (2, 'Bob', 9876543211);
INSERT INTO MEMBERS (Mcode, Mname, Mphone) VALUES (3, 'Charlie', 9876543212);
INSERT INTO MEMBERS (Mcode, Mname, Mphone) VALUES (4, 'David', 9876543213);
INSERT INTO MEMBERS (Mcode, Mname, Mphone) VALUES (5, 'Eve', 9876543214);

INSERT INTO BOOKS (Bcode, Btitle, Bauthor, Bpub, Bprice) VALUES (1, 'Book A', 'Author A', 'Publisher A', 100.00);
INSERT INTO BOOKS (Bcode, Btitle, Bauthor, Bpub, Bprice) VALUES (2, 'Book B', 'Author B', 'Publisher B', 150.00);
INSERT INTO BOOKS (Bcode, Btitle, Bauthor, Bpub, Bprice) VALUES (3, 'Book C', 'Author C', 'Publisher C', 200.00);
INSERT INTO BOOKS (Bcode, Btitle, Bauthor, Bpub, Bprice) VALUES (4, 'Book D', 'Author D', 'Publisher D', 250.00);
INSERT INTO BOOKS (Bcode, Btitle, Bauthor, Bpub, Bprice) VALUES (5, 'Book E', 'Author E', 'Publisher E', 300.00);

this wont work bic

SQL> INSERT INTO BOOKS (Bcode, Btitle, Bauthor, Bpub, Bprice) VALUES (1, 'Book A', 'Author A', 'Publisher A', 100.00);
INSERT INTO BOOKS (Bcode, Btitle, Bauthor, Bpub, Bprice) VALUES (1, 'Book A', 'Author A', 'Publisher A', 100.00)
                                                                                          *
ERROR at line 1:
ORA-12899: **value too large for column** "SCOTT"."BOOKS"."BPUB" (actual: 11,
maximum: 10)

this is bic 

SQL> desc books
```SQL
 Name                                      Null?    Type
 ----------------------------------------- -------- ----------------------------
 BCODE                                     NOT NULL NUMBER(4)
 BTITLE                                             VARCHAR2(40)
 BAUTHOR                                            VARCHAR2(20)
 BPUB                                               VARCHAR2(10)
 BPRICE                                             NUMBER(7,2)
```
b pub has only 10 values and it needs more than 10 to insert this column

Step 7: List the Records from MEMBERS and BOOKS Tables
```SQL
SELECT * FROM MEMBERS;
SELECT * FROM BOOKS;
```

Step 8: Update the Phone Number of a Specific Member

```SQL
UPDATE MEMBERS SET Mphone = 9876543215 WHERE Mcode = 1;
```

Step 9: Update the Price of a Particular Book

```SQL
UPDATE BOOKS SET Bprice = 120.00 WHERE Bcode = 1;
```

Step 10: Save the Changes and List All Records

```SQL
COMMIT;
SELECT * FROM MEMBERS;
SELECT * FROM BOOKS;
```
Step 11: Delete the Details of a Specific Member

```SQL
DELETE FROM MEMBERS WHERE Mcode = 5;
```

Step 12: List the Records from the MEMBERS Table

```SQL
SELECT * FROM MEMBERS;
```

Step 13: Undo the Changes Made and List MEMBERS Table

```SQL
ROLLBACK;
SELECT * FROM MEMBERS;
```

Step 14: Enter 5 Records into the TRANS Table

```SQL
INSERT INTO TRANS (Tcode, TMcode, TBcode, Tissdate, Tduedate, Tretdate, Tfine) VALUES (1, 1, 1, SYSDATE, SYSDATE + 5, SYSDATE + 3, 0);
INSERT INTO TRANS (Tcode, TMcode, TBcode, Tissdate, Tduedate, Tretdate, Tfine) VALUES (2, 2, 2, SYSDATE, SYSDATE + 5, SYSDATE + 4, 0);
INSERT INTO TRANS (Tcode, TMcode, TBcode, Tissdate, Tduedate, Tretdate, Tfine) VALUES (3, 3, 3, SYSDATE, SYSDATE + 5, SYSDATE + 2, 0);
INSERT INTO TRANS (Tcode, TMcode, TBcode, Tissdate, Tduedate, Tretdate, Tfine) VALUES (4, 4, 4, SYSDATE, SYSDATE + 5, SYSDATE + 5, 0);
INSERT INTO TRANS (Tcode, TMcode, TBcode, Tissdate, Tduedate, Tretdate, Tfine) VALUES (5, 1, 5, SYSDATE, SYSDATE + 5, SYSDATE + 6, 10);
```

Step 15: Save All Changes Made

COMMIT;

Step 16: Create a New Table MEMBERS1 by Copying Data from MEMBERS

```SQL
SQL> CREATE TABLE MEMBERS1  AS SELECT * FROM MEMBERS;

Table created.

SQL> SELECT * FROM MEMBERS1;

     MCODE MNAME                    MPHONE
---------- -------------------- ----------
         1 Alice                9876543215
         2 Bob                  9876543211
         3 Charlie              9876543212
         4 David                9876543213
         5 Eve                  9876543214

SQL> SELECT * FROM MEMBERS;

     MCODE MNAME                    MPHONE
---------- -------------------- ----------
         1 Alice                9876543215
         2 Bob                  9876543211
         3 Charlie              9876543212
         4 David                9876543213
         5 Eve                  9876543214
```

**CREATE TABLE MEMBERS1 AS SELECT * FROM MEMBERS;**

Step 17: Display the Structure of MEMBERS1, Remove Column Mphone

DESC MEMBERS1;

ALTER TABLE MEMBERS1 DROP COLUMN Mphone;

DESC MEMBERS1;

Step 18: Rename the Table MEMBERS1 to MEMBERS2

ALTER TABLE MEMBERS1 RENAME TO MEMBERS2;

Step 19: Find the Result of the Command DESCRIBE MEMBERS1

DESC MEMBERS1;
```SQL
SQL> DESC MEMBERS1;
 Name                                      Null?    Type
 ----------------------------------------- -------- ----------------------------
 MCODE                                              NUMBER(4)
 MNAME                                              VARCHAR2(20)
 MPHONE                                             NUMBER(10)
```

Step 20: Remove the Table MEMBERS2
```SQL
SQL> DROP TABLE MEMBERS1;

Table dropped.
```
**DROP TABLE MEMBERS2;**

Step 21: List All Tables Created by the User SCOTT

SELECT table_name FROM user_tables;


```SQL
SQL> SELECT table_name FROM user_tables;

TABLE_NAME
------------------------------
DEPT
EMP
BONUS
SALGRADE
BOOK
STOCK_TB
ITEM_TB
SUP_TB
FLIGHT_TAB
PASS_TB
DEPT_TB

TABLE_NAME
------------------------------
EMP_TB
PURCHASE_TB
BANKTB
BANK
MARKS_TB
MARKS1
MARKS2
MARKS3
BNKLOAN
BNKLOAN1
BNKLOAN2
60 rows selected.
```















