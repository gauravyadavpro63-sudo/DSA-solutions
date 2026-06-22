#include <bits/stdc++.h>
using namespace std;
vector<int> rotate_left(vector<int>&arr,int n){
    //tc->O(n) sc(extra space O(1)) space require for solving O(n); 
    int temp=arr[0];
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
    return arr;
}

    vector<int> rotate_d_places(vector<int>&arr,int n,int d){
        //brute 
        // tc=O(n+d);
        // sc(extra) c=O(d);
        // d=d%n;
    //     vector<int>temp;
    //     for(int i=0;i<d;i++){
    //         temp.push_back(arr[i]);
    //     }
    //     for(int i=d;i<n;i++){
    //         arr[i-d]=arr[i];
    //     }
    //     for(int i=n-d;i<n;i++){
    //         arr[i]=temp[i-(n-d)];
    //     }
    //      return arr;
    // }
    // optimal  solution  tc=O(n) sc=O(1);  
    // reverse(arr.begin(),arr.begin()+d);
    // reverse(arr.begin()+d,arr.end()); 
    // reverse(arr.begin(),arr.end());
    // return arr;


    }
    vector<int> reverse_array(vector<int>&arr,int start,int n){
        n=n-1;
        while(start<=n){
            int temp=arr[start];
            arr[start]=arr[n];
            arr[n]=temp;
            start++;
            n--;
        }
        return arr;
    }

    vector<int> all_zero_at_right(vector<int>&arr,int n){
        // brute  tc=O(x)+O(n)+O(n-x)=2n sc=O(n);
    //     vector<int> temp;
    //     for(int i=0;i<n;i++){
    //         if(arr[i]!=0){
    //             temp.push_back(arr[i]);
    //         }
    //     }
    //     int non_zero=temp.size();
    //     for(int i=0;i<non_zero;i++){
    //         arr[i]=temp[i];
    //     }
    //     for(int i=non_zero;i<n;i++){
    //         arr[i]=0;
    //     }
    //     return arr;
    // optimal solution tc=O(n),sc=O(1)
    int j=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }
    if(j==-1){
        return arr;
    }
    for(int i=j+1;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    return arr;

    }
    int linear_search(vector<int>&arr,int n,int d){
        for(int i=0;i<n;i++){
            if(arr[i]==d){
                return i;
            }
        }
         return -1;
    }

    

int main(){
    int n,d;

    cin>>n>>d;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    // for(auto it:rotate_left(arr, n)){
        // cout<<it<<" ";
    // }
    // for(auto it:rotate_d_places(arr,n,d)){
    //     cout<<it<<" ";
    // }


    // int start=0;
    // for(auto it:reverse_array(arr ,start,n)){
    //     cout<<it<<" ";

    // }

    //  HW (right rotate array by d position) 
    // for(auto it:all_zero_at_right(arr,n)){
    //     cout<<it<<" ";

    // cout<<"the given number is at index: "<<linear_search(arr,n,d);

    // }
}