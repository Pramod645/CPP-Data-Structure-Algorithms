# ADVANCED Data Structure
NOt only below topic are part of advanced DS but also following:
 Fibonacci heaps: and Strict Fibonacci heaps 
 Dynamic trees:
 Splay trees: 
 Persistent: 
 van Emde Boas tree: 
 Fusion Trees: 
 Exponential search trees: 
 Dynamic graph data structures: 
### 1.Augmentic Data Structure or Augment red-black trees
That being said, there are situations where none of the textbook data structures are quite fit to get the job done. With a little creativity, existing data structures can be customized to serve our needs. We augment existing data structures by adding operations and extra bits of information and therefore fitting them to serve our needs.
Four steps for consisting it as following.
1. Pick a data structure
2. Determine the extra information that needs to be added to make it suitable for the problem at hand
3. Define a strategy for maintaining the extra information after modifications (insert, delete, edit)
4. Add extra operations
A Red-Black Tree is a self-balancing binary search tree where the height of the tree is never beyond O(Log n). 
Each node has an additional attribute: a color, which can be either red or black.
The colors are used to maintain balance during insertions and deletions, ensuring efficient data retrieval and manipulation.
The AVL trees are more balanced compared to Red-Black Trees, but they may cause more rotations during insertion and deletion.

Balanced: Red-Black Trees are self-balancing, meaning they automatically maintain a balance between the heights of the left and right subtrees. This ensures that search, insertion, and deletion operations take O(log n) time in the worst case.

Efficient search, insertion, and deletion: Due to their balanced structure, Red-Black Trees offer efficient operations. Search, insertion, and deletion all take O(log n) time in the worst case.

Simple to implement: The rules for maintaining the Red-Black Tree properties are relatively simple and straightforward to implement.

Widely used: Red-Black Trees are a popular choice for implementing various data structures, such as maps, sets, and priority queues.

More complex than other balanced trees: Compared to simpler balanced trees like AVL trees, Red-Black Trees have more complex insertion and deletion rules.

Constant overhead: Maintaining the Red-Black Tree properties adds a small overhead to every insertion and deletion operation.
<img width="302" height="150" alt="RBT" src="https://github.com/user-attachments/assets/de6f2eca-15be-4ec6-ac66-9fd8727ddd24" />

### 2.B-Trees: The number of values that a perticular node of binary search tree or an AVL tree can hold is only one. On other hand a 2-3 tree can conatin at the most two values per node. To improve the efficiency of operation performed on tree we need to reduce the height of the tree. Another problem arise when the data is stored in secondrey storage medium.The time require to access the data from secondry medium is very hight. To improve the eficient of secondry medium data can be used Multi-Way Search Trees. A multi-way tree of order n is a tree in which any node may conyain maximum n-1 values and can have maximum of n children. Order of a tree as have seen earlier, is the maximum number of child nodes that a perticular node haas. in a multi way tree of order 4 or 4 way tree, any node can contain maximum three values and four children.B-Tree should satisfy below conditions.
    a. All the non-leaf nodes have at least n/2 children and at the most n children.
    b.the non-leaf root node may have at the most n non-empty child and atleast two child nodes.
    c.A B-tree can exist with only one node and thats no toot node cntaining no child.
    d.if a node has a children then it must have n-1 values.All the values of a perticular node are in increasing order.
    e.all the value that appear ion the left most child of a node are smaller than the first of that value of that node.All values that appear on the right most child of a node are greather than the last value of that node.
    f.if x and y are two ith and (i+1)th values of a node , where x<z , then all the values appearing on the (i+1)th sub-tree of that node are greather than x and less then y.
    g.all the leaf nodes should appear on the same level.
<img width="340" height="188" alt="btree" src="https://github.com/user-attachments/assets/f27f5e85-ab4b-4fda-88fa-cd565265c876" />

B-trees are balanced search trees designed to work well on disk drives or other direct-access secondary storage devices. B-trees are similar to red-black trees, but they are better at minimizing the number of operations that access disks.
B-trees differ from red-black trees in that B-tree nodes may have many children, from a few to thousands. That is, the branching factor of a B-tree can be quite large, although it usually depends on characteristics of the disk drive used. B-trees are similar to red-black trees in that every n-node B-tree has height O.lg n/, so that B-trees can implement many dynamic-set operations in O.lg n/ time. But a B-tree has a larger branching factor than a red-black tree, so the base of the logarithm that expresses its height is larger, and hence its height can be considerably lower. 

### 3.Data Structure for Disjoints
Some applications involve grouping n distinct elements into a collection of disjoint sets4sets with no elements in common. These applications often need to perform two operations in particular: ûnding the unique set that contains a given element and uniting two sets.

MAKE-SET (x), where x does not already belong to some other set, creates a new set whose only member (and thus representative) is x. 

UNION(x,y) unites two disjoint, dynamic sets that contain x and y , say S x and S y , into a new set that is the union of these two sets. The representative of the resulting set is any member of S x U S y , although many implementations of UNION speciûcally choose the representative of either S x or S y as the new representative. Since the sets in the collection must at all times be disjoint, the UNION operation destroys sets S x and S y , removing them from the collection S . In practice, implementations often absorb the elements of one of the sets into the other set. 
FIND-SET(x) returns a pointer to the representative of the unique set containing x. 

Graph reprentation of Disjoint.
<img width="544" height="178" alt="GraphDisjoint" src="https://github.com/user-attachments/assets/fca2c7fb-aae4-4c6b-b7d0-63a81f87c5ab" />

Linked List of Disjoint.
<img width="544" height="237" alt="LinkedListDisjoint" src="https://github.com/user-attachments/assets/52ae63e5-38a3-4f81-a9bb-552275e5ff2a" />

Disjoint of Forest.
<img width="512" height="267" alt="ForestDisjoint" src="https://github.com/user-attachments/assets/d4dbacb7-6ea0-4bb6-93aa-1fdce5b1d60a" />
