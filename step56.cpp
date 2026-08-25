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
// // }
// int subarray_less_than_equal_to_k_different_integer(vector<int>arr,int k){
//     int left=0;
//     int right=0;
//     int count=0;
//     unordered_map<int,int>mpp;
//     int n=arr.size();
//     while(right<n){
//         mpp[arr[right]]++;
//         while(mpp.size()>k){
//             mpp[arr[left]]--;
//             if(mpp[arr[left]]==0){
//                 mpp.erase(arr[left]);
               
//             }
//             left++;
//         }
//          count+=right-left+1;
//         right++;
//     }
//     return count;
// }
//  int subarray_with_k_different_integer(vector<int>arr,int k){
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
    // return (subarray_less_than_equal_to_k_different_integer(arr,k)-subarray_less_than_equal_to_k_different_integer(arr,k-1));
//  }
string minimum_window_substring(string s,string t){
    // Time: O(n² × k)
    // Space: O(k)
    
    // int maxlength=INT_MAX;
    //  int start=-1;   
    // unordered_map<char,int>need;
    // for(auto it:t){
    //   need[it]++;
    // }
    // int n=s.size();
    // for(int i=0;i<n;i++){
    //     unordered_map<char,int>window;
    //     for(int j=i;j<n;j++){
    //          window[s[j]]++;
    //          int valid=true;  
    //         for(auto it:need){
    //             if(window[it.first]<it.second){
    //                 valid=false;
    //                 break;
    //             }
    //         }
    //         if(valid==true){
    //             if(j-i+1<maxlength){
    //                 maxlength=j-i+1;
    //                 start=i;
    //             }
    //         }
    //     }
    // }
    
    
    
    // if(start==-1) return "";
    
    // string ans=s.substr(start,maxlength);
    // return ans;


    // optimal solution 
//     Time Complexity:  O(n + m)
// Space Complexity: O(k) ≈ O(1)
    if(t.size()>s.size()) return "";
    unordered_map<char,int>need;
    for(auto it:t){
        need[it]++;
    }
    int require=need.size();
    int left=0;
    int right=0;
    int minlength=INT_MAX;
    int n=s.size();
    int start=0;
    int count=0;
     unordered_map<char,int>window;
    while(right<n){
       window[s[right]]++;
        if(need.count(s[right])&&window[s[right]]==need[s[right]]){
            count++;
        }
        while(require==count){
            if(right-left+1<minlength){
                minlength=right-left+1;
                start=left;
            }
            window[s[left]]--;
            if(need.count(s[left])&&window[s[left]]<need[s[left]]){
                count--;
            }
            left++;
        }
        right++;
    }
    if(minlength==INT_MAX) return "";
    string ans=s.substr(start,minlength);
    return ans; 
}
int main(){
//     string s = "aababbcaacc";
//     int k=2;
//    cout<< longest_substring_withatmost_k_distinct_character(s,k);
// vector<int>arr = {1, 2, 1, 2, 3};
// int  k = 2;  
//  cout<<subarray_with_k_different_integer(arr,k);
string s="adobecodebanc";
string t="bec";
cout<<minimum_window_substring(s,t);


}