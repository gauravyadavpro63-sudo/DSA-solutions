#include <bits/stdc++.h>
using namespace std;
void heplify(int arr[],int k,int index){
    while(true){
        int left=2*index+1;
        int right=2*index+2;
        int biggest=index;
        if(left<k&&arr[left]>arr[biggest]) biggest=left;
        if(right<k&&arr[right]>arr[biggest]) biggest=right;
        if(biggest==index) break;
        swap(arr[biggest],arr[index]);
        index=biggest;
    }
}
void buildMaxHeap(int arr[],int k){
    for(int i=(k/2)-1;i>=0;i--){
      heplify(arr,k,i);
    }
}


void heapsort(int arr[],int k){
    // O(n) + O(n log n)
    //     ↓
    //  O(n log n)
    buildMaxHeap(arr,k);
    for(int i=k-1;i>=0;i--){
        swap(arr[0],arr[i]);
        heplify(arr,i,0);
    }
}
void print(int arr[],int k){
   for(int i=0;i<k;i++){
    cout<<arr[i]<<" ";
   }
}
int main(){
    int arr[]={2,3,4,121,100,12};
    int k=6;
    heapsort(arr,k);
    print(arr,k);
}



// priority queue is implemented by max heap

// priority_queue<int>p;  //max heap
// p.push(10);
// p.push(20);
// p.top();  /20
// p.pop(); deleted 20
// p.size()


priority_queue<int,vector<int>,greater<int>>p; //min heap
