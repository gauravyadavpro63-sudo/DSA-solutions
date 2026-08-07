#include <bits/stdc++.h>
using namespace std;
vector<int> next_greater_element(vector<int>arr){
    // brute solution
    int n=arr.size();
    vector<int>ans(n,-1);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                ans[i]=arr[j];
                break;
            }
            
        }
        
    }
    return ans;



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
}
int main(){
    vector<int>arr={4, 5, 2, 10, 8};
    for(auto it:next_greater_element(arr)){
        cout<<it<<" ";
    }
}