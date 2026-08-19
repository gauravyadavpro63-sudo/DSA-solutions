#include <bits/stdc++.h>
using namespace std;
// vector<int>sliding_window_maximum(vector<int>arr,int k){
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
// deque<int>store;
// vector<int>ans;
// int n=arr.size();
// for(int i=0;i<n;i++){
//     if(!store.empty()&&store.front()<=i-k){
//         store.pop_front();
//     }
//     while(!store.empty()&&arr[store.back()]<arr[i]){
//         store.pop_back();
//     }
//     store.push_back(i);

//     if(i>=k-1){
//         ans.push_back(arr[store.front()]);
//     }
// }
// return ans;
// }
// vector<int> stock_span_problem(vector<int> arr){
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

int celebrity_problem(vector<vector<int>>matrix){
    // brute approach Your current solution is O(n²) time and O(n) space.
    // int row=matrix[0].size();
    // int column=matrix.size();
    // int n=row;
    // vector<int>who_i_know(n);
    // vector<int>who_know_me(n);

    // for(int i=0;i<row;i++){
    //     for(int j=0;j<column;j++){
//             if(matrix[i][j]==1){
//                 who_i_know[i]++;
//             }
//             if(matrix[j][i]==1){
//                 who_know_me[i]++;
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//      if(who_i_know[i]==0&&who_know_me[i]==n-1){
//         return i;
//      }
     
//     }
//     return -1;
// optimal solution
// Candidate elimination → O(n)
// Candidate verification → O(n)
// Extra space → O(1)
// int n=matrix.size();
// int high=0;
// int low=n-1;

// while(high<low){
//     if(matrix[high][low]==1) high++;
//      else if(matrix[low][high]==1) low--;
//     else{
//           high++;
//           low--;
//     }

// }
// for(int i=0;i<n;i++){
//     if(i==low) continue;
//     if(matrix[low][i]!=0||matrix[i][low]!=1){
//         return -1;
//     }
// }
// return low;

// }
int main(){
    // vector<int>arr={4,0,-1,3,5,3,6,8};
    // int k=3;
    // vector<int>ans=sliding_window_maximum(arr,k);
    // for(auto it:ans){
    //     cout<<it<<" ";
    // }
    //     vector<int>arr= {120, 100, 60, 80, 90, 110, 115};
    // vector<int>ans= stock_span_problem(arr);
    // for(auto it:ans){
    //     cout<<it<<" ";
    // }
   vector<vector<int>>matrix = { {0, 1, 1, 0}, {0, 0, 0, 0}, {1, 1, 0, 0}, {0, 1, 1, 0} };
   cout<<celebrity_problem(matrix);
    
}