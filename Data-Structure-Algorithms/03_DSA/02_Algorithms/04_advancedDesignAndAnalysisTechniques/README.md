# Advanced Design and Analysis Techniques

### 1.Dynamic Programming
Dynamic programming, like the divide-and-conquer method, solves problems by
combining the solutions to subproblems.
divide-and-conquer algorithms partition the problem into disjoint subprob-
lems, solve the subproblems recursively, and then combine their solutions to solve
the original problem. In contrast, dynamic programming applies when the subprob-
lems overlap4that is, when subproblems share subsubproblems. In this context,
a divide-and-conquer algorithm does more work than necessary, repeatedly solv-
ing the common subsubproblems. A dynamic-programming algorithm solves each
subsubproblem just once and then saves its answer in a table, thereby avoiding the
work of recomputing the answer every time it solves each subsubproblem.
Dynamic programming typically applies to optimization problems. Such prob-
lems can have many possible solutions. Each solution has a value, and you want
to ûnd a solution with the optimal (minimum or maximum) value. We call such
a solution an optimal solution to the problem, as opposed to the optimal solution,
since there may be several solutions that achieve the optimal value.
To develop a dynamic-programming algorithm, follow a sequence of four steps:
1. Characterize the structure of an optimal solution.
2. Recursively deûne the value of an optimal solution.
3. Compute the value of an optimal solution, typically in a bottom-up fashion.
4. Construct an optimal solution from computed information.
<img width="561" height="192" alt="Dynamic" src="https://github.com/user-attachments/assets/cdec77f0-6939-4113-8ce5-74076bed3104" />

However, greedy algorithms look for locally optimum solutions or in other words, a greedy choice, in the hopes of finding a global optimum. Hence greedy algorithms can make a guess that looks optimum at the time but becomes costly down the line and do not guarantee a globally optimum.

Dynamic programming, on the other hand, finds the optimal solution to subproblems and then makes an informed choice to combine the results of those subproblems to find the most optimum solution.
Different Types of Dynamic Programming Algorithms
1. Longest Common Subsequence
2. Floyd-Warshall Algorithm

### 2. Greedy Algorithms
A greedy algorithm always makes the choice that looks best at the moment. That is, it makes a locally optimal choice in the hope that this choice leads to a globally optimal solution.
1. An activity-selection problem
2. Elements of the greedy strategy
3. Huffman codes
4. Ofüine caching 

Advantages of Greedy Approach:
The algorithm is easier to describe.
This algorithm can perform better than other algorithms (but, not in all cases).
Drawback of Greedy Approach:
As mentioned earlier, the greedy algorithm doesn't always produce the optimal solution. This is the major disadvantage of the algorithm. 
Different Types of Greedy Algorithm:
Selection Sort
Knapsack Problem
Minimum Spanning Tree
Single-Source Shortest Path Problem
Job Scheduling Problem
Prim's Minimal Spanning Tree Algorithm
Kruskal's Minimal Spanning Tree Algorithm
Dijkstra's Minimal Spanning Tree Algorithm
Huffman Coding
Ford-Fulkerson Algorithm

### 3. Amortized Analysis
In an amortized
analysis, you average the time required to perform a sequence of data-structure
operations over all the operations performed. With amortized analysis, you show
that if you average over a sequence of operations, then the average cost of an oper-
ation is small, even though a single operation within the sequence might be expen-
sive. Amortized analysis differs from average-case analysis in that probability is
not involved. An amortized analysis guarantees the average performance of each
operation in the worst case.
THree method:
1. aggregate analysis
2. accounting method
3. potential method

Amortized Analysis is used for algorithms where an occasional operation is very slow, but most other operations are faster. In Amortized Analysis, we analyze a sequence of operations and guarantee a worst-case average time that is lower than the worst-case time of a particularly expensive operation.

The data structures whose operations are analyzed using Amortized Analysis include:

Hash Tables 
Disjoint Sets 
Splay Trees 

Advantages of Amortized Analysis:
More accurate predictions: Amortized analysis provides a more accurate prediction of the average-case complexity of an algorithm over a sequence of operations, rather than just the worst-case complexity of individual operations.
Provides insight into algorithm behavior: By analyzing the amortized cost of an algorithm, we can gain insight into how it behaves over time and how it handles different types of inputs.
Helps in algorithm design: Amortized analysis can be used as a tool for designing efficient algorithms that perform well over a sequence of operations.
Useful in dynamic data structures: Amortized analysis is particularly useful in dynamic data structures like heaps, stacks, and queues, where the cost of an operation depends on the current state of the data structure.

Disadvantages of Amortized Analysis:
Complexity: Amortized analysis can be complex, especially when multiple operations are involved, making it difficult to implement and understand.
Limited applicability: Amortized analysis may not be suitable for all types of algorithms, especially those with highly unpredictable behavior or those dependent on external factors like network latency or I/O operations.
Lack of precision: Although amortized analysis provides a more accurate average-case complexity, it may not always give a precise estimate of actual performance, especially when there is high variance in the cost of operations.