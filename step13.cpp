#include <bits/stdc++.h>
using namespace std;
int mising_number(int arr[]){
    // brute tc=O(n*n) sc=O(1)
    // for(int i=1;i<=5;i++){
    //     int flag=0;
    //     for(int j=0;j<4;j++)
    //     {
    //       if(arr[j]==i){
    //         flag=1;
    //         break;
    //       }
    //     }
    //     if(flag==0)
    //     return i;
    // }
    // better tc=O(n)+O(n)  sc=O(n);
    // int hash[6]={0};
    // for(int i=0;i<4;i++){
    //     hash[arr[i]]=1;
    // }
    // for(int i=1;i<=5;i++){
    //     if(hash[i]==0) return i;
    // }
    // optimal tc=O(n) sc=O(1);
    // int sum=(5*6)/2;
    // int s2=0;
    // for(int i=0;i<4;i++){
    //     s2+=arr[i];
    // }
    // return (sum-s2);
    // better optimal
    int xor1=0;
    int xor2=0;
    for(int i=0;i<4;i++){
       xor2=xor2^arr[i];
       xor1=xor1^(i+1);
    }
    xor1=xor1^5;
    return xor1^xor2;
}
    int max_consecutive_one(int arr[]){
        int maxi=0;
        int cnt=0;
        for(int i=0;i<4;i++){
            if(arr[i]==1){
                cnt++;
                maxi=max(maxi,cnt);
            }
            else{
                cnt=0;
            }
        }
        return maxi;
    }

    int number_occured_once_otherTwice(int arr2[]){
        //   brute tc=O(n*n) sc=O(1)
        // for(int i=0;i<5;i++){
        //     int num=arr2[i];
        //     int cnt=0;
        //     for(int j=0;j<5;j++){
        //         if(arr2[j]==num){
        //             cnt++;
        //         }
                
        //     }
        //     if(cnt==1) return num;
        // }
        // better tc=O(3n) sc=(depend on max number in array2)
        // int maxi=arr2[0];
        // for(int i=0;i<5;i++){
        //    maxi=max(maxi,arr2[i]);
        // }
        // int  hash[maxi+1]={0};
        // for(int i=0;i<5;i++){
        //     hash[arr2[i]]++;
        // }
        // for(int i=0;i<5;i++){
        //     if(hash[arr2[i]]==1) return arr2[i];
        // }
        // we can also use unordered map tc=O(n+n/2+1) sc=O(n/2+1) 
        // unordered_map<long long,int> um;
        // for(int i=0;i<5;i++){
        //     um[arr2[i]]++;
        // }
        // for(auto it:um){
        //       if(it.second==1){
        //         return it.first;
        //       }
        // }
        // optimal tc=O(n) sc=O(1);
        int xor1=0;
        for(int i=0;i<5;i++){
            xor1=xor1^arr2[i];
        }
        return xor1;

    }
int main(){
    int arr[]={1,2,3,5};
    int arr2[]={2,2,1,3,3};
    // cout<<mising_number(arr);
    // cout<<max_consecutive_one(arr);
    cout<<number_occured_once_otherTwice(arr2);
}