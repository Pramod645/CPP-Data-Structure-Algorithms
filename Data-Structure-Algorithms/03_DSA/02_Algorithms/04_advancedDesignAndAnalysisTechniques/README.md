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

### 3. Amortized Analysis
