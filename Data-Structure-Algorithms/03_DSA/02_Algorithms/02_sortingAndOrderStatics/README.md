# Sorting and Order Statics

<img width="395" height="164" alt="sortingTimeComplexity" src="https://github.com/user-attachments/assets/7e9422d2-81b9-4b6e-b561-955c31512f06" />

#### 1.Heap Sort : A binary heap DS is the complete binrayn tree. An ordered balanced binary tree is called a min-heap where the value at the top root of any sub-tree is less than or equal to the the value of either of it childeren.An order balanced binary tree is called a max-heap when the value at the root of any sub-tree more than or equal  to the value of either of its children.It basically an improvment over the binary tree sort. Two phase involved tin sorting the lements using heap sort algorithm.Time complexity in worst,average and best case is O(n log n).
a.Construct a heap by adjusting the array elelemtns. 
b.Repeateadly eliminating the root element of the heap by shifting it to the end of array and then restore the heap structure with remaining elements.
<img width="480" height="532" alt="2HeapSs2hort" src="https://github.com/user-attachments/assets/e10eae87-d417-4af9-ba5d-fc79195095e6" />
https://github.com/Pramod645/CPP-Data-Structure-Algorithms/blob/main/Data-Structure-Algorithms/03_DSA/02_Algorithms/02_sortingAndOrderStatics/00_heapSort.c 
creating heap from array of elements. zeroth element will be the root and left and right of any element arr[i] would be at arr[2*i+1] and arr[2*i+2].

#### 2.Quick Sort: Qucik sort can sort a list of data elements significantly faster than any of the common sorting algorithms. The basic strategy of qucik sort is to divide and conquer. it also known as partition exchange short. time complexity is O(n2) in worst case and O(log2n) in average and best case.
The element that indicate by '*' is the pivot element and the elelement that is indicated by '__' is the element whose position is finlized.
<img width="496" height="550" alt="quickSort" src="https://github.com/user-attachments/assets/a4207494-c96f-48d3-945d-b18af2d8c9b7" /> 
https://github.com/Pramod645/CPP-Data-Structure-Algorithms/blob/main/Data-Structure-Algorithms/03_DSA/02_Algorithms/02_sortingAndOrderStatics/01_QuickSort.c
#### 3.Sorting in Linear
  ##### a.Counting Sort: it work to sorted array first to find the max element in the array and then intilize the count array with the size of max find value plus one as array strta from 0th position. then place the each element at their respective index in the count array. then store the cumulative sum of the elemnt of the count array as its place the element into the index of the aray. next find the index of each element of oroginal array in the new create count array as its give cumulative count and place the element at the index.
  !Image[]
  ##### b. Radix Sort: It sort the elements by its unit place of that digit. Radix sort solves the problem of card sorting4counterintuitively4by sorting on the least significant digit first. 
  ##### c.Bucket Sort: Its from hash direct table .Bucket sort divides the interval Œ0;1/ into n equal-sized subintervals, or buckets,and then distributes the n input numbers into the buckets. Since the inputs are uniformly and independently distributed over Œ0;1/, we do not expect many numbers to fall into each bucket. To produce the output, we simply sort the numbers in each bucket and then go through the buckets in order, listing the elements in each.
  !Image[]
#### 4. Median & Order Statics
  ##### a.Minimum & Maximum
  ##### b.Randomized


#### 5.Bubble Sort: To make in ascending order, to start with 0th element is compared with the 1st element. if its found to be greather than 1st element then they are interchanged.then the 1st get compared with 2nd  so iterationo 0th to end , 1st to end and so on.time complexity in all cases is O(n2).

#### 6.Selection Sort: In this to assending order, 0th element is compared with all other elements. if the 0th elemen is found to be greather than the compared element then they are interchanged. so after the first iteration the smallest element is placed at the 0th position and this repease so on. the time complexity in all the case is O(n2).

#### 7.Insertion Sort: INsertion sort is by inserting a perticular element at the appropriate position. IN this , first iteration strats with comparision os 1st element with the 0th element. in the second iteration, 2nd element is compared with the 0th and 1st element. so in general , in every iterartion an element is compared with all elements before it. during comparision if found the elementin question can be inserted at a suitable position then space is created for it by shifting the order element on position to the right and inserting the element at the suitable position.

#### 8.Binary Tree Sort: BInary tree sort uses a binary search tree(BST). Each elelemnt scanned from the input list and placed in its proper position in binary tree. To place an element in its proper position, the element is compared with the node element. if this element is less than the element in the node, then it is placed in the left branch. if the element is greater than or equal to the node then it is placed in the right branch. now if get element according to in-order traversal then get elements in ascending ordr. worst Time complexity is O(n2) and average and best case time complexity is O(n log n).

#### 9.Merge Sort : Merging means combining two sorted lists into one sorted list. For this the elements from both the sorted lists are compared. THe smaller of both elements is then sorted in the thort array. The sorting is complete when all the elements from both the lists are placed in the third list. The time complexity is O(n log n) for all the cases.


### 1. Linear Search
in this element get fint sequentially search in the list. Searching is a case of sorted list strta from 0th element and continue untill the element is found or untill search reach till end. O(n)
### 2. Binray Search
It very fast and efficient.this require first the list of element in sorted order. and then strat comparing with the element in the center of list. if match then its done otherwise split list into two halves. it same apply for splited list. in this way first list of half is smaller then the second list of half list.