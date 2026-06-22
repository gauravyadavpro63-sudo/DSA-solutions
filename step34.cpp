#include <bits/stdc++.h>
using namespace std;

int max_element(vector<int>arr){
    int n=arr.size();
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        maxi=max(maxi,arr[i]);
    }
    return maxi;
}
bool possible(vector<int>arr,int days,int m,int k ){
    int n=arr.size();
    int cnt=0;
    int bucket=0;
    for(int i=0;i<n;i++){
        if(days>=arr[i]){
         cnt++;
        }
        else{
         bucket+=cnt/k;
         cnt=0;
        }
    }
    bucket+=cnt/k;
    if(bucket>=m) return true;
    else return false;
    
}
int minimum_days_to_make_m_bucket(vector<int>arr,int m,int k){
    // brute solution tc=O(n*max_elemet_arr)
    // int n=arr.size();
    // if(m*k>n) return -1;
    // int high=max_element(arr);
    // for(int i=1;i<=high;i++){
    //     if(possible(arr,i,m,k)==true){
    //         return i;
    //     }
    // }
    // return -1;

    // optimal solution tc=O(n*log2(max_element)
    int n=arr.size();
    if(m*k>n) return -1;
    int low=1;  //can use *min_element(arr.begin(),arr.end())
    int high=max_element(arr);
     int ans=INT_MAX;
    while(low<=high){
        int  mid=low+(high-low)/2;
        if(possible(arr,mid,m,k)==true){
          ans=mid;
          high=mid-1;
        } 
        else{
            low=mid+1;
        }

    }
    return ans;
}

int tsum(vector<int>arr1,int k){
    
    int n=arr1.size();
    int sum=0;
    for(int i=0;i<n;i++){
    sum+=ceil(double(arr1[i])/k);
    }
    return sum;
}
int find_the_smallest_divisor(vector<int>arr1,int treshold){
    // brute  force tc= O(n*higest_element)
    // int n=arr1.size();
    // int high=*max_element(arr1.begin(),arr1.end());
    //  for(int i=1;i<=high;i++){
    //     if(tsum(arr1,i)<=treshold){
    //         return i;
    //     }
    //  }
    //  return -1;

    // optimal solution tc=O(n*log2(highest_element))]
     int low=1;
     int high=*max_element(arr1.begin(),arr1.end());
     int ans=-1;
     while(low<=high){
        int mid=low+(high-low)/2;
        if(tsum(arr1,mid)<=treshold){
            ans=mid;
           high=mid-1;
        }
        else{
            low=mid+1;
        }
     }
     return ans;
}

int totaldays(vector<int>arr2,int package){
 int n=arr2.size();
int load=0;
int days=1;
 for(int i=0;i<n;i++){
    if(load+arr2[i]>package){
        days++;
        load=arr2[i];
    }
    else{
        load+=arr2[i];
    }
 }
 return days;
}

int capacity_to_ship_package_within_d_days(vector<int>arr2,int days){
    // brute solution tc=O(n*high-low)
    // int low=*max_element(arr2.begin() ,arr2.end());
    // int high=accumulate(arr2.begin(),arr2.end(),0);
    // for(int i=low;i<=high;i++){
    //     if(totaldays(arr2,i)<=days){
    //         return i;
    //     }

    // }
    // return -1;

    // optimal solution 
    // int low=*max_element(arr2.begin(),arr2.end());
    // int high=accumulate(arr2.begin(),arr2.end(),0);
    // int ans=-1;
    // while(low<=high){
    //     int mid=low+(high-low)/2;
    //     if(totaldays(arr2,mid)<=days){
    //         ans=mid;
    //         high=mid-1;
    //     }
    //     else{
    //         low=mid+1;
    //     }
    // }
    // return ans;

}
int main(){
    vector<int>arr={7,7,7,7,3,11,12,7};
    int m=2;  //no of bucket
    int k=3; //no of flowers in bucket
    // cout<<minimum_days_to_make_m_bucket(arr,m,k);
    vector<int>arr1={1,2,5,9};
    int treshold=6;
    // cout<<find_the_smallest_divisor(arr1,treshold);
    vector<int>arr2={1,2,3,4,5,6,7,8,9};
    int days=5;
    cout<<capacity_to_ship_package_within_d_days(arr2,days);
}