#include <bits/stdc++.h>
using namespace std;

vector<int> union_sorted_array(vector<int>&a,vector<int>&b){
    // brute solution tc=O(n1logn+n2logn)+O(n1+n2) sc=O(n1+n2)+O(n1+n2)
    // int n1=a.size();
    // int n2=b.size();
    // set<int>st;
    // for(int i=0;i<n1;i++){
    //     st.insert(a[i]);
    // }
    // for(int i=0;i<n2;i++){
    //     st.insert(b[i]);
    // }
    // vector<int>temp;
    // for(auto it:st){
    //     temp.push_back(it);
    // }
    // return temp;
    // optimal solution tc=O(n1+n2) sc=O(n1+n2)
    int n1=a.size();
    int n2=b.size();
    int i=0;
    int j=0;
    vector<int>unionarr;
    while(i<n1&&j<n2){
        if(a[i]<=b[j]){
            if(unionarr.size()==0||unionarr.back()!=a[i]){
                unionarr.push_back(a[i]);
            }
            i++;
        }
        else{
            if(unionarr.size()==0||unionarr.back()!=b[j]){
                unionarr.push_back(b[j]);
            }
            j++;
        }
    }
        while(j<n2){
             if(unionarr.size()==0||unionarr.back()!=b[j]){
                unionarr.push_back(b[j]);
            }
            j++;
         
        }
        while(i<n1){
            if(unionarr.size()==0||unionarr.back()!=a[i]){
                unionarr.push_back(a[i]);
            }
            i++;
        }
        return unionarr;
    }

 vector<int> intersection_sorted_array(vector<int>&a,vector<int>&b,int m,int n){
    // brute solution tc->O(n1*n2) sc->O(n1or n2 which one is shortest);
    // vector<int> ans;
    // int vis[m]={0};
    // for(int i=0;i<n;i++){
    // for(int j=0;j<m;j++){
    //     if(a[i]==b[j]&&vis[j]==0){
    //         ans.push_back(a[i]);
    //         vis[j]=1;
    //         break;
    //     }
    //     if(b[j]>a[i]) break;
    // }
    // }
    // return ans;
    // optimal solution tc=O(n1+n2) sc=O(1)
    int i=0;
    int j=0;
    vector<int>ans;
    while(i<n&&j<m){
        if(a[i]<b[j]){
            i++;
        }
        else if(b[j]<a[i]){
            j++;
        }
        else{
            ans.push_back(a[i]);
            i++;
            j++;
        }
    }
    return ans;

 }

int main(){
    vector<int>a={1,4,5,6,9};
    vector<int>b={1,3,5,6,10};
    int m=b.size();
    int n=a.size();
    // for(auto it:union_sorted_array(a,b)){
    //    cout<<it<<" ";
    // }
    for(auto it:intersection_sorted_array(a,b,m,n)){
        cout<<it<<" ";
    }
    
}