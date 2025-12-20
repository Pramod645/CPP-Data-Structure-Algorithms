# Graph
This is non-linear data structure like the tree infact tree also is one kind of graph. 
A graph consisit of two sets one v finite and non-empty set of vertices and second e which is pairs of vertices this is called edges.
There are two types of graph one is undirected and other one is directed grapph.
In undirected graph the pairs of verices representing any edge ia unordered which means the pairs (v1,v2) and (v2,v1) are having same edge.
In directed graph each edge is represented by a directed pair<v1,v2>. v1 is the tail and v2 the head of the edge. so <v2,v1> and <v1,v2> are two diffirent edges. and this graph also call digraph.
!Imasges[undirected]

set of vertices = {1,2,3,4}
set of edges = {(1,2),(1,3),(1,4),(2,3),(2,4),(2,4),(3,4)}


!Images[directed]

set of vertees={1,2,3}
set of edges = {<1,2>,<2,1>,<2,3>}
### Adjacent Vertices and Incident Edges
if unidirected gpah is (v1,v2) edgein the set of edges and vertices v1 and v2 are adjacent vertices.(v1,v2) is incident on vertices v1 and v2.
if<v1,v2> is directed edge then vertex v1 is called adjecent to v2 while v2 is adjacent from v1. The edge <v1,v2> is incident to v1 and v2.


### Graph Reprentations
Grapgh can be prepesent by Adjacentry Matrices and Adjancencey Lists.

#### Adjacentry MAtrices
The adjancency matrix of G is a 2-dimensional array of size nxn(n is the numvbr of verteces in the grapgh) with the property that a[i][j]=1 if the edge(v1,v2)is in the set of edge, and a[i][j]=0 if there is no such edge.
The adjancency matrices for the above grapvh G1 and G2 following:
IMages
In this picture, the adjancenry matrix for an unidirected graph is symmetric. and for directed graph no symmetric. The space needed to represent a grapgh using adjancency matrix is n to power 2.

#### Adjancencey Lists
In this, n rows of the adjancency matrix are represented as n linked lists. there is one list for each vertex in the grapgh. the node in the list i represent the verteces that are adjacent from vertex i Each list has a head node and head nodes are sequential providing easy random access to the adjancency list for any particular vertex.
!Image[Adjancency list]


Given root node of a binary tree, one of the most common operation performed is visiting every node of the tree in some order. same way, given a vertex in directed or undirected graphneed to visit all the verteces in the graph that are reachable from this vertex. and this can be done by either Depth First Search or Breath First Seearch algorithms.


### Depth First Search
This start vertex v visitted and then next an unvisited vertex w adjacent to v is selected andf a depth seach from w is initiated.when a vertex u is replecaed such that all its adjacent verteces have been visited.then beck tup to last vetex visited while has an unvisited vertex w adjacent to it and initiated a depth first search from w. the search termonated when no unvisited vetex can be reached from any of the visited onces.
visited :v1,v2,v4,b8,v5,v6,v3 and v7
### Breath First Search
In breadth ffirst search, strarting at vertex v and making its as visited.differs from depth first search in that all unvisited vertces adjacent to v are visited next. then unvisited vertices adjacent to these vertices are visited and so on. A breadth first search begining at verticeswould first visit v1 and then v2 and v3. next vetices v4,v5,v6 and v7 will be visited and finally v8.
visited:v1,v2,v3,v4,v5,v6,v7 and v8


### Spanning Tree
A spanning tree of a graph is an undirected tree cinsisting of only those edges that are necessary to connect all the vertices in the original grapgh. A spanning tree has a property that for any pair of vertices there exists only one path between themand insertion of any edge to a spanning tree from a unique cycle.
THe pertucualr spanning tree for a graph depends on the criteria used for generating it.the spanning tree resulting from a call to depth first tree is know as depth first spanning tree. and in same way a spanning tree resulting from a call to breadth first is called breadth first spanning tree. .It usefull for shortest path problems solving.the cost of sum of spanning tree is the sum of costs of edges in the tree. thee is one mthod for minimum cost spanning tree is provided by Kruskal.

### Krushel's Algorithm
IN this algotithm, a minimum cost spanning tree T is built edge by edge.Edges are considered for inclusion in T in increasing order of their costs.An edge is included in T if it does not form a cycle with edges already in T.
!Image[Graph of costs of edges]

E-Edge
C-Cost
A-Action
T-Tree
I-Inclusion
R-Rejection

### Sortest Path Algorithm
A minimum spaning tree dont give indication about shortest path betwen two nodes, Instead of that give overall cost is minimized. but in practice need shortest path between two cities or other examples. To find the shortest path Dijkstraprovied an algotihtm.

#### 1.Dijkstra's Algorithm
!Image[Digraph]
!Image[MAtrix]

