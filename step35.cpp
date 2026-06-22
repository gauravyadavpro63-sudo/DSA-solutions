#include <bits/stdc++.h>
using namespace std;
  
int k_missing_positive_number(vector<int>arr,int k){//1,2,3,4,_,6 algoritm
//     int n=arr.size();
//     int ans=k;
//     for(int i=0;i<n;i++){
//         if(ans>=arr[i]) {
//             ans++;
//     }
//     else return ans;
// }
// return ans;

// optimal solution tc= O(log2n)
int n=arr.size();
int low=0;
int high=n-1;
while(low<=high){
    int mid=low+(high-low)/2;
    int missing=arr[mid]-(mid+1);
    if(missing<k){
        low=mid+1;
    }
    else{
        high=mid-1;
    }
   
}
return high+k+1;  //low+k // (high+1+k)
}

bool coordinate_possible(vector<int>arr2,int distance,int cows){
    int n=arr2.size();
    int last=arr2[0];
    int tcows=1;
for(int i=1;i<n;i++){
  if((arr2[i]-last)>=distance){
     last=arr2[i];
     tcows++;
  }
  
}
if(tcows>=cows) return true;
  else return false;
}
// brute force tc=O(n*high)     
// int aggresive_cows(vector<int>arr2,int cows){
//     int n=arr2.size();
// int  high=arr2[n-1]-arr2[0];
// int low=1;
// for(int i=low;i<=high;i++){
//     if(coordinate_possible(arr2,i,cows)==true){
//         continue;
//     }
//     else return i-1;
// }
// return -1;
// optimal solution  tc=O(n*logn(high))
int aggresive_cows(vector<int>arr2,int cows){
    int n=arr2.size();
    int low=1;
    int high=arr2[n-1]-arr2[0];
    int ans=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(coordinate_possible(arr2,mid,cows)==true){
            low=mid+1;
            ans=mid;
        }
        else{
            high=mid-1;
        }
    }
    return ans;
}


bool allocation_possible(vector<int>arr3,int mid,int students){
    int n=arr3.size();
    int page= 0;
    int count=1;
   for(int i=0;i<n;i++){
     if(arr3[i]>mid) return false;
     if(page+arr3[i]>mid){
      page=arr3[i];
       count++;
     }
    else{
        page+=arr3[i];
    }
   }
if(count>students) return false;
return true;
}
// tc=n*log2(high-low)
int books_allocation(vector<int>arr3,int students){
    int low=*max_element(arr3.begin(),arr3.end());
    int high=accumulate(arr3.begin(),arr3.end(),0);
    int ans=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(allocation_possible(arr3,mid,students)==true){
            high=mid-1;
            ans=mid;
        }
        else{
            low=mid+1;
        }
    }
    return ans;

}
int main(){
    vector<int>arr={2,3,4,7,11};
    int k=5;
    // cout<<k_missing_positive_number(arr,k);
    vector<int>arr2={0,3,4,7,9,10};
     int cows=4;
    // cout<<aggresive_cows(arr2,cows);   //max of min
    vector<int>arr3={12,34,67,90};
    int students=2;   //min of max
    cout<<books_allocation(arr3,students); //painters partition//spliting array min of max partition is 100 percent similar
}















#include <bits/stdc++.h>
using namespace std;
bool allocation_possible(vector<int>arr,int range,int cows){
    int n=arr.size();
    int last=arr[0];
    int tcows=1;
    for(int i=1;i<n;i++){
        if(arr[i]-last>=range){
          tcows++;
          last=arr[i];
        }
        
    }
    if(tcows>=cows) return true;
    else return false;
}
int aggresive_cows(vector<int>arr,int cows){
    int low=1;
    int high=*max_element(arr.begin(),arr.end())-*min_element(arr.begin(),arr.end());
    // for(int i=low;i<=high;i++){
    //     if(allocation_possible(arr,i,cows)==true){
    //     continue;
    //     }
    //     else {
    //         return i-1;
    //     }
        
    // }
    // return -1;
         int ans=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
   
        if(allocation_possible(arr,mid,cows)==true){
           low=mid+1;
           ans=mid;
        }
        else{
         high=mid-1;
        }
    }
    return ans;
}

int countstudent(vector<int>arr,int page){
int st=1;
int pagestudent=0;
int n=arr.size();
for(int i=0;i<n;i++){
    if(pagestudent+arr[i]<=page){
       
        pagestudent+=arr[i];
    }
    else{
      st++;
      pagestudent=arr[i];
    }
}
return st;
}
int book_allocation(vector<int>arr,int students){
int low=*max_element(arr.begin(),arr.end());
int high=accumulate(arr.begin(),arr.end(),0);
// for(int i=low;i<=high;i++){
//     int cs=countstudent(arr,i);
//     if(cs<=students){
//         return i;
//     }
// }
// return -1;
int ans=-1;
while(low<=high){
int mid=low+(high-low)/2;
if(countstudent(arr,mid)>students){
    low=mid+1;
}
else {
    ans=mid;
    high=mid-1;
}
}
return ans;

}
int main(){
vector<int>arr2={0,3,4,7,9,10};
     int cows=4;
    //  cout<<aggresive_cows(arr2,cows);

     vector<int>arr3={25,46,28,49,24};
    int students=4;
    cout<<book_allocation(arr3,students);
}