//lower bound arr[index]>=x(smallest element in array);
//upper bound arr[index]>x (smallest element in array);
#include <bits/stdc++.h>
using namespace std;
int lower_bound(vector<int>arr,int low,int high,int target){
    int n=arr.size();
    int ans=n;
   
    while(low<=high){
         int mid=low+(high-low)/2;
        if(arr[mid]>=target){
         ans=mid;
         high=mid-1;
        }
        else {
            low=mid+1;
        }
    }
    return ans;
}
int upper_bound(vector<int>arr,int low,int high,int target){
    int n=arr.size();
    int ans=n;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]>target){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}
int floor(vector<int>arr ,int low,int high,int target){
int ans=-1;
while(low<=high){
    int mid=low+(high-low)/2;
    if(arr[mid]<=target){
        ans=arr[mid];
        low=mid+1;
    }
    else{
     high=mid-1;
    }
    
}
return ans;
}
int  main(){
    vector<int> arr={1,3,14,15,114,1038};
    int target=10;
    // cout<<lower_bound(arr,0,5,target);   tc=O(log2n) sc=O(1);
    // using cpp stl
    // int lb=lower_bound(arr.begin(),arr.end(),15)-arr.begin();
    // cout<<lb;
    // cout<<upper_bound(arr,0,5,target);   tc=O(log2n) sc=O(1);
    // int ub=upper_bound(arr.begin(),arr.end(),target)-arr.begin();
    // cout<<ub;

    // search insert position is same as finding lower bound u can do on leetcode

    // seil is same as lower bound but there we have to return the element not index
    // floor  arr[index]<=x(greatest element);
    // cout<<floor(arr,0,5,target);  tc=O(log2n) sc=O(1)
}