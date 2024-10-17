
A **Graph** is a collection of **nodes (vertices)** connected by **edges**. It is used to represent relationships between different entities. Graphs are widely used in various fields like computer networks, social media, and maps.

Collection of nodes that contain data and are connected to other nodes.A graph 'G'  is  a a data structure (V,E) that consists of a set of vertices 'V' and a set of edges 'E' represented as ordered pair (u,v)

![[graph-data-structure.webp]]


## What is Graph Data Structure?

Graph is a non-linear data structure consisting of vertices and edges. The vertices are sometimes also referred to as nodes and the edges are lines or arcs that connect any two nodes in the graph. More formally a Graph is composed of a set of vertices( **V** ) and a set of edges( **E** ). The graph is denoted by **G(V, E).**

Graph data structures are a powerful tool for representing and analyzing complex relationships between objects or entities. They are particularly useful in fields such as social network analysis, recommendation systems, and computer networks. In the field of sports data science, graph data structures can be used to analyze and understand the dynamics of team performance and player interactions on the field.

## Components of a Graph:

- **Vertices:* Vertices are the fundamental units of the graph. Sometimes, vertices are also known as vertex or nodes. Every node/vertex can be labeled or unlabeled.
- **Edges:** Edges are drawn or used to connect two nodes of the graph. It can be ordered pair of nodes in a directed graph. Edges can connect any two nodes in any possible way. There are no rules. Sometimes, edges are also known as arcs. Every edge can be labelled/unlabelled.

## Operations on Graphs:

Basic Operations:

- Insertion of Nodes/Edges in the graph – Insert a node into the graph.
- Deletion of Nodes/Edges in the graph – Delete a node from the graph.
- Searching on Graphs – Search an entity in the graph.
- Traversal of Graphs – Traversing all the nodes in the graph****.****

### **1. Finite Graphs**

 A graph is said to be finite if it has a finite number of vertices and a finite number of edges. A finite graph is a graph with a finite number of vertices and edges. In other words, both the number of vertices and the number of edges in a finite graph are limited and can be counted. Finite graphs are often used to model real-world situations, where there is a limited number of objects and relationships between the
 
![[simplegraph.png]]

### 2. Infinite Graph:

A graph is said to be infinite if it has an infinite number of vertices as well as an infinite number of edges.

![[graph2-4.png]]
### **3. Trivial Graph:**

A graph is said to be trivial if a finite graph contains only one vertex and no edge. A trivial graph is a graph with only one vertex and no edges. It is also known as a singleton graph or a single vertex graph. A trivial graph is the simplest type of graph and is often used as a starting point for building more complex graphs. In graph theory, trivial graphs are considered to be a degenerate case and are not typically studied in detail

![[trivial-.png]]


### **4. Simple Graph:**

A simple graph is a graph that does not contain more than one edge between the pair of vertices. A simple railway track connecting different cities is an example of a simple graph.![[simple2-1 1.png]]

![[simple1.png]]

### **5. Multi Graph:**

Any graph which contains some parallel edges but doesn’t contain any self-loop is called a multigraph. For example a Road Map. 

- **Parallel Edges:** If two vertices are connected with more than one edge then such edges are called parallel edges that are many routes but one destination.
- ****Loop:**** An edge of a graph that starts from a vertex and ends at the same vertex is called a loop or a self-loop.

![[graph-23.png]]



### **6. Null Graph:**

A graph of order n and size zero is a graph where there are only isolated vertices with no edges connecting any pair of vertices.A null graph is a graph with no edges. In other words, it is a graph with only vertices and no connections between them. A null graph can also be referred to as an edgeless graph, an isolated graph, or a discrete graph

![[null-2.png]]
### **7. Complete Graph:**

A simple graph with n vertices is called a complete graph if the degree of each vertex is n-1, that is, one vertex is attached with n-1 edges or the rest of the vertices in the graph. A complete graph is also called Full Graph.

![[complete2-1.png]]

![[complete1 (2).png]]

### **8. Pseudo Graph:**

A graph G with a self-loop and some multiple edges is called a pseudo graph. A pseudograph is a type of graph that allows for the existence of self-loops (edges that connect a vertex to itself) and multiple edges (more than one edge connecting two vertices). In contrast, a simple graph is a graph that does not allow for loops or multiple edges.

![[pseudo-2.png]]