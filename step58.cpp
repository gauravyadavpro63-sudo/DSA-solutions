// TC for building heap from unsorted array 



// 1. Insert elements one by one → O(n log n)
// for every element:
//     insert
//     heapify up → O(log n)

// For n elements:

// n × O(log n) = O(n log n)
// 2. Bottom-up heap construction → O(n) ⚡

// This is the efficient method.

// Start from the last non-leaf node and perform heapify down:

// for (int i = n / 2 - 1; i >= 0; i--) {
//     heapifyDown(i);
// }

// Although one heapifyDown() can take O(log n), not every node takes O(log n).

// Nodes near the bottom have very small height → almost O(1)
// Only a few nodes near the top can move many levels

// So the total becomes:

// O(n)
// Summary
// Method	Time Complexity
// Insert one by one + heapify up	O(n log n)
// Bottom-up build heap + heapify down	O(n)

// The surprising part is why many O(log n) heapify operations together 
// become O(n). The key is that most nodes are leaves or very close to leaves.

#include <bits/stdc++.h>
using namespace std;
void Heapify(int arr[],int size,int index){

    while(true){
        int left=2*index+1;
        int right=2*index+2;
        int bigger=index;
        if(left<size&&arr[left]>arr[bigger]) bigger=left;
        if(right<size&&arr[right]>arr[bigger]) bigger=right;
        if(bigger==index) break;
        swap(arr[bigger],arr[index]);
        index=bigger;    
}
}
void BuildMaxHeap(int arr[],int size){
    // BuildMaxHeap() is O(n), not O(n log n)
    for(int i=(size/2)-1;i>=0;i--){
       Heapify(arr,size,i);
    }
}
void print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<< "  ";
    }
}
int main(){
    int arr[]={23,32,1,12,32,12,43,100};
    int size=8;
    BuildMaxHeap(arr,size);
    print(arr,size);
}