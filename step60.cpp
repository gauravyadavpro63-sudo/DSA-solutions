#include <bits/stdc++.h>
using namespace std;
// bool is_array_represent_min_heap(vector<int>arr){
//     // Time  → O(n)
// // Space → O(1)
//     int n=arr.size();
//     for(int i=0;i<=(n/2)-1;i++){
//         int left=2*i+1;
//         int right=2*i+2;
//         if(left<n&&arr[left]<arr[i]){
//             return false;
//         }
//         if(right<n&&arr[right]<arr[i]){
//             return false ;
//         }
//     }
//     return true;
// }
int kth_largest_element_in_arr(vector<int>arr,int k){

    // brute force O(nlog(n));
    // int n=arr.size();
    
    //     sort(arr.begin(),arr.end());
    //     return arr[n-k];
    // optimal solution
    // This is a clean O(n log k), O(k) heap solution. ✅
    int n=arr.size();
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
        if(pq.size()>k) pq.pop();
    }
    return pq.top();
    
}
int main(){
    vector<int>arr={2,3,11,22,1,2,1};
    // cout<<is_array_represent_min_heap(arr);
    int k=2;
cout<<    kth_largest_element_in_arr(arr,k);
}