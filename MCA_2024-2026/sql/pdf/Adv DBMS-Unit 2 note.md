

---

## Parallel Databases

1. Introduction

- Parallel computing has become common due to ==affordable hardware== like processors, memory, and disks.

- Databases are now ==designed to handle large volumes of data==, including multimedia, which requires efficient data processing.

 Uses of parallel database systems:

- **Storage of large volumes data**: To accommodate growing data requirements.

- **Decision-support queries**: Processes complex, time-consuming queries faster.

- **High throughput for transaction processing:** Supports large-scale transactional systems.
- like Banking systems (processing financial transactions),E-commerce platforms (handling user orders and payments),Telecommunication systems (managing call records and data usage)





2. Parallelism in Databases

**Data partitioning**: Distributes ==data across multiple disks==, allowing parallel input/output (I/O) operations.

**Parallel execution of ==relational operations**:== Operations like sorting, joining, and aggregating can be processed concurrently.

**Processor independence:** Each processor ==operates on its own data partition without interference==.

**Concurrency control**: ==Manages conflicts== that may arise when running parallel queries.



3. I/O Parallelism

**Purpose**: Reduces data retrieval time by ==spreading data across multiple disks==.

Partitioning Techniques:

**Horizontal partitioning**: Splits tuples across disks, ==with each tuple residing on a single disk==.

**Round-robin:** Distributes tuples ==evenly by assigning each tuple to a disk based on a modulo operation==.

**Hash partitioning**: Distributes tuples based on hash values ==derived from specific attributes==.

**Range partitioning**: Uses attribute ranges to assign tuples to disks ==based on a partitioning vector==.




4. Interquery Parallelism

Interquery Parallelism 
• Queries/transactions execute in parallel with one another. 
• Increases transaction throughput; used primarily to scale up a transaction processing system to support a larger number of transactions per second. 
• Easiest form of parallelism to support, particularly in a shared-memory parallel database, because even sequential database systems support concurrent processing. 

• Locking and logging must be coordinated by passing messages between processors. 
• Data in a local buffer may have been updated at another processor. 
• Cache-coherency has to be maintained — reads and writes of data in buffer must find latest version of data


---
**Definition**: Enables multiple queries/transactions to run in parallel.

Goal: Increases transaction throughput, essential for scaling up transaction processing systems.

Architecture Dependence:

Shared-memory systems: Easier to implement as it supports concurrency naturally.

Shared-disk or shared-nothing systems: Requires coordination via messaging to ensure cache coherence and data consistency.

---
- Easiest form of parallelism to support, particularly in a shared-memory parallel database, because even sequential database systems support concurrent processing. 
• More complicated to implement on shared-disk or shared-nothing architectures



I• Locking and logging must be coordinated by passing messages between processors. • Data in a local buffer may have been updated at another processor. • Cache-coherency has to be maintained — reads and writes of data in buffer must find latest version of data

5. Intraquery Parallelism

Definition: Executes parts of a single query simultaneously across processors/disks.

Benefits: Speeds up execution of long-running queries.

Types of Intraquery Parallelism:

Intraoperation Parallelism: Each query operation is parallelized (e.g., parallel sorting).

Interoperation Parallelism: Different operations within a query (like joins and aggregates) are executed in parallel.



---

Distributed Databases

1. Introduction

A distributed database spans multiple systems (or sites) interconnected via a network.

Goal: Allows global access to data, appearing to users as a unified database.

Usage Scenarios: Ideal for applications where data needs to be accessed globally and managed across various physical locations.



2. Types of Distributed Databases

Homogeneous Distributed Databases:

All sites have identical database systems, software, and schema.

Ease of Management: Standardized architecture across sites simplifies operations and consistency.


Heterogeneous Distributed Databases:

Sites may use different schemas, DBMS software, and even different operating systems.

Challenges: Communication and data processing require data translation, which adds complexity.

Each site may operate independently, potentially unaware of other sites’ configurations.




3. Data Storage in Distributed Databases

Replication:

Full vs. Partial Replication: Full replication stores all data at every site, while partial replication only stores selected parts.

Advantages:

High data availability: Multiple copies ensure data access even if some sites are down.

Parallel query processing: Distributed copies allow faster query processing as data can be accessed locally.


Challenges:

Data consistency: Changes made at one site must be propagated to all copies to avoid inconsistencies.

Concurrency control complexity: Synchronizing updates across multiple sites requires sophisticated concurrency mechanisms.



Fragmentation:

Purpose: Divides data into smaller fragments, each stored only at sites where it is needed.

Benefits:

Reduces data redundancy, minimizing storage and consistency issues.

Tailors data storage to specific site needs, increasing access efficiency.


Types of Fragmentation:

Horizontal Fragmentation: Divides data by rows, so each fragment contains specific rows relevant to each site.

Vertical Fragmentation: Divides data by columns, ensuring each fragment contains a candidate key to maintain integrity.







---


