create or --Creating the object employee_type
create type employee_type as object (employee_id number(5), first_name varchar(20));
/
--Deleting the above type from the database
drop type employee_type;

--Creating the object address_type
create type address_type as object (street varchar(10), city varchar(10));
/

--Creating the table by incorporating object and relational columns
create table emp_tbl(emp_det employee_type, add1 address_type, sal number(7,2));

--To confirm the above table
select * from tab;
Describe emp_tbl;


--To insert a record into the above table
insert into emp_tbl values(employee_type(1014, 'Gouri'), address_type('Chengr','Alappuzha'),45000);

--To display the contents of the table
select * from emp_tbl;
select p.emp_det.employee_id, p.emp_det.first_name, p.add1.street, p.add1.city,sal from emp_tbl p;

***********************************************


create type name_type as object(eid number(2), f_name varchar(20));
/
create type add_type as object (street varchar(20), city varchar(20), pin number(6));
/
create type emp_type as object(emp_det name_type, emp_add add_type, sal number(7,2));
/
create table emp_tbl of emp_type;

insert into emp_tbl values(emp_type(name_type(11,'Raj'),add_type('Edappally','EKM',682024),25000));

select e.emp_det.eid as ID ,e.emp_det.f_name as First_name, e.emp_add.street as Address,
e.emp_add.city, e.emp_add.pin, sal from emp_tbl e;

*************************************************
--Methods with Object types. 
create or replace type Per_Obj as object (f_name varchar(20), l_name varchar(20), dob date, member function
get_age return number);
/
create or replace type body Per_obj as member function get_age return number as 
begin
return Trunc(Months_Between(Sysdate,dob)/12);
end get_age;
end;
/
create table Per_tbl of Per_Obj;

insert into Per_tbl values(Per_obj('Sheryas', 'CV', TO_DATE('13/06/1999','DD/MM/YYYY')));

select p.f_name, p.get_age() as Age from Per_tbl p;

*******************************************************
*********************************************
--Inheritance

CREATE OR REPLACE TYPE PersonObj AS OBJECT (
  first_name  VARCHAR2(50),
  last_name   VARCHAR2(50),
  date_of_birth  DATE,
  MEMBER FUNCTION getAge RETURN NUMBER  -- declaration
)not final; 
/

CREATE OR REPLACE TYPE BODY PersonObj AS     -- define person
  MEMBER FUNCTION getAge RETURN NUMBER AS
  BEGIN
    RETURN Trunc(Months_Between(Sysdate, date_of_birth)/12);
  END getAge;
END;
/

create or replace type empObj under  PersonObj(
dept char(10), salary number(10,2));
/

CREATE TABLE people (
  id      NUMBER(10) NOT NULL,
  person  empObj
);


INSERT INTO people
VALUES (1, empObj('Fouzia','M S',
        TO_DATE('01/01/2002','DD/MM/YYYY'), 'IT', 60000));

SELECT p.id,
       p.person.first_name,
       p.person.getAge() age, p.person.dept, p.person.salary
FROM   people p;

