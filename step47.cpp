#include <bits/stdc++.h>
using namespace std;

bool pallindrome(int left,int right,string s){
   while(left<right){
    if(s[left]!=s[right]) return false;
    left++;
    right--;
   }
   return true;
}
int solve(string s,int index){
if(index==s.size()) return 0;
int mini=INT_MAX;
for(int i=index;i<s.size();i++){
    if(pallindrome(index,i,s)){
    int segment=1+solve(s,i+1);
    mini=min(segment,mini);
    }
}
    return mini;
}
// tc=O(n*2^n) sc=O(n)
int palindrom_partioning(string s){
  int  index=0;
    int cuts=solve(s,index)-1;
    return cuts;
}
int main(){
    cout<<palindrom_partioning("aab");
}