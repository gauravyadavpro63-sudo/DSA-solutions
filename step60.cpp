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
// int kth_largest_element_in_arr(vector<int>arr,int k){

    // brute force O(nlog(n));
    // int n=arr.size();
    
    //     sort(arr.begin(),arr.end());
    //     return arr[n-k];
    // optimal solution
    // This is a clean O(n log k), O(k) heap solution. ✅
//     int n=arr.size();
//     priority_queue<int,vector<int>,greater<int>>pq;
//     for(int i=0;i<n;i++){
//         pq.push(arr[i]);
//         if(pq.size()>k) pq.pop();
//     }
//     return pq.top();
    
// }
//  void k_sorted_array(vector<int>arr,int k){
    // now tc is nlog(k) and for normal sorting it would have nlog(n);
//    int n=arr.size();
//    priority_queue<int,vector<int>,greater<int>>pq;
//    vector<int>ans;
//    for(int i=0;i<min(n,k+1);i++){
//        pq.push(arr[i]);
//    }
//    for(int i=k+1;i<n;i++){
//     ans.push_back(pq.top());
//     pq.pop();
//     pq.push(arr[i]);
//    }
//    while(!pq.empty()){
//     ans.push_back(pq.top());
//     pq.pop();
//    }

//     for(auto it:ans){
//     cout<<it<<" ";
//  }
// //  }
// void replace_element_by_its_rank_in_array(vector<int>arr){
// Time  = O(N log N)
// Space = O(N)
//     priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
//     int n=arr.size();
//     vector<int>ans(n);
//     for(int i=0;i<n;i++){
//         pq.push({arr[i],i});
//     }
//     int rank=0;
//     int previous=INT_MAX;
//     while(!pq.empty()){
//         pair<int,int> temp =pq.top();
//         int value=temp.first;
//         int index=temp.second;
//           if(value!=previous){
//             rank++;
//             previous=value;
//           }
//           ans[index]=rank;
//           pq.pop();
//     }


//     for(auto it:ans){
//         cout<<it<<" ";

//     }

// }

// int Task_sheduler(vector<char>tasks,int n){
    // Time Complexity: O(N)
// Space Complexity: O(26) = O(1)
//     int size=tasks.size();
//     vector<int>hashmap(26,0);
//     for(int i=0;i<size;i++){
//         hashmap[tasks[i]-'A']++;
//     }
//      int maxfreq=0;
//     for(int i=0;i<size;i++){
//       maxfreq=max(maxfreq,hashmap[i]);
//     }
//    int count=0;
//     for(int i=0;i<size;i++){
//        if(hashmap[i]==maxfreq){
//         count++;
//        }
//     }

//     return max((maxfreq-1)*(n+1)+count,size);

//    priority_queue solution

// Frequency counting → O(N)
// Heap operations → effectively O(N log 26) → O(N)
// Space → O(26) → O(1)

//  int size=tasks.size();
//  vector<int>hashmap(26,0);
//  for(int i=0;i<size;i++){
//     hashmap[tasks[i]-'A']++;
//  }
//  priority_queue<int>pq;
//  for(int i=0;i<hashmap.size();i++){
//     if(hashmap[i]>0){
//         pq.push(hashmap[i]);
//     }
//  }

//  int time=0;
//  while(!pq.empty()){
//     vector<int>temp;
//     for(int i=0;i<=n;i++){
//         if(!pq.empty()){
//       int f=pq.top();
//       pq.pop();
//       f--;
//       if(f>0){
//         temp.push_back(f);
//       }
//       time++;
//     }
//     else{
//         if(temp.empty()){
//             break;
//         }
//         time++;
//     }
//     }
//     for(auto it:temp){
//         pq.push(it);
//     }
//  }
//  return time;
// }

// bool hands_of_straight(vector<int>hand,int groupsize){
    // O(N log N)
    //    int size=hand.size();
    //    if(size%groupsize!=0) return false;
    //    map<int,int>mpp;
    //    for(int i=0;i<size;i++){
    //     mpp[hand[i]]++;
    //    }

    //     while(!mpp.empty()){
    //         int minn=mpp.begin()->first;
    //         for(int i=0;i<groupsize;i++){
    //           int card=minn+i;
    //           if(mpp.find(card)==mpp.end()) return false;
    //           mpp[card]--;
    //           if(mpp[card]==0) mpp.erase(card);
    //         }
    //     }
    //     return true;
// }
int main(){
    // vector<int>arr={2,3,11,22,1,2,1};
//     // cout<<is_array_represent_min_heap(arr);
//     int k=2;
// cout<<    kth_largest_element_in_arr(arr,k);
// vector<int>arr = {6, 5, 3, 2, 8, 10, 9};
// int k = 3;
//  k_sorted_array(arr,k);

//linkdin question do later bro after reading revising linkdlist;


// replace_element_by_its_rank_in_array(arr);
// vector<char>tasks = {'A','A','A','B','B','B'};
// int n=2;
// cout<<Task_sheduler(tasks,n);

// vector<int>hand = {1,2,3,6,2,3,4,7,8}; 
// int groupsize = 3;
// cout<<hands_of_straight(hand,groupsize);


   
}