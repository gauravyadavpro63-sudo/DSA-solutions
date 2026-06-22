#include <bits/stdc++.h>
using namespace std;

// int maximum_profit(int arr[]){
//    int mini=arr[0] ,profit=0;
//    for(int i=1;i<6;i++){
//     int cost=arr[i]-mini;
//     profit=max(profit,cost);
//     mini=min(mini,arr[i]);
//    }
//    return profit;
// }
// vector<int> element_in_alternate_order(vector<int> arr){
    // brute solution tc=O(n+n/2) sc=O(n)
// int pos[]={3,1,2};
// int neg[]={-2,-5,-4};
// for(int i=0;i<6/2;i++){
//     arr[2*i]=pos[i];
//     arr[2*i+1]=neg[i];
// }
// return arr; 
// optimal solution sc=O(n) tc =O(n);
// vector<int> ans(6,0);
// int pIndex=0,nIndex=1;
// for(int i=0;i<6;i++){
//     if(arr[i]<0){
//         ans[nIndex]=arr[i];
//         nIndex+=2;
//     }
//     else{
//         ans[pIndex]=arr[i];
//         pIndex+=2;
//     }
// }
// return ans;
// }

/* if given array is not equal*/
// tc=O(n)+O(min(pos,neg))+O(laftover)=0(2n) sc=O(n)
// vector<int> element_in_alternate_order_unequal(vector<int> &arr1){
//     vector<int> pos,neg;
//     int n=arr1.size();
//     for(int i=0;i<n;i++){
//         if(arr1[i]>0){
//             pos.push_back(arr1[i]);
//         }
//         else{
//             neg.push_back(arr1[i]);
//         }
//     }
//     if(pos.size()>neg.size()){
//         for(int i=0;i<neg.size();i++){
//         arr1[2*i]=pos[i];
//         arr1[2*i+1]=neg[i];
//         }
//         int index=neg.size()*2;
//         for(int i=neg.size();i<pos.size();i++){
//             arr1[index]=pos[i];
//             index++;
//         }
//     }
//     else{
//         for(int i=0;i<pos.size();i++){
//             arr1[2*i]=pos[i];
//             arr1[2*i+1]=neg[i];
//         }
//         int index=pos.size()*2;
//         for(int i=pos.size();i<neg.size();i++){
//             arr1[index]=neg[i];
//             index++;
//         }
//     }
//     return arr1;

// }


int main(){
    // int arr[] ={7,1,5,3,6,4}; /*these are cost and selling price on that day*/
    // cout<<maximum_profit(arr);
    // vector<int> arr={3,1,-2,-5,2,-4};
    // vector<int> arr1={2,3,4,-6,-8,1,7}; /*if given array is not equal*/
    // for(auto it:element_in_alternate_order(arr)){
    //     cout<<it<<" ";
    // }
//     for(auto it:element_in_alternate_order_unequal(arr1)){
//         cout<<it<<" ";
//     }
}