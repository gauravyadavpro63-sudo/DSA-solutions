#include <bits/stdc++.h>
using namespace std;
// sc=O(1) tc=n*n
// int reverse_pairs(vector<int> arr){
//      int n=arr.size(); 
//      int cnt=0;
//       for(int i=0;i<n;i++){ 
//         for(int j=i+1;j<n;j++){
//              if(arr[i]>2*arr[j]) cnt++; 
//             } 
//         }
//          return cnt;
//     }
// optimal solution sc=O(n) tc= logn*(n+n)=2nlogn
// void merging(vector<int>&arr,int low,int mid,int high){
//    int left=low;
//    int right=mid+1;
//    vector<int>temp;
//    while(left<=mid&&right<=high){
//     if(arr[left]<=arr[right]) {
//         temp.push_back(arr[left]);
//         left++;
//     }
//     else{
//         temp.push_back(arr[right]);
//         right++;
//     }
//    }
//     while(left<=mid){
//         temp.push_back(arr[left]);
//         left++;
//     }
//     while(right<=high){
//         temp.push_back(arr[right]);
//         right++;
//     }
//     for(int i=low;i<=high;i++){
//         arr[i]=temp[i-low];
//     }
// }
// int count_pairs(vector<int>&arr,int low,int mid,int high){
//     int cnt=0;
//     int right=mid+1;
//     for(int i=low;i<=mid;i++){
//         while(right<=high&&arr[i]>(long long)2*arr[right]){
//             right++;
//         }
//         cnt+=right-(mid+1);
//     }
//     return cnt;
// }
// int merge_sort(vector<int> &arr,int low,int high){
//     int cnt=0;
//     int mid=(low+high)/2;
//     if(low>=high) return cnt;
//     cnt+=merge_sort(arr,low,mid);
//     cnt+=merge_sort(arr,mid+1,high);
//     cnt+=count_pairs(arr,low,mid,high);
//     merging(arr,low,mid,high);
//     return cnt;
// }
// int reverse_pairs(vector<int>& arr){
//     int n=arr.size();
//  return merge_sort(arr,0,n-1);
// }




int maximum_subarray_product(vector<int> arr){
    // brute solution sc=O(1) tc=O(n*n)
    // int n=arr.size();
    // int maxi=INT_MIN;
    // for(int i=0;i<n;i++){
    //     int product=1;
    //     for(int j=i;j<n;j++){
    //         product*=arr[j];
    //         maxi=max(product,maxi);
    //     }
    // }
    // return maxi;
    // optimal solutin  sc=O(1) tc=O(n):
    int n=arr.size();  // age-piche algoritm
    int prefix=1;
    int suffix=1;
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        prefix*=arr[i];
        suffix*=arr[n-i-1];
        maxi=max(maxi,max(prefix,suffix));
         if(prefix==0) prefix=1;
        if(suffix==0) suffix=1;

    }
    return maxi;

}
int main(){
//     vector<int>arr={40,25,19,12,9,6,2};
//    cout<<reverse_pairs(arr);


   vector<int> arr={-1,0,-2};
   cout<<maximum_subarray_product(arr);
}