1. W.A.P a java program to create a class named employee with an instance variable of empid, empname, designation department define a methord to display the details of the employee stored using the object .Store three employee details using three objects

```java
class Employee{ 
  int empid;  
  String empname, desig, dept;  
  void display( )  
  {  
  System.out.println("Emp ID: "+ empid);  
  System.out.println("Emp Name: "+ empname);  
  System.out.println("Emp designation: "+ desig);  
  System.out.println("Emp Department: "+ dept);  
  }  

  void insert( )  
  {  
  Scanner sc = new Scanner(System.in);             //==scanner creating==
  System.out.print("Enter Employee Id: ");  
  empid = sc.nextInt();  
  System.out.print("Enter the name: ");  
  empname = sc.nextline();  
  System.out.print("Enter the Designation: ");  
  desig = sc.nextline();                   // ==string insert==
  System.out.print("Enter the Department: ");  
  dept = sc.nextline();  

  }  
  }  


  class Empdemo  
  {  
  public static void main(string args[ ])  
  {  
	  Employee e1 = Employee;  
	   Employee e2 = Employee;  
	   Employee e3 = Employee;  

  System.out.println("Employee 1")  
  e1.insert();  
  System.out.println("Employee 2")  
  e2.insert();  
  System.out.println("Employee 3")  
  e3.insert();  

  System.out.println("The details are:  ")  
  System.out.println("Employee 1 :")  
  e1.display();  
  System.out.println("Employee 2 :")  
  e.display();  
  System.out.println("Employee 3 :")  
  e3.display();  

  }  
  }  



```
 