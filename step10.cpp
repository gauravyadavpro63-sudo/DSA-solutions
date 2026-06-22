// array

// arr[6]-->in global it will automaticaly take value 0 in all six memory location
// arr[6]-->inside main it will get garbage value in its all memory  location.

// max size int arr[10 to the power 6] in main
// max size int arr[10 to the power 7] in global scope

#include <bits/stdc++.h>
using namespace std;

int largestElement(vector<int> &arr,int n)

{
    int largest=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    return largest;
}
int secondLargest(vector<int>&arr,int n){
    // brute solution
// sort the arr and for(i=n-2;i>=0;i--){
//     if(arr[i]!=largest)
//     {
//         secondLargest=arr[i];
//         break;       
//     }
// }
//better solution
// largest=arr[0]
// for(i=0;i<n;i++){
//     if(arr[i]>largest)
//     largest=arr[i];
// }
// secondLargest=-1;
// for(i=0;i<n;i++){
//     if(arr[i]>secondlargest&&arr[i]!=largest){
        // secondLargest=arr[i];                     O(2n)
    // }
// }
//optimal solution                        O(n)
int largest=arr[0];
int slargest=-1;
for(int i=1;i<n;i++){
    if(arr[i]>largest){
        slargest=largest;
        largest=arr[i];
    }
                            
    else if(arr[i]<largest&&arr[i]>slargest){
        slargest=arr[i];
    }
}
return slargest;
}
int secondSmallest(vector<int>&arr,int n){
    int smallest=arr[0];
    int ssmallest=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<smallest){
            ssmallest=smallest;
            smallest=arr[i];
        }
        else if(arr[i]>smallest&&arr[i]<ssmallest){
            ssmallest=arr[i];
        }
    }
    return ssmallest;
}

int cheak_sort(vector<int> &arr,int n){      
    // O(n)
    for(int i=1;i<n;i++){
        if(arr[i]>=arr[i-1]){
            
        }
        else{
            return false;
        }

    }
    return true;
}

int removed_duplicate(vector<int>&arr,int n){
//  brute solution       O(nlogn)+n     sc->O(n)
// set<int>st;
// for(int i=0;i<n;i++){
//  st.insert[arr[i]]
// }
// index=0;
// for(auto it:st){
//     arr[index]=it;
//     index++;
// }
// return index;
// optimal solution
int i=0;
for(int j=1;j<n;j++){
    if(arr[i]!=arr[j]){
        arr[i+1]=arr[j];
        i++;
    }
}
return i+1;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // cout<<"largest element is "<<largestElement(arr,n);
    // cout<<"second largest is "<<secondLargest(arr,n);
    // cout<<"second smallest id "<<secondSmallest(arr,n);    
    // cout<<"given array is "<<cheak_sort(arr,n);
    // cout<<"no of unique elements in array after removed duplicate "<<removed_duplicate(arr,n);
    
}
