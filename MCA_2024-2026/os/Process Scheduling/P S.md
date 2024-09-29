
## Process State Transition Diagram


[[Drawing 2024-08-20 14.29.30.excalidraw]]

## CPU Scheduler

1. A process migrates between the various scheduling queues throughout its lifetime.  

2. The OS must select, for scheduling purposes, processes from these queues in some fashion.  

3. The selection process is carried out by the appropriate schedulers

## Types of Schedulers

**Long Term Scheduler**
	Selects processes that are ready to execute and loads them into ready queue.
executable process --> ready state\redy queue 
**Short Term Scheduler**
	Selects process from the ready queue and allocates CPU to it
	ready queue --> CPU
**Medium Term Scheduler**
	Selects which swapped out process is to be loaded next into the ready queue
Swap out process one thiriche cpu konde verunne

## Dispatcher

**The dispatcher is the module that gives control of the CPU to the process selected by the short term scheduler.**

ST --> Dispatcher --> running

## Scheduling Criteria

==Arrival Time==: 	When a process enters in a ready state
==Burst Time/Execution Time==: It is the time required by the process to complete execution. It is also called running time.
==Completion Time==:  When process complete and exit from a system
==Turn Around Time ==: The interval from time of submission of a process to time of completion.  **TAT=CT-AT** 
==Waiting Time==:  Time spent by a process waiting in the ready queue. 
     WT = TAT – Burst Time.
==Response Time ==:  The time taken from submission of the process of request until the first response is produced.

CPU Utilization
	Keep the CPU as busy as possible.
Throughput
	Number of processes that are completed per unit time
==Maximize== – CPU Utilization & Throughput
==Minimize== – TAT, WT, RT
Fair Allocation of CPU to processes.

* CPU scheduling deals with the problem of deciding which of the processes in the ready queue is to be allocated the CPU.  

* There are many different CPU scheduling algorithms are there.

* Short Term Scheduler

* Ready to Running

* Calls when Process moves from

	Running -> ready
	Running -> Termination                        refer the diagram [[Drawing 2024-08-20 14.29.30.excalidraw]]
	Running -> Wait

## Pre-emptive & Non Pre-emptive Scheduling

1. Under non preemptive scheduling, once the CPU has been allocated to a process, the process keeps the CPU until it releases the CPU either by terminating or by switching to wait state.  
on non preemptive process pidiche vekkum cpu ne until process theerunnade vare

3. A scheduling is said to be Preemptive, when a process  returns the CPU if its time slice is over.

## FCFS (First Come First Serve)

1. Mode: Non Pre-emptive / Criteria:  Arrival time 

2. The process requests the CPU first is allocated the CPU first .

3. The implementation can be easily managed by maintaining a FIFO list. 

 4. When a process enters the ready queue, its PCB is linked onto the tail of the queue. 
 
 5. The running process is removed from the queue.  When the CPU is free, it is allocated to the process at the head of the queue.
![[Pasted image 20240820144531.png]]

TAT = CT – AT
WT= TAT - BT 

Average TAT
Average Waiting Time: 

If more processes with same arrival time , then it will take the process with smaller PID

![[Pasted image 20240820144637.png]]

Average TAT
Average Waiting Time: 

- FCFS suffers from Convoy effect.

- The average waiting time is much higher than the other algorithms.

- FCFS is very simple and easy to implement and hence not much efficient.