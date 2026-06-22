#include <bits/stdc++.h>
using namespace std;
int rotated_array_search(vector<int> arr,int target){
//     brut force=tc=O(n);
//     int n=arr.size();
//     for(int i=0;i<n;i++){
//         if(arr[i]==target) return i;
//     }
//  return -1;
//  optimal solution O(log2n)
int low=0;
int n=arr.size();
int high=n-1;
while(low<=high){
    int mid=low+(high-low)/2;
     if(arr[mid]==target) return mid;
     if(arr[low]<=arr[mid]){
           if(target>=arr[low]&&target<arr[mid]) {
            high=mid-1;
           }
           else{
            low=mid+1;
           }
        }
           else{
            if(target>arr[mid]&&target<=arr[high]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
     }
     return -1;

    

}
  

// tc=average=O(log2n) worst=O(n);
int rotated_array_search2(vector<int>arr,int target){
    int n=arr.size();
    int low=0; 
    int high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==target)return mid;
        if(arr[low]==arr[mid]&&arr[mid]==arr[high]){
            low++;
            high--;
            continue;
        }
        if(arr[low]<=arr[mid]){
            if(target>=arr[low]&&target<arr[mid]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        else{
            if(target>arr[mid]&&target<=arr[high]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
    }
    return -1;
}


int  minimum_sorted_rotated_array(vector<int>arr){
    int n=arr.size();
    int low=0;
    int high=n-1;
    int ans=INT_MAX;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[low]<=arr[mid]){
            ans=min(ans,arr[low]);
             low=mid+1;
        
        }
        else{
            ans=min(ans,arr[mid]);
            high=mid-1;
           
        }        
    }
    return ans;
}




int how_many_time_array_rotated(vector<int>arr){
    int n=arr.size();
    int low=0;
    int high=n-1;
    int ans=INT_MAX;
    int times=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[low]<=arr[mid]){
            if(arr[low]<ans){
                ans=arr[low];
                  times=low;
            }
               low=mid+1;
        }
        else{
            if(arr[mid]<ans){
                ans=arr[mid]; 
                times=mid;
            }
             high=mid-1;
        }
    }
    return times;
}
int main(){

    vector<int> arr={4,5,1,2,3};
    vector<int>arr2={3,1,3,3,3,3};
    int target=1;
    // cout<<rotated_array_search(arr,target); 
    // cout<<rotated_array_search2(arr2,target);
    // cout<<minimum_sorted_rotated_array(arr);  tc=O(log2n);
     cout<<how_many_time_array_rotated(arr);
    
}