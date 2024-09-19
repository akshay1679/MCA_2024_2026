
**data warehouse** -> Storage of data
1. Collection of data and stores data in form of tables
2. Deals with operational or transactional data can store MB's or GB's of data 
3. eg :- A student database can store details of student and retives information based queries
The database is related to **OLTP** (Online Transactional Processing)

### Data warehouse

-> Stores Historical data
-> Can store Tb's of data
-> for eg to analyse placement records we use Data warehouse for it is used for **OLAP**            (Online Analytical Processing)


A system that stores ==what to write==  data fro operational data







### Subject oriented
Provide a ==concide== view around a particular subject such as customer product or sales inside of global organisation ongoing operations.

---
### Integrated

A data warehouse intiger heterogeneous data from various heterogeneous data sources like DBMS ,flat files on a transaction record and all these are combined in relational database.

It requires performing data cleaning and integration during data warehousing to ensure consistency among different data sources 

it must be contestant and readable and coded

integration from different sources we are combining into data

---
### Time variant

historical info is kept in data warehouse for eg if we want to retrieve old data that is 3/6 months as per the request of the user this is called time variant it will contain daily data weekly data and monthly data yearly data

---
### Non volatile
Data warehouse provides permanent storage of data
***What is data warehouse what are the char of data warehouse ?***

it also that when new data is added data is not erased or removed
A data warehouse is kept separate from operational database and those data warehouse doesn't represent regular changes in operational database

---

### ETL process ( Extract ,Transform & load)

It is a mechanism of extracting information from sources system and integrating it into the data warehouse is commonly called ETL

Staging area is extremely important

Q. ==How data can be loaded into data warehouse through ________________?==
ans: ETL process
### Extract

- it is the operation of extracting information from a source system for further use in a data warehouse environment
- This is first stage of ETL process
- The data has to be extracted several times in a periodic manner to supply all the changed data to the warehouse and keep it up-to-date.

### Cleaning 
- Cleaning stage is very important in data warehouse technique bic it is supposed to ==improve data  quality==
- Primary data cleaning features found in ETL tools are ==Rectification== and ==homogenization==
- there are specific dictonaries to rectify typing mistakes and to recognize synonyms and define the appropriate association between values

### Transformation
- Converts record from its operational source format into a particular data warehouse format
- Ie data extracted from the source server is raw and not usable in its original form.There fore it needs to be ==cleaned== ==mapped== and ==transformed== 
- It adds value and changes data such that insightful BI reports can be generated