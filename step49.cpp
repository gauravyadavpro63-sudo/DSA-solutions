#include <bits/stdc++.h>
using namespace std;
// brute force / tc=O(31);
// int minimum_bits_to_flip(int a,int b){
//     int result=a^b;
//     int count=0;
    // for(int i=0;i<=31;i++){
    //     if((result&(1<<i))){
    //         count++;
    //     }
    // }
    // return count;
    // log2(a^b)
    // while(result){
    //     result=result&(result-1);
//         count++;
//     }
//     return count;
// }
// int single_numberI(vector<int>arr){
//     // TC = O(n)
//     int xorr=0;
//     for(int i=0;i<arr.size();i++){
//      xorr=xorr^arr[i];
//     }
//     return xorr;
// }
int xor_of_number_in_given_range(int n){
    // brute solution tc=O(n) 
    // int ans=0;
    // for(int i=1;i<=n;i++){
    //     ans=ans^i;
    // }
    // return ans;
    // optimal solution tc=O(1):
    if(n%4==0) return n;
    if(n%4==1) return 1;
    if(n%4==2) return n+1;
    if(n%4==3) return 0;

}
int xor_of_number_in_given_rangeII(int l,int r){
//     int ans=0;
//     for(int i=l;i<=r;i++){
//         ans=ans^i;
//     }
//     return ans;
//    optimal solution
return xor_of_number_in_given_range(l-1)^xor_of_number_in_given_range(r);
}
vector<int> single_numberIII(vector<int>arr){
    // brute force kal lena yaar already kiya hai 
    // optimaal solution tc=O(2n) sc=O(1);
    long long xorr=0;
    int b1=0;
    int b2=0;
    for(int i=0;i<arr.size();i++){
      xorr=xorr^arr[i];
    }
    int rightmost=(xorr&(xorr-1))^xorr;
    for(int i=0;i<arr.size();i++){
        if(arr[i]&rightmost){
            b1=b1^arr[i];
        }
        else{
            b2=b2^arr[i];
        }
    }
    return {b1,b2};
}
int main(){
    // int a=7;
    // int b=4;
    // vector<int>arr={1,1,2,2,3,4,4,5,5};
    // cout<< minimum_bits_to_flip(a,b);
    // cout<<single_numberI(arr);
    // cout<<powerset(arr) already done in recursion using bit manipulation and recursion tc=2^n*n 
    int n=9;
    // cout<<xor_of_number_in_given_range(n);
    // cout<<xor_of_number_in_given_rangeII(6,12);
    vector<int>arr={1,1,2,3,4,4,5,5};
    for(auto it:single_numberIII(arr)){
        cout<<it<<" ";
    }
}
