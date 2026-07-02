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
int main(){
int n=2;

// generate_all_binary_string(n);
generate_all_parenethesis(n);
}