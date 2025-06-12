What Comes Under Big Data?

1. Black Box Data: component of airplanes
2. Social Media Data
3. Stock Exchange Data:
4. Search Engine Data: 
5. Power Grid Data: 

The data in it will be of three types.

1. Structured data: Relational data. 
2. Semi Structured data: XML data. 
3. Unstructured data: Word, PDF, Text, Media Logs.

Operational Big Data

1. MongoDB 
2. NoSQL 

Analytical Big Data

1.  Massively Parallel Processing (MPP) database systems
2. MapReduce

![[HADOOP- Big Data overview and Solutions.webp]]

Google solved this problem using an algorithm called MapReduce. This algorithm divides the task into small parts and assigns them to many computers, and collects the results from them which when integrated, form the result dataset.

==Doug Cutting== and his team developed an Open-Source Project called HADOOP.

written in ==java== 

designed to scale up 

## Hadoop Architecture


![[HADOOP- Big Data overview and Solutions 1.webp]]

[[HADOOP- Big Data overview and Solutions.pdf#page=8&rect=180,197,466,477|HADOOP- Big Data overview and Solutions, p.8]]

MapReduce  --> parallel programming model for writing distributed applications

 The MapReduce program runs on Hadoop which is an Apache open-source framework.

Hadoop Distributed File System (HDFS)  --> Based on the Google File System (GFS) 
 It is highly fault-tolerant and is designed to be deployed on low-cost hardware.
 provides high throughput 


Hadoop Common: These are ==Java libraries== and utilities required by other Hadoop modules. 

• Hadoop YARN: This is a framework for ==job scheduling and cluster resource management.==

## **Core Tasks Performed by Hadoop When Running Code Across a Cluster**

1. **Data Splitting**
    
    - Input data is divided into **directories and files**.
        
    - Files are then split into **uniform-sized blocks**, usually **128 MB** (older systems may use **64 MB**).
        
    - **➤ MCQ Tip**: Default block size is **128 MB**.
        
2. **Distributed Storage**
    
    - These blocks are distributed across various **cluster nodes** for parallel processing.
        
    - Ensures **data locality**, reducing network overhead.
        
3. **HDFS Supervision**
    
    - **HDFS (Hadoop Distributed File System)** operates **on top of the local file system**.
        
    - It **manages file distribution, replication, and access**.
        
    - **➤ MCQ Tip**: HDFS **does not replace**, but works **on top of** the existing file system.
        
4. **Block Replication**
    
    - Blocks are **replicated (default: 3 copies)** to ensure **fault tolerance**.
        
    - Helps **recover from hardware failures**.
        
    - **➤ MCQ Tip**: Default replication factor is **3**.
        
5. **Job Execution Check**
    
    - Hadoop monitors and checks if the **code executed successfully**.
        
    - If a task fails, it can be **re-executed on another node**.
        
6. **Sort Between Map and Reduce**
    
    - **Shuffling and Sorting** occur automatically after the **Map phase**.
        
    - This organizes intermediate output before it's sent to the **Reduce phase**.
        
    - **➤ MCQ Tip**: The **sort happens between Map and Reduce**, not during or after Reduce.
        
7. **Reducer Assignment**
    
    - Sorted data is **sent to specific reducer nodes**.
        
    - Reducers **aggregate and process** the final output.
        
8. **Debug Logs**
    
    - Hadoop writes **debugging logs** for every job.
        
    - These logs are useful for **monitoring** and **troubleshooting**.
        

---

### ✅ **MCQ-Focused Quick Facts:**

|Concept|MCQ Fact|
|---|---|
|Default Block Size|128 MB|
|Block Replication Factor|3 (by default)|
|HDFS Works On|On top of the local file system|
|Sorting Happens|Between Map and Reduce|
|Job Re-execution|On failure, tasks can be re-run on other nodes|
|HDFS Ensures|Data reliability and fault tolerance|

---

Let me know if you’d like a **PDF version** or a **flowchart/diagram** for visual learning.


Sure, here's your content properly formatted with the **most probable MCQ points** highlighted using `==highlight==` syntax:

---

### **Core Tasks Performed by Hadoop**

1. **Data Splitting**  
    Hadoop divides input data into **directories and files**, which are then split into blocks of uniform size.  
    ✅ **==Files are divided into uniform sized blocks of 128 MB or 64 MB (preferably 128 MB)==**
    
2. **Distributed Storage Across Cluster Nodes**  
    ✅ **==These file blocks are distributed across various cluster nodes==** to enable parallel processing.
    
3. **HDFS Supervision**  
    ✅ **==HDFS (Hadoop Distributed File System) runs on top of the local file system==**, managing data storage and access.
    
4. **Block Replication for Fault Tolerance**  
    ✅ **==Blocks are replicated across nodes==** to provide **fault tolerance** and handle hardware failures.
    
5. **Job Execution Monitoring**  
    Hadoop ensures that **==code is executed successfully==**, and failed tasks are retried automatically.
    
6. **Shuffle and Sort Phase**  
    ✅ **==A sort operation is performed between the map and reduce phases==**, known as the **shuffle and sort** stage.
    
7. **Data Routing to Reducers**  
    ✅ **==Sorted data is sent to specific reducer nodes==** for final aggregation and processing.
    
8. **Logging and Debugging**  
    ✅ **==Debugging logs are written for each job==**, useful for monitoring and troubleshooting.
    

---

This format makes it easier to identify key concepts that are likely to appear in multiple-choice questions. Would you like a quiz created from this content?