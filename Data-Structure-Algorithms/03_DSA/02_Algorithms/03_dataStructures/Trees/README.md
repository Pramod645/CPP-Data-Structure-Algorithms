# Trees
Root 
Left and right sub trees 
Node 
Branches 
Leaf 
climbling the tree 
descending the tree. 
##### No. of node conncted to a perticular node is called the degree of a node. the degree of a leaf always 1.
 
#### 1.Bimnary Trees: A binary tree is a finite set of elements that is either empty or is partitioned into three disjointe sub-sets. The first sub-set contains a single element called root of the tree. the other two sub-sets are themselves binary trees called the left and right sub-trees of the original tree. each element of binary tree called a node of the tree.
<img width="365" height="203" alt="BinaryTRee" src="https://github.com/user-attachments/assets/187f6002-cc14-42e3-9ff9-8916c9f682b3" />

#### 2.Not binary trees
<img width="263" height="203" alt="NotBinaryTree" src="https://github.com/user-attachments/assets/5b4e4a92-e2cf-46f6-81c6-16533a18049f" />

#### 3.Strictly binary trees:If every node in the binary tree has non-empty left and right sub-trees, the tree is termed a strictly binary tree.
<img width="350" height="251" alt="StrictBinaryTree" src="https://github.com/user-attachments/assets/72155f9e-d153-4398-b346-5a83d61df192" />

#### 4.Complete binary tree: A complete tree have same depth of the leaf or all leave have to be same level
<img width="350" height="179" alt="CompleteBinaryTree" src="https://github.com/user-attachments/assets/c1e24b3b-ed8b-4a88-acd7-bde29fa282f1" />


### Binary tree trasveral: 1. In-Order traversal, 2.Pre-Order traversal and the 3.Post-Order traversal. Traversal a tree using these method can be kept quite short if we understant the recursive nature of binary tree.
#### 1.Pre0Order: 1. Visit the root. 2.Traversal the left subtree in pre-order. 3.Traverse the right sub-tree in pre-order.
#### 2.In-Order: 1. Traverse the left sub-tree in in-order. 2.visit the root. 3.Traverse the right sub-tree in in-order.
#### 3.Post-order: 1.Traverse the left sub-tree in post-order. 2.Traverse the right sub tree in post-order. 3.visit the root.


#### Many algorithm that use binary trees processed in two phases. 1. build the binary tree and then second trversal the tree.
### BST has property that all the elements in the left sub-tree of a node n are less then the contents of n. and all the elements in the right  sub-tree of n are greather than or equal to the contents of n.


### Searchin, insertion and deletion are basic operation that are required to maintain tree.
#### 1.Search. based on equal, less than and greather than
#### 2.Insertion.
#### 3.deletion. four possible way
###### a.No node in the tree containing the specific data.
###### b.The node3 containing the data has no children
###### c.The node containing the data has exactly one child
###### d.The node containing the data has two children


#### 5.Extended Binary Tree: An binary can be conberted to extended binary tree b y adding new nodes to its leaf nodes and to the nodes that have only one child.These new nodes are added in such a way that all the nodes in the resultant tree have either zero or two children. The extended tree also called a 2-tree. //for a binary tree of height h the maximum number of nodes can be 2(the power h+1) -1. Any binary tree with n internal node has (n+1) extended nodes.

#### 6.Threaded Binary Tree: Both the recursive  and non-recursive procedures for binary tree traversal require that pointers to all of the free nodes be kept temporarily on stack. it is possible to write binary tree traversal procedure that does not require any pointer to the nodes be put on the stack.such procedure eliminate the overhead (time, memory) involved in initializing, pushing and popping the stack.

#### 7.General Trees:A genral tree can have any number of nodes.The children of a node are called as sibling of each other. in other word, if a particular node has four children, then the second, third and fourth child of that node are the siblilings of the first child.

#### 8.Forest: Forest is a set of several trees that are not linked to each other in any way. Forest can be represnted as a binary tree.

#### 9.AVL Trees or Balanced Trees: Searching in a binary tree is efficient if the height of both left and right sub-tree of any node are equal.however, frequent insertions and deletion in a BST is likely to make it unbalanced.the efficiency of searching is ideal if the diffirence between the heights of left and right sub-trees of all the nodes in a binary search tree is at the most one.Such a binary search tree is called the Ballanced Binary Tree.
<img width="681" height="846" alt="AVL" src="https://github.com/user-attachments/assets/9253b8ce-4bcb-4e3a-8287-ca252967aa47" />

#### 10.2-3 Trees

#### 11.Priority Queue

#### 12.Heap
