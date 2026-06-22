#include <bits/stdc++.h>
using namespace std;
int subarray_sum_equal_k(vector<int> &arr,int k){
    // better solution sc=O(1) tc=O(n*n);
    // int cnt =0;
    // int n=arr.size();
    // for(int i=0;i<n;i++){
    //     int sum=0;
    //     for(int j=i;j<n;j++){
    //       sum+=arr[j];
    //       if(sum==3){
    //         cnt++;
    //     }
    //     }
    // }
    // return cnt;
    // optimal solution tc=O(n) if unorderd map and O(n*logn) for ordered map and  O(n) for ordered map
    // in worst case its O(n*n) while sc=O(n)   reverse enginering 2.0
        map<int,int>mpp;
    mpp[0]=1;
    int presum=0,cnt=0;
    for(int i=0;i<arr.size();i++){
        presum+=arr[i];
        int remove=presum-k;
        cnt+=mpp[remove];
        mpp[presum]+=1;
    }
    return cnt;
}
int main(){
 vector<int> arr={2,3,2,1,4,-1};
 int k=3;
 cout<<subarray_sum_equal_k(arr,k)<<endl;
}