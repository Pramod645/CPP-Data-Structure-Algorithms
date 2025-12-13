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

