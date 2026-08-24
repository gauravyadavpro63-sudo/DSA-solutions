#include <bits/stdc++.h>
using namespace std;
// int longest_substring_withatmost_k_distinct_character(string s,int k){
    // O(n²)
    // int maxi=0;
    // int n=s.size();
    // for(int i=0;i<n;i++){
    //     unordered_map<char,int>mpp;
    //     for(int j=i;j<n;j++){
    //        mpp[s[j]]++;
    //        if(mpp.size()<=k){
    //         int length=j-i+1;
    //         maxi=max(maxi,length);
    //        }
    //        else {
    //         break;
    //        }
    //     }
    // }
    // return maxi; 
    // optimal solution
//     int n=s.size();
//     int left=0;
//     int right=0;
//     int maxi=0;
//     unordered_map<char,int>mpp;
//     while(right<n){
//      mpp[s[right]]++;
//      if(mpp.size()<=k){
//         int length=right-left+1;
//         maxi=max(maxi,length);
//      }
//      else{
//         mpp[s[left]]--;
//         if(mpp[s[left]]==0) mpp.erase(s[left]);
//         left++;
//      }
//      right++;
//     }
//     return maxi;
// }
int subarray_less_than_equal_to_k_different_integer(vector<int>arr,int k){
    int left=0;
    int right=0;
    int count=0;
    unordered_map<int,int>mpp;
    int n=arr.size();
    while(right<n){
        mpp[arr[right]]++;
        while(mpp.size()>k){
            mpp[arr[left]]--;
            if(mpp[arr[left]]==0){
                mpp.erase(arr[left]);
               
            }
            left++;
        }
         count+=right-left+1;
        right++;
    }
    return count;
}
 int subarray_with_k_different_integer(vector<int>arr,int k){
//     Time  = O(n²)
// Space = O(k) approximately
//      int n=arr.size();
//      int count=0;
     
//      for(int i=0;i<n;i++){
//         unordered_map<int,int>mpp;
//         for(int j=i;j<n;j++){
//             mpp[arr[j]]++;
//             if(mpp.size()==k){
//                 count++;
//             }
//             else if(mpp.size()>k){
//                 break;
//             }
//         }
//      }
    //  return count;
    // optimal solution
    return (subarray_less_than_equal_to_k_different_integer(arr,k)-subarray_less_than_equal_to_k_different_integer(arr,k-1));
 }
int main(){
//     string s = "aababbcaacc";
//     int k=2;
//    cout<< longest_substring_withatmost_k_distinct_character(s,k);
vector<int>arr = {1, 2, 1, 2, 3};
int  k = 2;  
 cout<<subarray_with_k_different_integer(arr,k);


}