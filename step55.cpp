#include <bits/stdc++.h>
using namespace std;
// int largest_substring_without_repeating_character(string s){
    // Time: O(n²)
    // Space: O(1)
    // int maxi=0;
   
    // int n=s.size();
    // for(int i=0;i<n;i++){
    //      int hashmap[256]={0};
    //     for(int j=i;j<n;j++){
    //        if(hashmap[s[j]]==1) break;
    //          hashmap[s[j]]=1;
    //        int length=j-i+1;
    //        maxi=max(maxi,length);
    //     }
      
    // }
    // return maxi;
//     int left=0;
//     int right=0;
//     int hashmap[256]={0};
//     for(int i=0;i<256;i++){
//         hashmap[i]=-1;
//     }
//     int n=s.size();
//     int maxi=0;
//     while(right<n){
//         if(hashmap[s[right]]!=-1){
//             if(hashmap[s[right]]>=left){
//                left=hashmap[s[right]]+1;
//             }
            
//         }
//          int length=right-left+1;
//          maxi=max(maxi,length);
//             hashmap[s[right]]=right;
//         right++;
//     }
//     return maxi;
// }
// int maximum_consicutive_oneIII(vector<int>nums,int k){
    // O(n²) in the worst case.
    // int maxiums.size();
    // for(int i=0;i<n;i++){
    //     int zero=0;
    //     for(int j=i;j<n;j++){
    //        if(nums[j]==0) zero++;
    //        if(zero<=k){
    //         int length=j-i+1;
    //         maxi=max(maxi,length);
    //        }
    //        else {
    //         break;
    //        }
    //     }
    // }
    // return maxi=0;
    // optimal solution
    // Your approach works in O(n) time and O(1) space.
//    int left=0 ;
//    int right=0;
//    int zero=0;
//    int maxi=0;
//    int n=nums.size();
//    while(right<n){
//     if(nums[right]==0){
//         zero++;

//     }
//     if(zero<=k){
//        int length=right-left+1;
//        maxi=max(maxi,length);
//     }
//     else{
//     if(nums[left]==0) zero--;
//     left++;
//     }

//     right++;
//    }

//     return maxi;
// }


int  fruits_into_basket(vector<int> trees,int k){
    // tc=O(n*n);
    // int maxi=0;
    
    // int n=trees.size();
    // for(int i=0;i<n;i++){
    //     set<int>stt;
    // for(int j=i;j<n;j++){
    //       stt.insert(trees[j]);
    //       if(stt.size()<=k){
    //         int length=j-i+1;
    //         maxi=max(maxi,length);
    //       }
    // }
    
    // }
    // return maxi;
    // optimal solution
//     Time: O(n) average
// Space: O(k)
    // int left=0;
    // int right=0;
    // int maxi=0;
    // unordered_map<int,int>mpp;
    // int n=trees.size();
    // while(right<n){
    //     mpp[trees[right]] =mpp[trees[right]]+1;
    //     if(mpp.size()>k){
    //         mpp[trees[left]]--;
    //         if(mpp[trees[left]]==0){
    //             mpp.erase(trees[left]);
    //         }
    //         left++;
    //     }
    //     else{
    //        int length=right-left+1;
    //         maxi=max(maxi,length);
    //     }
    //     right++;
    // }
    // return maxi;

// }
int main(){
//     string  S = "abcddabac";
//     cout<<largest_substring_without_repeating_character( S);
//     vector<int> nums = {1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0};
//     int k= 3;
//     cout<<maximum_consicutive_oneIII(nums,k);
    int k=2;
    vector<int> trees={1, 2, 3, 2, 2};
    cout<<fruits_into_basket(trees,k);

}