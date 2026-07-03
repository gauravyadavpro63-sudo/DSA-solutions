#include <bits/stdc++.h>
using namespace std;
void totalstring(string current,vector<string>&ans,int n){
if(current.size()==n){
    ans.push_back(current);
    return;
}
current.push_back('0');
totalstring(current,ans,n);
current.pop_back();

if(current.size()==0||current.back()=='0'){
    current.push_back('1');
    totalstring(current,ans,n);
    current.pop_back();
}

}
void generate_all_binary_string(int n){
    vector<string>ans;
    string current="";
    totalstring(current,ans,n);
    for(auto it:ans){
        cout<<it<<" ";
    }
}
void solve(vector<string>ans,string current,int open,int close,int n){
    if(current.size()==2*n){
        ans.push_back(current);
        return;
    }
    if(open<n){
        current.push_back('(');
        solve(ans,current,open+1,close,n);
        current.pop_back();
    }
    if(close<open){
        current.push_back(')');
        solve(ans,current,open,close+1,n);
        current.pop_back();
    }
}
void generate_all_parenethesis(int n){
    vector<string>ans;
    string current="";
    int open=0;
    int close=0;
    solve(ans,current,open,close,n);

    for(auto it:ans){
        cout<<it<<" ";
    }
}
void solve(string current,int index,string s){
      if(index==s.size()){
        cout<<"\""<<current<<"\""<<endl;
        return;
      }
      solve(current+s[index],index+1,s);
      solve(current,index+1,s);
}
void generate_all_subsequence_of_string(string s){
    // versuion 1 tc=O(n*2^n) for version 2 same tc
    // int n=s.length();
    // int total=1<<n;
    // for(int x=0;x<total;x++){
    //     for(int i=0;i<n;i++){
    //         if(x&(1<<i)){
    //             cout<<s[i];
    //         }
    //     }
    //     cout<<endl;
    // }
    int index=0;
    int n=s.size();
    string current="";
    solve(current,index,s);
}
// void solve(int index,vector<int>&ans,int sum,vector<int>arr,int solving){
//   if(index==arr.size()){
//     if(solving==sum){
//         for(auto it:ans){
//             cout<<it<<" ";
//         }
//         cout<<endl;
//     }
//     return;
//   }
//   ans.push_back(arr[index]);
//   solving+=arr[index];
//   solve(index+1,ans,sum,arr,solving);
//   ans.pop_back();
//   solving-=arr[index];
//   solve(index+1,ans,sum,arr,solving);
// }
// void print_all_subsequence_of_sum_2(int sum,vector<int>arr){
// int index=0;
// vector<int>ans;
// int solving=0;
// solve(index,ans,sum,arr,solving);
// }
// bool solve(int index,vector<int>&ans,int solving,vector<int>arr,int sum){
//     if(index==arr.size()){
//         if(solving==sum){
//             for(auto it:ans){
//                 cout<<it<<" ";
//             }
//             return true;
//         }
//         return false;
//     }
//     ans.push_back(arr[index]);
//     solving+=arr[index];
//     if(solve(index+1,ans,solving,arr,sum)==true) return true;
//     ans.pop_back();
//     solving-=arr[index];
//     if(solve(index+1,ans,solving,arr,sum)==true) return true;

//     return false;

// }
// void print_one_subsequence_of_sum_2(int sum,vector<int>arr){
//     int index=0;
//     vector<int>ans;
//     int solving=0;
//     solve(index,ans,solving,arr,sum);

// }
int solve(int index,int solving,vector<int>arr,int sum){
     if(index==arr.size()){
        if(solving==sum){
            return 1;
        }
        return 0;
     }
     solving+=arr[index];
     int l=solve(index+1,solving,arr,sum);
     solving-=arr[index];
     int r=solve(index+1,solving,arr,sum);
     return l+r;
}
int no_of_subsequence_of_sum_2(int sum,vector<int>arr){
    int index=0;
    int solving=0;
   return solve(index,solving,arr,sum);
}
int main(){
// int n=2;

// generate_all_binary_string(n);
// generate_all_parenethesis(n);
// generate_all_subsequence_of_string("abc");
vector<int>arr={1,2,1};
int sum=2;
// print_all_subsequence_of_sum_2(sum,arr);
// print_one_subsequence_of_sum_2(sum,arr);
cout<<no_of_subsequence_of_sum_2(sum,arr);

}