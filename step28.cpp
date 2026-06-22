#include <bits/stdc++.h>
using namespace std;
int binary_search1(vector<int> arr,int low,int high,int target){
   
    while(low<=high){
         long long mid=(low+high)/2;
        if(arr[mid]==target) return mid;
        else if(target<arr[mid]){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return -1;

}
int binary_search2(vector<int> arr,int low,int high,int target){
    int mid=low+(high-low)/2;
    if(low>high) return -1;
    if(arr[mid]==target) return mid;
    else if(target<arr[mid]) {
       return binary_search2(arr,low,mid-1,target);
    }
    else{
      return  binary_search2(arr,mid+1,high,target);
    }
}
int main(){
    vector<int> arr={2,4,7,10,76,112};
    int target=10;
    // cout<<binary_search1(arr,0,5,target); tc=O(log2(n)) sc=O(1)
    // cout<<binary_search2(arr,0,5,target);  tc=O(log2(n)) sc=O(1)
}