##  Artificial Intelligence

## Search

-  An agent that is given an initial state and a goal state, and it returns a solution of how to get from the former to the latter.

---
### <u>Important terms in search</u>

- **Agent**
	
    An entity that perceives its environment and acts upon that environment. 
    In a navigator app, for example, the agent would be a representation of a car that needs to decide on which actions to take to arrive at the destination.

- **State**

	A configuration of an agent in its environment. For example, in a 15 puzzle, a state is any one way that all the numbers are arranged on the board.


- **Actions**
	
	Choices that can be made in a state. More precisely, actions can be defined as a function. Upon receiving state `s` as input,  ==Action (state) --> returns a set of actions that can be performed in that state==


- **Transition Model**
What state we get after performing certain action will end up in.
==Result (state, action) --> returns the state resulting from performing action `a` in state `s`.==
![[Pasted image 20241222072742.png]]

- **State Space**

 set of all states reachable from the initial state by any sequence of actions.

![[Pasted image 20241222064524.png]]

we can simplify this as directed graph
 
- **Goal Test**

	The condition that determines whether a given state is a goal state.

- **Path Cost**

	A numerical cost associated with a given path.

---

## <u>Solving Search Problems</u>

- **Optimal Solution**

A solution that has the lowest path cost among all solutions.

In a search process, data is often stored in a **_node_**, a data structure that contains the following data:

### Node

- A _state_
- Its ==_parent node_==, through which the current node was generated
- The ==_action_ that was applied== to the state of the parent to get to the current node
- The ==_path cost_== from the initial state to this node

it is possible to trace back every step of the way from the _initial state_ to this node, and this sequence of actions is the _solution_.

 note about the graph [[Drawing 2024-12-22 19.20.04.excalidraw]]

we use the **==frontier==**, the mechanism that “manages” the _nodes_. The _frontier_ starts by containing an initial state and an empty set of explored items, and then repeats the following actions until a solution is reached:

Repeat:

1. If the frontier is empty,
    
    - _Stop._ There is no solution to the problem.
2. Remove a node from the frontier. This is the node that will be considered.
    
3. If the node contains the goal state,
    
    - Return the solution. _Stop_.
    
    Else,
    
    ```
    * Expand the node (find all the new nodes that could be reached from this node), and add resulting nodes to the frontier.
    * Add the current node to the explored set.
    ```

---

uninformed search algorithms do not utilize any knowledge about the problem that they did not acquire through their own exploration.

---

## <u>Depth-First Search </u> #dfs 

Depth-first search (DFS) is an algorithm for traversing or searching tree or graph data structures. The algorithm ==starts at the root node==  and ==explores as far as possible== along each branch before backtracking. It uses last in- first-out ==LIFO== strategy and hence it is implemented using a ==stack==.
![[Pasted image 20241223095433.png]]

**Path:**   S -> A -> B -> C -> G

A _depth-first_ search algorithm exhausts each one direction before trying another direction. 
In these cases, the frontier is managed as a _stack_ data structure.



```python
    # Define the function that removes a node from the frontier and returns it.
    def remove(self):
    	  # Terminate the search if the frontier is empty, because this means that there is no solution.
        if self.empty():
            raise Exception("empty frontier")
        else:
        	  # Save the last item in the list (which is the newest node added)
            node = self.frontier[-1]
            # Save all the items on the list besides the last node (i.e. removing the last node)
            self.frontier = self.frontier[:-1]
            return node
```


---


## <u>Breadth-First Search</u> #BFS

A _breadth-first_ search algorithm will follow multiple directions at the same time, taking one step in each possible direction before taking the second step in each direction. 

In this case, the frontier is managed as a ==_queue_== data structure. ==FIFO==


Code example:

```python
    # Define the function that removes a node from the frontier and returns it.
    def remove(self):
    	  # Terminate the search if the frontier is empty, because this means that there is no solution.
        if self.empty():
            raise Exception("empty frontier")
        else:
            # Save the oldest item on the list (which was the first one to be added)
            node = self.frontier[0]
            # Save all the items on the list besides the first one (i.e. removing the first node)
            self.frontier = self.frontier[1:]
            return node
```


---

 A type of algorithm that considers additional knowledge to try to improve its performance is called an informed search algorithm.
 
---
## <u>Greedy Best-First Search</u>
- Expands the node that is the closest to the goal, as determined by a heuristic function h(n).
- The function estimates how close to the goal the next node is, but it can be mistaken.
- In a maze, an algorithm can use a heuristic function that relies on the Manhattan distance between the possible nodes and the end of the maze.
- [[Manhattan distance]] ignores walls and counts how many steps up, down, or to the sides it would take to get from one location to the goal location.
- The efficiency of the greedy best-first algorithm depends on how good the heuristic function is.

## <u>A* Search</u>

- A* search considers not only h(n), the estimated cost from the current location to the goal, but also g(n), the cost that was accrued until the current location

- The algorithm keeps track of (cost of path until now + estimated cost to the goal), and once it exceeds the estimated cost of some previous option, the algorithm will ditch the current path and go back to the previous option, thus preventing itself from going down a long, inefficient path that h(n) erroneously marked as best.
- For A* search to be optimal, the heuristic function, h(n), should be:

- Admissible, or never overestimating the true cost, and
- Consistent, which means that the estimated path cost to the goal of a new node in addition to the cost of transitioning to it from the previous node is greater or equal to the estimated path cost to the goal of the previous node. To put it in an equation form, h(n) is consistent if for every node n and successor node n’ with step cost c, h(n) ≤ h(n’) + c.







