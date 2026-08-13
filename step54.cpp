#include <bits/stdc++.h>
using namespace std;
vector<int>sliding_window_maximum(vector<int>arr,int k){
//     Time = O(n × k)
// Space = O(n) for ans
//     vector<int>ans;
//     int n=arr.size();
//     for(int i=0;i<=n-k;i++){
//         int maxi=arr[i];
//         for(int j=i;j<i+k;j++){
//           maxi=max(maxi,arr[j]);
//         }
//         ans.push_back(maxi);
//     }
//     return ans;
// optimal solution
// Time  = O(n)
// Space = O(k)
deque<int>store;
vector<int>ans;
int n=arr.size();
for(int i=0;i<n;i++){
    if(!store.empty()&&store.front()<=i-k){
        store.pop_front();
    }
    while(!store.empty()&&arr[store.back()]<arr[i]){
        store.pop_back();
    }
    store.push_back(i);

    if(i>=k-1){
        ans.push_back(arr[store.front()]);
    }
}
return ans;
}
vector<int> stock_span_problem(vector<int> arr){
//    Time  = O(n²)
// Space = O(n)
//     int n=arr.size();
//      vector<int>ans(n);
//     for(int i=0;i<n;i++){
//         int span=1;
//         for(int j=i-1;j>=0;j--){
//             if(arr[j]<=arr[i]){
//                 span++;
//             }
//             else{
//                 break;
//             }
//         }
//         ans[i]=span;
//     }
//     return ans;
//   optimal solution
// Time: O(n) 🔥
// Space: O(n)

// stack<int>st;
// int n=arr.size();
// vector<int>ans(n);
// for(int i=0;i<n;i++){
//     while(!st.empty()&&arr[st.top()]<arr[i]){
//         st.pop();
//     }
//     if(st.empty()){
//         ans[i]=i+1;
//     }
//     else{
//         ans[i]=i-st.top();
//     }
//     st.push(i);
// }
// return ans;

// }
int main(){
    // vector<int>arr={4,0,-1,3,5,3,6,8};
    // int k=3;
    // vector<int>ans=sliding_window_maximum(arr,k);
    // for(auto it:ans){
    //     cout<<it<<" ";
    // }
        vector<int>arr= {120, 100, 60, 80, 90, 110, 115};
    vector<int>ans= stock_span_problem(arr);
    for(auto it:ans){
        cout<<it<<" ";
    }
    
}