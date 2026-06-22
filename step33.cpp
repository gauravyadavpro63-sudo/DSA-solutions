#include <bits/stdc++.h>
using namespace std;
int sroot(int n){
    // return sqrt(n);
    // int ans;
    // for(int i=1;i<n;i++){
    //     if((long long)i*i<=n){
    //         ans=i;
    //     }
    //     else{
    //         break;
    //     }
    // }
    // return ans;

    int low=1;
    int ans;
    int high=n;
    while(low<=high){
         int mid=low+(high-low)/2;
         if((long long)mid*mid<=n){
            ans=mid;
            low=mid+1;
         }
         else{
            high=mid-1;
         }
    }
    return ans;
}

double times(double mid,int m){
    double value=1;
    for(int i=0;i<m;i++){
      value=value*mid; 
    }
    return value;
}
double m_th_sroot(int n,int m){
double low=1;
double  high=n;
while(high-low>1e-6){
    double mid=low+(high-low)/2;
    if(times(mid,m)>n){
        high=mid;
    }
    else{
       low=mid;
    }
}
return low;
}


int maxelement(vector<int>arr){
    int n=arr.size();
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
       maxi=max(maxi,arr[i]);
    }
    return maxi;
}
int timing(vector<int>arr,int bananaperhour){
    int n=arr.size();
    int  t=0;
 for(int i=0;i<n;i++){
     t+=ceil(double(arr[i])/double(bananaperhour));
 }
 return t;
}
int koko_eating_banana(vector<int> arr){
    // brute force tc=n*max(arr_element)
    // int low=1;
    // int high=maxelement(arr);
    // for(int i=1;i<=high;i++){
    //    int  totaltiming=timing(arr,i);
    //     if(totaltiming<=8) return i;
    // }
    // return -1;

    // optimal solution tc=n*lo2(max(arr_element)   );
    int low=1;
    int high=maxelement(arr);
    int ans=INT_MAX;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(timing(arr,mid)<=8){
            ans= mid;
            high=mid-1;
        }
        else{
       low=mid+1;
        }
    }
}
int main(){
    int n=25;
    int m=3;
    // cout<< sroot(n);
    // cout<<m_th_sroot(n,m)<<endl;       tc=mlog2(n*10^d) where d is decimalplace
    // cout<<pow(n,double(1/double(m)));  
    vector<int>arr={3,6,7,11};
    // int deadline=8 hours
    cout<<koko_eating_banana(arr);
}

