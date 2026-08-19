#include <bits/stdc++.h>
using namespace std;
int largest_substring_without_repeating_character(string s){
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
    int left=0;
    int right=0;
    int hashmap[256]={0};
    for(int i=0;i<256;i++){
        hashmap[i]=-1;
    }
    int n=s.size();
    int maxi=0;
    while(right<n){
        if(hashmap[s[right]]!=-1){
            if(hashmap[s[right]]>=left){
               left=hashmap[s[right]]+1;
            }
            
        }
         int length=right-left+1;
         maxi=max(maxi,length);
            hashmap[s[right]]=right;
        right++;
    }
    return maxi;
}
int main(){
    string  S = "abcddabac";
    cout<<largest_substring_without_repeating_character( S);
}