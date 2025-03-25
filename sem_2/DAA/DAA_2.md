Asymptotic Analysis

-  ==Asymptotic== Notation is used to describe the running time of an algorithm - how much time an algorithm takes with a given input, n.

-  Asymptotic analysis of an algorithm refers to defining the mathematical boundation/framing of its runtime performance. 
-  Using ==asymptotic analysis, we can very well conclude the best case, average case, and worst case scenario of an algorithm==. 
-  ==Asymptotic analysis is input bound== i.e., if there's ==no input to the algorithm, it is concluded to work in a constant time.== Other than the "input" all other factors are considered constant. -  Asymptotic analysis refers to computing the running time of any operation in mathematical units of computation. 5 
-  For example, the running time of one operation is computed as f(n) and may be for another operation it is computed as g(n2).
-  This means the first operation running time will increase linearly with the increase in n and the running time of the second operation will increase exponentially when n increases. 6 
-  Similarly, the running time of both operations will be nearly the same if n is significantly small. 7 
-  Usually, the time required by an algorithm falls under three types −

-  Best Case − Minimum time required for program execution.
-  Average Case − Average time required for program execution. 
-  Worst Case − Maximum time required for program execution.

Asymptotic Notations
-  Following are the commonly used asymptotic notations to calculate the running time complexity of an algorithm. 
-  Ο Notation 
-  Ω Notation 
-  θ Notation

---

Big Oh Notation, Ο 
-  The notation Ο(n) is the formal way to express the ==upper bound== of an algorithm's running time. 
-  It measures the ==worst case== time complexity or the longest amount of time an algorithm can possibly take to complete.

![[DAA-Lect 2.webp]]

[[DAA-Lect 2.pdf#page=11&rect=21,14,675,531|DAA-Lect 2, p.11]]

---

Omega Notation, Ω 
-  The notation Ω(n) is the formal way to express the lower bound of an algorithm's running time. It measures the best case time complexity or the best amount of time an algorithm can possibly take to complete.

![[DAA-Lect 2 1.webp]]

[[DAA-Lect 2.pdf#page=13&rect=19,27,695,516|DAA-Lect 2, p.13]]

---
Theta Notation, θ 
-  The notation θ(n) is the formal way to express both the lower bound and the upper bound of an algorithm's running time. i.e. it represents the Average running time. 
-  It is represented as follows −

![[DAA-Lect 2 3.webp]]

[[DAA-Lect 2.pdf#page=15&rect=76,5,679,518|DAA-Lect 2, p.15]]



