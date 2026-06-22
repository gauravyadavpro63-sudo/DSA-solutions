#include <bits/stdc++.h>
using namespace std;
// int two_sum_problem(vector<int>arr, int target){
    // brute tc=O(n*n) sc= 
    // for(int i=0;i<5;i++){
    //       for(int j=i+1;j<5;j++){
    //         if(arr[i]+arr[j]==target){
    //             return true;
    //         }
    //       }
    // }
    // return false
// }
// vector<int> two_sum_problem(vector<int> arr,int targer){
    // bettwer tc=O(n*logn) for unordered map averageO(n) but can go O(n*n) in worst case
    // sc=O(n)
//     map<int,int>mpp;
//     for(int i=0;i<5;i++){
//         int a=arr[i];
//         int more=targer-a;
//         if(mpp.find(more)!=mpp.end()){
//             return {mpp[more],i};
//         }
//   mpp[a]=i;
    
//     }
//     return {-1,-1};
// }
// better better but cant tell the indices of the sum elements
// tc=O(n)+O(nlogn) sc=O(1) but changing an array forO(n)

string two_sum_problem(vector<int>arr,int target ){
    int left =0,right=4;
    sort(arr.begin(),arr.end());
    while(left<right){
        int sum=arr[left]+arr[right];
        if(sum==target){
            return "yes";
        }
        else if(sum<target) left++;
        else right--;
    }
    return "no";
}

vector<int> sort_array_of_0s_1s_2s(vector<int> &arr2){
    // brute solution -->merge sort 
    // better solution tc=O(2n) sc=O(1)
    // int cnt0=0;
    // int cnt1=1;
    // int cnt2=2;
    // for(int i=0;i<12;i++){
    //     if(arr2[i]==0) cnt0++;
    //     else if(arr2[i]==1) cnt1++;
    //     else cnt2++;
    // }
    // for(int i=0;i<cnt0;i++) arr2[i]=0;
    // for(int i=cnt0;i<cnt0+cnt1;i++) arr2[i]=1;
    // for(int i=cnt0+cnt1;i<12;i++) arr2[i]=2;
    // return arr2;
    // optimal soution (dutch national flag algoraithm) tc=O(n) sc=O(1) 
    int low=0,mid=0,high=12-1;
    while(mid<=high){
        if(arr2[mid]==0){
             swap(arr2[low],arr2[mid]);
             low++;
             mid++;
        }
        else if(arr2[mid]==1){
            mid++;
        }
        else{
            swap(arr2[mid],arr2[high]);
            high--;
        }

    }
    return arr2;

}
int element_greater_than_nbytwo(vector<int> arr3){
    // brute solution tc=O(n*n) sc=O(1);
    // for(int i=0; i<7;i++){
    //    int cnt=0;
    //     for(int j=0;j<7;j++){
    //         if(arr3[j]==arr3[i]) cnt++;
    //     }
    //     if(cnt>7/2) return arr3[i];
    // }
    // better tc=O(nlogn)+O(n); sc=0(n);
    // map<int,int>mpp;
    // for(int i=0;i<arr3.size();i++){
    //     mpp[arr3[i]]++;
    // }
    // for(auto it:mpp){
    //     if(it.second>(arr3.size()/2)){
    //         return it.first;
    //     }
    // }
    // return -1;
    // optimal solution moore's voting algorithmm tc=O(2n) sc=O(1);
    int cnt =0;
    int el;
    for(int i=0;i<arr3.size();i++){
        if(cnt==0){
            cnt=1;
            el=arr3[i];
        }
        else if(arr3[i]==el){
            cnt++;           
        }
        else{
            cnt--;
        }
    }
    int cnt1=0;
    for(int i=0;i<arr3.size();i++){
        if(arr3[i]==el) cnt1++;
    }
    if(cnt1>(arr3.size()/2)){
        return el;
    }
    return -1;
}

int maximum_subarray_sum(vector<int>& arr4){

// better solution sc=O(n*n) tc=O(1);
// int maxi=INT_MIN;
// for(int i=0;i<8;i++){
//     int sum=0;
//     for(int j=i;j<8;j++){
//         sum+=arr4[j];
//         maxi=max(sum,maxi);
//     }
// }
// return maxi;
// optimal solution (kadane's algorithm) //if-if algorithm
int sum=0,maxi=INT_MIN;
for(int i=0;i<8;i++){
    sum+=arr4[i];
    if(sum>maxi){
        maxi=sum;
    }
    if(sum<0){
        sum=0;
    }
}
return maxi;
}

//     int maxSubArray(vector<int>& nums) {
        
//         int sum = 0;
//         int maxi = INT_MIN;

//         int start = 0;
//         int ansStart = 0;
//         int ansEnd = 0;

//         for(int i = 0; i < nums.size(); i++){

//             if(sum == 0){
//                 start = i;
//             }

//             sum += nums[i];

//             if(sum > maxi){
//                 maxi = sum;
//                 ansStart = start;
//                 ansEnd = i;
//             }

//             if(sum < 0){
//                 sum = 0;
//             }
//         }

//         cout << "Subarray indices: " << ansStart << " " << ansEnd << endl;

//         return maxi;
//}     




int main(){
   vector<int>arr={2,6,5,8,11};
   vector<int>arr2={0,1,2,0,1,2,1,2,0,0,0,1};
   vector<int>arr3={2,2,3,3,1,2,2};
   int target=14;
   vector<int>arr4={-2,-3,4,-1,-2,1,5,-3};
    int targer=14;
//    cout<< two_sum_problem(arr,target);
// cout<<two_sum_problem(arr,targer)[0]<<" "<<two_sum_problem(arr,targer)[1];
// cout<<two_sum_problem(arr,target);
// for(auto it:sort_array_of_0s_1s_2s(arr2)){
    // cout<<it<<" ";
// }
// cout<<element_greater_than_nbytwo(arr3);
// cout<<maximum_subarray_sum(arr4);

}