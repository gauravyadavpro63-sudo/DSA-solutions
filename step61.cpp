// design twitter directly in leetcode solved {very good and hard question }


#include <bits/stdc++.h>
using namespace std;
// int minimum_cost_to_connect_sticks(vector<int>arr){
    // Time complexity: O(n log n)
// Space complexity: O(n)
    // priority_queue<int,vector<int>,greater<int>>pq;
    // for(int i=0;i<arr.size();i++){
    //    pq.push(arr[i]);
    // }
    // int sum=0;
    // int cost=0;
    // while(pq.size()>1){
    //     int first=pq.top();
    //     pq.pop();
    //     int second=pq.top();
    //     pq.pop();
    //     sum=first+second;
    //     cost+=sum;
    //     pq.push(sum);

//     }
//     return cost;
// }

// int kth_largest_element_in_steam_of_running_integer(vector<int>arr,int k){
//     priority_queue<int,vector<int>,greater<int>>pq;
    // tc: O(n log k)
    // Space:       O(k)
//     for(auto it:arr){
//         pq.push(it);
//         if(pq.size()>k){
//             pq.pop();
//         }
//     }

//     return pq.top();
    
// // }
// vector<int> maximum_sum_combination(vector<int>arr1,vector<int>arr2,int k){
//     sort(arr1.rbegin(),arr1.rend());
//     sort(arr2.rbegin(),arr2.rend());
//     Time  → O(n log n + m log m + k log k)
// Space → O(k)

//     priority_queue<tuple<int,int,int>>pq;
//     set<pair<int,int>>visited;
//      vector<int>ans;
//      pq.push({arr1[0]+arr2[0],0,0});
//      visited.insert({0, 0});
//     while(k>0){
//      auto values=pq.top();
//      pq.pop();
//      int sum=get<0>(values);
//      int i=get<1>(values);  
//      int j=get<2>(values); 
//      ans.push_back(sum);
     
//      if(i+1<arr1.size()&&!visited.count({i+1,j})){
//         pq.push({arr1[i+1]+arr2[j],i+1,j});
       
//         visited.insert({i+1,j});
         
//      }
//      if(j+1<arr2.size()&&!visited.count({i,j+1})){
//         pq.push({arr1[i]+arr2[j+1],i,j+1});
//         visited.insert({i,j+1});
//      }
//        k--;
//     }
//     return ans;
// }

vector<int> top_k_frequent_element(vector<int>arr,int k){
//     TC = O(n + m log k)
// SC = O(n)
    
//     unordered_map<int,int>mpp;
//     for(auto it:arr){
//         mpp[it]++;
//     }
//     vector<pair<int,int>>store;
//     for(auto it:mpp){
//         store.push_back({it.second,it.first});
//     }
//     priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
//     for(int i=0;i<store.size();i++){
//         pq.push(store[i]);
//         if(pq.size()>k){
//             pq.pop();
//         }

//     }
//     vector<int>ans;
//    while(!pq.empty()){
//     ans.push_back(pq.top().second);
//     pq.pop();
//    }
// return ans;
    
// }
int main(){
    
// vector<int>arr={2, 3, 4,43,4,1,90};

//   cout<<minimum_cost_to_connect_sticks(arr);
// int k=3;  
// cout<<kth_largest_element_in_steam_of_running_integer(arr,k);  //solve leetcode one

// vector<int>arr1={1,3,5,12,};
// vector<int>arr2={87,23,1,2};
// int k=3;
// for(auto it : maximum_sum_combination(arr1,arr2,k)){
//     cout<<it<<" ";
// }

//  find median from data stream    {do it on leetcode directly easy hai bhut  just chatgpt }




// vector<int> arr = {1,1,1,2,2,3};
// int  k = 2;

// for(auto it:top_k_frequent_element(arr,k)){
//           cout<<it<<" ";
// }
}