#include <bits/stdc++.h>
using namespace std;

vector<int> next_greator_permutation(vector<int>&arr){
    // direct method
//     next_permutation(arr.begin(),arr.end()); 
//     return arr;
// tc=O(3n) sc=O(1);     //6354 question
// int index=-1;
// int n=arr.size(); 
// for(int i=n-2;i>=0;i--){
//     if(arr[i]<arr[i+1]){
//         index=i;
//         break;
//     }
// }
// if(index==-1){
//     reverse(arr.begin(),arr.end());
//     return arr;
// }
// for(int i=n-1;i>index;i--){
//     if(arr[i]>arr[index]){
//         swap(arr[i],arr[index]);
//         break;
//     }
// }
// reverse(arr.begin()+index+1,arr.end());
// return arr;
}

vector<int> leaders(vector<int>&arr){

    // brute tc=O(n*n) sc=o(n) to store the answer
    // int leader;
    // vector<int>ans;
    // for(int i=0;i<arr.size();i++){
    //     int leader=true;
    //     for(int j=i+1;j<arr.size();j++){
    //         if(arr[j]>arr[i]){
    //             leader=false;
    //             break;
    //         }
    //     }
    //     if(leader==true) ans.push_back(arr[i]); 
       
        
    // }
    // return ans;
    // optimal solution sc=O(n) tc=O(n+nlogn)

    // vector<int> ans;
    // int maxi=INT_MIN;
    // int n=arr.size(); 
    // for(int i=n-1;i>=0;i--){
    //     if(arr[i]>maxi){
    //         ans.push_back(arr[i]);
    //     }
    //     maxi=max(maxi,arr[i]);
    // }
    // sort if you want ans in short form
//     sort(ans.begin(),ans.end());
//     return ans;
}

bool exists(vector<int>&arr2,int num){
//     for(auto it:arr2){
//         if(it==num) return true;
//     }
//     return false;
}

int longest_consecutive_sequence(vector<int>arr2){
// brute sc=O(n*n) sc=O(1);

// int longest =0;
// for(int i=0;i<arr2.size();i++){
//     int currentnum=arr2[i];
//     int count=1;
//     while(exists(arr2,currentnum+1)){
//         currentnum++;
//         count++;
//     }
//     longest=max(longest,count);
// }   
// return longest;
// better solution tc=O(nlogn+n) sc=O(1);
// if(arr2.size()==0)return 0;
// sort(arr2.begin(),arr2.end());
// int n=arr2.size();
// int lastsmaller=INT_MIN;
// int cnt=0;
// int  longest=1;
// for(int i=0;i<n;i++){
//     if(arr2[i]-1==lastsmaller){
//       cnt+=1;
//       lastsmaller=arr2[i];
//     }
//     else if(lastsmaller!=arr2[i]){
//         cnt=1;
//        lastsmaller=arr2[i];
//     }
//      longest=max(longest,cnt);
// }
// return longest;

// optimal solution tc=O(3n) in worst rare case O(n*n)  sc=O(n)   //ignore algorithm
int n=arr2.size();
if(n==0) return 0;
int longest=1;
unordered_set<int>st;     /*O(n)*/
for(int i=0;i<n;i++){
    st.insert(arr2[i]);
}
for(auto it:st){
    if(st.find(it-1)==st.end()){     /*2n*/
        int cnt=1;
        int x=it;
        while(st.find(x+1)!=st.end()){
            x=x+1;
            cnt=cnt+1;
        }
        longest=max(longest,cnt);
    }
}
return longest;
}

int main(){
    // vector<int> arr={3,1,2};
    // vector<int> arr={10,22,12,3,0,6};
    vector<int> arr2={102,4,100,101,3,2,1,1};
    // for(auto it:next_greator_permutation(arr)){
        // cout<<it<<" ";
    // }
    // for(auto it :leaders(arr)){
    //     cout<<it<<" ";
    // }
    
    // cout<<longest_consecutive_sequence(arr2);
    
  
}