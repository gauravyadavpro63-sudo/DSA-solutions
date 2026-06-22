#include <bits/stdc++.h>
using namespace std;
int count_inversions(vector<int>arr){
    //brute solutin tc=O(n*n) sc=O(1);
    // int n=arr.size();
    // int cnt=0;
    // for(int i=0;i<n;i++){
    //   for(int j=i+1;j<n;j++){
    //     if(arr[i]>arr[j]) cnt++;
    //   }
    // }
    // return cnt;
}

//better solution tc=O(nlogn ) sc=O(n);
int merging(vector<int> &arr,int low,int mid,int high){
    int cnt=0;
     vector<int> temp;
    int left=low;
    int right=mid+1;
    while(left<=mid&&right<=high){
       if(arr[left]<=arr[right]){
        temp.push_back(arr[left]);
        left++;
       }
       else{
        cnt+=mid-left+1;
        temp.push_back(arr[right]);
        right++;
       }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }
    return cnt;
}
int merge_sort(vector<int> &arr,int low,int high){
    int cnt=0;
    if(low>=high) return cnt;
    int mid=(low+high)/2;
    cnt+=merge_sort(arr,low,mid);
    cnt+=merge_sort(arr,mid+1,high);
    cnt+=merging(arr,low,mid,high);
    return cnt;
}
int count_inversions2(vector<int> &arr){
    int n=arr.size();
    return merge_sort(arr,0,n-1);
}
int main(){
    vector<int>arr={5,3,2,4,1};
    // cout<<count_inversions(arr);
    cout<<count_inversions2(arr);

}