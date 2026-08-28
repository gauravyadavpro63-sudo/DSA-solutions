// A heap is a specialized tree-based data structure that satisfies the heap property. 
// It is commonly used to implement priority queues.

// There are two main types:

// Max Heap

// Every parent node is greater than or equal to its children.
// The largest element is always at the root.

// Example:

//       50
//      /  \
//    30    40
//   / \    /
// 10  20 35

// Min Heap

// Every parent node is less than or equal to its children.
// The smallest element is always at the root.

// Example:

//       10
//      /  \
//    20    15
//   / \    /
// 30  40 25
// Key Characteristics
// Usually implemented as an array, not with linked nodes.
// It is a complete binary tree, meaning all levels are completely filled except possibly the last, which is filled from left to right.

// For an array representation:

// Parent of index i: (i - 1) / 2
// Left child: 2i + 1
// Right child: 2i + 2
// Common Operations
// Operation	Time Complexity
// Get max/min	O(1)
// Insert	O(log n)
// Delete root	O(log n)
// Build heap	O(n)
// Applications
// Priority queues
// Heap sort (sorting in O(n log n))
// Graph algorithms like Dijkstra's and Prim's
// Scheduling tasks based on priority
// Finding the largest or smallest k elements
// Example

// Suppose you insert the numbers 20, 15, 30, 10, 40 into a max heap.

// Final heap:

//        40
//       /  \
//     30    20
//    / \
//  10  15

// The largest element (40) is always at the root, making it quick to retrieve.

// Heap is complete binary tree

// A complete binary tree is a binary tree where:

// Every level is completely filled, except possibly the last level.
// The last level is filled from left to right, with no gaps.

// Example of a complete binary tree:

//         1
//        / \
//       2   3
//      / \  /
//     4  5 6

// This is complete because the last level (4, 5, 6) is filled from the left side.

// ❌ Not a complete binary tree:

//         1
//        / \
//       2   3
//        \   \
//         5   7

// There are gaps before nodes 5 and 7, so it isn't complete.

// This property is why heaps are easy to store in arrays, Kaneki 👀

// Tree:              Array:

//        10          [10, 20, 15, 30, 40]
//       /  \
//     20    15
//    / \
//  30  40

// The nodes are stored level by level, from left to right.




// Kaneki, building a heap takes O(n) time, not O(n log n).

// Why not O(n log n)?

// If you insert n elements one by one:

// Insert 1 → O(log n)
// Insert 2 → O(log n)
// ...
// Insert n → O(log n)

// Worst-case:

// n × O(log n) = O(n log n)

// But when we build a heap efficiently using heapify, we start from the last non-leaf node and move upward:

// Array → [4, 10, 3, 5, 1]

//         4
//        / \
//      10   3
//     / \
//    5   1

// We apply heapify from bottom to top.

// Nodes near the bottom take very little time to heapify, and only a few nodes near the top can take O(log n).
//  When you add all that work together:

// O(n)

// So remember:

// Method	Time
// Insert elements one by one	O(n log n)
// Build heap using bottom-up heapify	O(n)

// The surprising part is that heapify for one node can be O(log n), but building the entire heap bottom-up is O(n).
// when we talk about deletion in heap we are actually talking about deliting top most (root ) element 



#include <bits/stdc++.h>
using namespace std;
class Maxheap{
     public:
    int *arr;
    int size;
    int total;
   
    Maxheap(int n){
       arr=new int[n];
       size=0;
        total=n;
    }
    void insert(int val){
        // tc=log(n);
      arr[size]=val;   // we can use vector instead  v.pushback(val)   ; index =v.size()-1
      int index=size;
      size++;

      while(index>0){
        int parent_index=(index-1)/2;
        if(arr[parent_index]<arr[index]){
            swap(arr[parent_index],arr[index]);
            index=parent_index;
        }
        else{
            break;
        }
      }
    }
    void delette(){
        // tc=log(n)
      if(size<=0){
        return;
      }
      swap(arr[0],arr[size-1]);
      size--;
      int index=0;
      while(true){

        int left=2*index+1;
        int right=2*index+2;
        int biggest =index;
        if(left<size&&arr[left]>arr[biggest]){
            biggest=left;
        }
        if(right<size&&arr[right]>arr[biggest]){
            biggest=right;
        }
        if(biggest==index){
            break;
        }
        swap(arr[biggest],arr[index]);
        index=biggest;
      }
    }
    void  print(){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
};

int main(){
    
    Maxheap m1(10);
    m1.insert(2);
    m1.insert(10);
    m1.insert(939);
    m1.delette();
    m1.print();

}


