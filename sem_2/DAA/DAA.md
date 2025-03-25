## ALGORITHMS 

-  An algorithm is a ==set of steps of operations to solve a problem== performing calculation, data processing, and automated reasoning tasks. 
-  An algorithm is an ==efficient method== that can be expressed within ==finite amount of time and space==.
- An algorithm is the best way to represent the solution of a particular problem in a very simple and efficient way.
- If ==we have an algorithm for a specific problem, then we can implement it in any programming language, meaning that the algorithm is independent from any programming languages.==
- The ==important aspects of algorithm design include creating an efficient algorithm to solve a problem in an efficient way using minimum time and space.==
To solve a problem, different approaches can be followed. 
-  Some of them can be efficient with respect to time consumption, whereas other approaches may be memory efficient.
-  However, one has to keep in mind that ==both time consumption and memory usage cannot be optimized simultaneously.==

-  ==If we require an algorithm to run in lesser time, we have to invest in more memory and if we require an algorithm to run with lesser memory, we need to have more time.==

---

Problem Development Steps 
-  The following steps are involved in solving computational problems. 
-  Problem definition 
-  Development of a model 
-  Specification of an Algorithm 7 
Designing an Algorithm
-  Checking the correctness of an Algorithm
-  Analysis of an Algorithm 
-  Implementation of an Algorithm 
-  Program testing 
-  Documentation

---

## Characteristics of Algorithms 
-  The main characteristics of algorithms are as follows − 
-  Algorithms must have a ==unique name== 
-  Algorithms should have ==explicitly defined set of inputs and outputs== 
-  Algorithms are ==well-ordered== with unambiguous operations.
-  Algorithms ==halt in a finite amount of time==. 
-  Algorithms ==should not run for infinity==, i.e., an algorithm must end at some point

---

## Pseudocode 
-  Pseudocode gives a high-level description of an algorithm without the ambiguity associated with plain text but also without the need to know the syntax of a particular programming language. 

---

## 11 Difference between Algorithm and Pseudocode 
-  An algorithm is simply a solution to a problem. 
-  An algorithm presents the solution to a problem as a well defined set of steps or instructions. 
-  Pseudo-code is a general way of describing an algorithm. 
-  Pseudo-code does not use the syntax of a specific programming language, therefore cannot be executed on a computer. 
-  But it closely resembles the structure of a programming language and contains roughly the same level of detail. 
-  An algorithm is a well defined sequence of steps that provides a solution for a given problem, while a pseudocode is one of the methods that can be used to represent an algorithm. 
-  While algorithms can be written in natural language, pseudocode is written in a format that is closely related to high level programming language structures. 
-  But pseudocode does not use specific programming language syntax and therefore could be understood by programmers who are familiar with different programming languages. 
-  Additionally, transforming an algorithm presented in pseudocode to programming code could be much easier than converting an algorithm written in natural language.

---

How to write an Algorithm? 
1. Keep in mind that algorithm is a step-bystep process. 
2. Depending upon programming language, include syntax where necessary. 
3. Begin. 
4. Include variables and their usage. 
5. If they are any loops, try to give sub number lists.
6. Try to give go back to step number if loop or condition fails.

---

## Characteristics of an Algorithm 
-  Not all procedures can be called an algorithm. An algorithm should have the following characteristics − 
-  Unambiguous − Algorithm should be clear and unambiguous. Each of its steps (or phases), and their inputs/outputs should be clear and must lead to only one meaning. 21 
-  Input − An algorithm should have 0 or more well-defined inputs. 
-  Output − An algorithm should have 1 or more well-defined outputs, and should match the desired output. 
-  Finiteness − Algorithms must terminate after a finite number of steps. 
-  Feasibility − Should be feasible with the available resources. 
-  Independent − An algorithm should have step-by-step directions, which should be independent of any programming code. 22

---

‘← ’ for assignment.

---

Type of Algorithms 
-  The algorithm are classified in to the three types of control structures. 
-  They are: 
1. ==Sequence== 
2. ==Branching (Selection)== 
3. ==Loop (Repetition)==

-  The sequence is exemplified by sequence of statements placed one after the other – the one above or before another gets executed first. 
-  The branch refers to a binary decision based on some condition. 41 
-  If the condition is true, one of the two branches is explored; if the condition is false, the other alternative is taken. 
-  This is usually represented by the ‘if-then’ construct in pseudo-codes and programs. 
-  This structure is also known as the selection structure.


---

-  ==Unbounded loops== refer to those whose number of iterations depends on the eventuality that the termination condition is satisfied; ==bounded loops== refer to those whose number of iterations is known before-hand.

-  A trip around the loop is known as ==iteration==. 
-  One must ensure that the condition for the termination of the looping must be satisfied after some finite number of iterations, otherwise it ends up as an infinite loop, a common mistake made by inexperienced programmers. 
-  ==The loop is also known as the repetition structure.==

---

Algorithm Analysis

-  Efficiency of an algorithm can be analyzed at two different stages, before implementation and after implementation. They are the following − 

---

-  ==A Priori Analysis== − This is a theoretical analysis of an algorithm. 
-  Efficiency of an algorithm is measured by assuming that all other factors, for example, processor speed, are constant and have no effect on the implementation.
-  A ==Posterior Analysis== − This is an empirical analysis of an algorithm. 
-  The selected algorithm is implemented using programming language. This is then executed on target computer machine. In this analysis, actual statistics like running time and space required, are collected.

---

-  We shall learn about a priori algorithm analysis. 
-  Algorithm analysis deals with the execution or running time of various operations involved. -  The running time of an operation can be defined as the number of computer instructions executed per operation. 
-  This analysis is done before we code. 
-  Some tools are required to do this. 
-  Tools include instruction count and size of input. 
-  In apriori analysis, we need to identify the basic operations in the algorithm and count the number of times that operation is being performed. 
-  For example : - in sorting algorithms, the basic operation is the comparison between two elements, and the performance is to measure the total number of comparisons required to sort an array of numbers.  
-  While doing an instruction count, we can do either a macro analysis or micro analysis. 
-  Macro Analysis – Perform the instruction count for all operations. 
-  Micro Analysis – Perform the instruction count only for dominating operations.
-  For example, the comparisons are basic operations in searching and sorting algorithms, the arithmetic operations are basic operations in math algorithms, and multiplication and addition are basic operations in matrix multiplication algorithms


---

Algorithm Complexity

-  Suppose X is an algorithm and n is the size of input data, the time and space used by the algorithm X are the two main factors, which decide the efficiency of X. 
-  ==Time Factor== − Time is measured by counting the number of key operations such as comparisons in the sorting algorithm. 
-  ==Space Factor== − Space is measured by counting the maximum memory space required by the algorithm.

-  The complexity of an algorithm f(n) gives the running time and/or the storage space required by the algorithm in terms of n as the size of input data.

