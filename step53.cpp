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
   
int traping_rain_water(vector<int>buildings){
    int n=buildings.size();
    int ans=0;

    vector<int>prefixmaxarr(n);
    prefixmaxarr[0]=buildings[0];
    for(int i=1;i<n;i++){
       prefixmaxarr[i]=max(prefixmaxarr[i-1],buildings[i]);
    }

    vector<int>suffixmaxarr(n);
    suffixmaxarr[n-1]=buildings[n-1];
    for(int i=(n-2);i>=0;i--){
        suffixmaxarr[i]=max(suffixmaxarr[i+1],buildings[i]);
    }





    for(int i=0;i<n;i++){
        int prefixmax=prefixmaxarr[i];
        int suffixmax=suffixmaxarr[i];
        ans+=min(prefixmax,suffixmax)-buildings[i];
    }
    return ans;
}
    int main()
{
    // vector<int> arr = {4, 5, 2, 10, 8};
    //     for(auto it:next_greater_element(arr)){
    //         cout<<it<<" ";
    //     }
    //  for(auto it:next_greater_element2(arr)){
    //     cout<<it<<" ";
    //  }
    // for (auto it : next_smaller_element(arr))
    // {
    //     cout << it << " ";
    // }
    vector<int>buildings={0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<traping_rain_water(buildings);
}