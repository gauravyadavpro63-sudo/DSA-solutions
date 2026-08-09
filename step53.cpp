#include <bits/stdc++.h>
using namespace std;
// vector<int> next_greater_element(vector<int> arr)
// {
//     // brute solution
//     int n = arr.size();
//     vector<int> ans(n, -1);
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[j] > arr[i])
//             {
//                 ans[i] = arr[j];
//                 break;
//             }
//         }
//     }
//     return ans;

    // optimal solution sc=O(2n) tc =(2n);
    //     stack<int>st;
    //     int n=arr.size();
    //     vector<int>ans(n);
    //     for(int i=n-1;i>=0;i--){
    //         while(!st.empty()&&st.top()<=arr[i]){
    //             st.pop();
    //         }
    //         if(st.empty()){
    //             ans[i]=-1;
    //         }
    //         else{
    //             ans[i]=st.top();
    //         }
    //         st.push(arr[i]);
    //     }
    //     return ans;
// }

// vector<int> next_greater_element2(vector<int> arr)
// {
    //     Time: O(n²)
    // Space: O(n) for ans.
    //     int n=arr.size();

    //     vector<int>ans(n,-1);
    //     for(int i=0;i<n;i++){
    //         for(int j=i+1;j<2*n;j++){
    //               int index=j%n;
    //               if(arr[index]>arr[i]){
    //                    ans[i]=arr[index];
    //                    break;
    //               }
    //         }
    //     }
    //     return ans;
    // Time  → O(n)
    // Space → O(n)
    //     int n = arr.size();

    //     vector<int> ans(n, -1);
    //     stack<int> st;

    //     for (int i = 2 * n - 1; i >= 0; i--) {

    //         while (!st.empty() && st.top() <= arr[i % n]) {
    //             st.pop();
    //         }

    //         if (i < n) {
    //             if (!st.empty()) {
    //                 ans[i] = st.top();
    //             }
    //         }

    //         st.push(arr[i % n]);
    //     }

    //     return ans;
    // }
// }
    // vector<int> next_smaller_element(vector<int> arr)
    // {
    //     int n = arr.size();
    //     vector<int> ans(n, -1);
    //     stack<int> st;
    //     for (int i = n - 1; i >= 0; i--)
    //     {
    //         while (!st.empty() && st.top() >= arr[i])
    //         {
    //             st.pop();
    //         }
    //         if (!st.empty())
    //         {
    //             ans[i] = st.top();
    //         }
    //         st.push(arr[i]);
    //     }
    //     return ans;
    // }
   
// int traping_rain_water(vector<int>buildings){
//     Time: O(n) — three linear passes
// Space: O(n) — two extra arrays
//     int n=buildings.size();
//     int ans=0;

//     vector<int>prefixmaxarr(n);
//     prefixmaxarr[0]=buildings[0];
//     for(int i=1;i<n;i++){
//        prefixmaxarr[i]=max(prefixmaxarr[i-1],buildings[i]);
//     }

//     vector<int>suffixmaxarr(n);
//     suffixmaxarr[n-1]=buildings[n-1];
//     for(int i=(n-2);i>=0;i--){
//         suffixmaxarr[i]=max(suffixmaxarr[i+1],buildings[i]);
//     }





//     for(int i=0;i<n;i++){
//         int prefixmax=prefixmaxarr[i];
//         int suffixmax=suffixmaxarr[i];
//         ans+=min(prefixmax,suffixmax)-buildings[i];
//     }
//     return ans;

// optimal solution
// Time: O(n)
// Space: O(1) 🚀
// int n=buildings.size();
// int total=0;
// int leftmax=0;
// int rightmax=0;
// int left=0;
// int right=n-1;
// while(left<right){
//    if(buildings[left]<=buildings[right]){
//       if(leftmax>buildings[left]){
//         total+=leftmax-buildings[left];
//       }
//       else{
//         leftmax=buildings[left];
//          }
//          left++;
//    }
//    else{
//     if(rightmax>buildings[right]){
//         total+=rightmax-buildings[right];
//     }
//     else{
//         rightmax=buildings[right];
      
//     }
//     right--;
//    }
   
// }
// return total;

// }
vector<int> functionfront(vector<int> arr){
    int n=arr.size();
    vector<int>ans(n);
    stack<int>st;
    for(int i=n-1;i>=0;i--){
        while(!st.empty()&&arr[st.top()]>=arr[i]){
            st.pop();
        }
        if(st.empty()){
            ans[i]=n;
        }
        else{
            ans[i]=st.top();
        }
        st.push(i);
    }
    return ans;
    
}
vector<int>functionback(vector<int>arr){
    int n=arr.size();
    vector<int>ans(n);
    stack<int>st;
    for(int i=0;i<n;i++){
       while(!st.empty()&&arr[st.top()]>arr[i]){
        st.pop();
       }
       if(st.empty()){
        ans[i]=-1;
       }
       else {
        ans[i]=st.top();
       }
       st.push(i);
    }
    return ans;
}
 int sum_of_subarray_minimum(vector<int>arr){

    vector<int>previossmallerindex=functionback(arr);
    vector<int>nextsmallerindex=functionfront(arr);
    long long mod=1e9+7;
    long long ans=0;
    long long leftelements=0;
    long long rightelements=0;
    int n=arr.size();
    for(int i=0;i<n;i++){
        leftelements=i-previossmallerindex[i];
        rightelements=nextsmallerindex[i]-i;
        ans=(ans+(leftelements*1LL*rightelements*arr[i])%mod)%mod;
    }
    return ans;
 }
    int main()
{
    vector<int> arr = {4, 5, 2, 10, 8};
    //     for(auto it:next_greater_element(arr)){
    //         cout<<it<<" ";
    //     }
    //  for(auto it:next_greater_element2(arr)){
    //     cout<<it<<" ";
    //  }
    // for (auto it : next_smaller_element(arr))
    // {
    //     cout << it << " ";
    // // }
    // vector<int>buildings={0,1,0,2,1,0,1,3,2,1,2,1};
    // cout<<traping_rain_water(buildings);

    cout<<sum_of_subarray_minimum(arr);
}