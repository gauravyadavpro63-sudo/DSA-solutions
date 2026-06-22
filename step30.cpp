#include <bits/stdc++.h>
using namespace std;
void first_last_occurance(vector<int>arr,int &first,int &second,int target){
int n=arr.size();
for(int i=0;i<n;i++){
    if(arr[i]==target){
        if(first==-1){
            first=i;
            second=i;
        }
        else{
            second=i;
        }
    }
}
}


int lower_bound(vector<int>arr,int low,int high,int target){
    int n=arr.size();
    int lb=n;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]>=target){
            lb=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return lb;
}
int upper_bound(vector<int> arr,int low,int high,int target){
    int n=arr.size();
    int ub=n;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]>target){
            ub=mid;
            high=mid-1;
            
        }
        else {
        low=mid+1;
        }
        
    }
    return ub;
}
void first_last_occurance1(vector<int>arr,int &first,int& second,int target){
int n=arr.size();
int lb=lower_bound(arr,0,n-1,target);
int ub=upper_bound(arr,0,n-1,target);
 if(lb==n||arr[lb]!=target){
    first=-1;
    second=-1;
 }
 else{
    first=lb;
    second=ub-1;
 }
}





void first_last_occurance2(vector<int>arr,int &first,int & second,int target){
    int n=arr.size();
    int lb=lower_bound(arr.begin(),arr.end(),target)-arr.begin();
    int ub=upper_bound(arr.begin(),arr.end(),target)-arr.begin()-1;
    if(lb==n||arr[lb]!=target){
        first=-1;
        second=-1;
    }
    else{
        first=lb;
        second=ub;
    }
}




void first_last_occurance3(vector<int>&arr,int &first,int &second,int target){
    int low=0;
    int n=arr.size();
    int high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==target){
            first=mid;
            high=mid-1;

        }
       else if(arr[mid]>target){
         
            high=mid-1;
        }
        else{
            low=mid+1;
        }
       
    }
    low=0;
    high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if (arr[mid]==target){
            second=mid;
            low=mid+1;
        }
        else if(arr[mid]>target){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
}
int main(){
    vector<int> arr={2,5,7,9,9,9,33,666};
    // first and last occurance 
    // this can be done by 4 method and here is all the method coded
   int  first=-1;
    int second=-1;
    int target=9;
    // first_last_occurance(arr,first,second,target);  //brute  tc=O(n);
    // cout<<first;
    // cout<<second;
    // first_last_occurance1(arr,first,second,target);   tc=O(2log2n)
    // cout<<first;
    // cout<<second;
    // first_last_occurance2(arr,first,second,target);
    // cout<<first;
    // cout<<second;
    //  first_last_occurance3(arr,first,second,target);
    //  cout<<first;
    //  cout<<second;

   

    // count occurance in shorted array= last occuracne-first occurance+1
}