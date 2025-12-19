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


### Breath First Search


### Spanning Tree


### Krushel's Algorithm


### Sortest Path Algorithm

#### 1.Dijkstra's Algorithm


