Parallelism in Databases 

• ==Data can be partitioned across multiple disks== for parallel I/O. 
• Individual ==relational operations== (e.g., sort, join, aggregation) can be executed in parallel 
• data can be partitioned and each processor can work independently on its own partition. • Queries are expressed in ==high level language== (SQL, translated to relational algebra) 
• makes parallelization easier. 
• Different ==queries can be run in parallel== with each other. Concurrency control takes care of conflicts. 
• Thus, databases naturally lend themselves to parallelism

I/O Parallelism 

**Purpose**: Reduces data retrieval time by ==spreading data across multiple disks==.
• The relations on multiple disks. 
• Horizontal partitioning – tuples of a relation are divided among many disks such that each tuple resides on one disk. 
**Round-robin:** Distributes tuples ==evenly by assigning each tuple to a disk based on a modulo operation==.

**Hash partitioning**: Distributes tuples based on hash values ==derived from specific attributes==.

**Range partitioning**: Uses attribute ranges to assign tuples to disks ==based on a partitioning vector==.

## **Interquery Parallelism** 
parallelism among queries


• Increases transaction throughput; used primarily to scale up a transaction processing system to support a larger number of transactions per second. 
• Easiest form of parallelism to support, particularly in a shared-memory parallel database, because even sequential database systems support concurrent processing. 
• More complicated to implement on shared-disk or shared-nothing architectures 
• Locking and logging must be coordinated by passing messages between processors. 
• Data in a local buffer may have been updated at another processor. 
• Cache-coherency has to be maintained — reads and writes of data in buffer must find latest version of data.