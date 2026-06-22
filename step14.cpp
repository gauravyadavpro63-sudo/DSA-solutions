#include <bits/stdc++.h>
using namespace std;

// int longest_subarray_with_sum_k(int arr[],int k){
   
//  brute    O(n*n)
// int length=0;
// for(int i=0;i<8;i++){
//     int s=0;
    
//     for(int j=i ;j<8;j++){
//         s+=arr[j];
//         if(s==k){
//        length=max(length,j-i+1);-
//         }
//     }
// }
// return length;
// 
// }
//  better if array have positve numbers but thui code is optimal for array having negative and positves value
    //  tc=O(n*logn)if we use map and O(n*1) if unodered map bur in worst case of unordered map its O(n*n)
    // sc=O(n)
int longest_subarray_with_sum_k(vector<int> a,long long k){
    // map<long long,int>presummap;
    // long long sum=0;
    // int maxlen=0;
    // for(int i=0;i<a.size();i++){
    //     sum+=a[i];
    //     if(sum==k){
    //         maxlen=max(maxlen,i+1);
    //     }
    //     long long rem=sum-k;
    //     if(presummap.find(rem)!=presummap.end()){
    //     int len=i-presummap[rem];
    //     maxlen=max(maxlen,len);
    //     }
    //     if( presummap.find(sum)==presummap.end() ){    /*to taccle 0 in array and  push sum in presumap*/
    //         presummap[sum]=i;
    // }
    // }

    // return maxlen;
    // optimal solution tc=O(2n) sc=(1)   if only positives and zero in array 
    int left =0,right=0;
    long long sum=a[0];
    int maxlen=0;
    int n=a.size ();
    while(right<n){
        while(left<=right&&sum>k){
            sum-=a[left];
            left++;
        }
        if(sum==k){
            maxlen=max(maxlen,right-left+1);
        }
        right++;
        if(right<n){
            sum+=a[right];
        }
    }
    return maxlen;
}

int main(){
    // int arr[]={1,2,3,1,1,1,3,4};
    // int k;
    // cin>>k;
    // cout<<longest_subarray_with_sum_k(arr,k);
  
    vector<int>a={1,2,3,1,1,1,3,4};
    long long k;
    cin>>k;
    cout<<longest_subarray_with_sum_k(a,k);
}