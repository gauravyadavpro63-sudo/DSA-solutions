#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[],int n){
 for(int i=0;i<=n-2;i++){
    int min=i;
    for(int j=i;j<=n-1;j++){                   //O(n(sq))
        if(arr[j]<arr[min]){
            min=j;
        }
    }
    int temp=arr[min];
    arr[min]=arr[i];
    arr[i]=temp;
 }
}



void bubble_sort(int arr[],int n){
    for(int i=n-1;i>=0;i--){
        int didswap=0;                   
        for(int j=0;j<i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
                didswap=1;
            }
            
        }
        if(didswap==0){        //so the best of time complexity of bubblesort is (O)n  therwise 
                                  //O(n(sq)) 
            break;
        }
    }

}

void insertion_sort(int arr[],int n){
    for(int i=0;i<=n-1;i++){
        int j=i;
        while( j>0 && arr[j-1]>arr[j]){
            int temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;               //O(n(sq))but the best of time complexity is O(n)
            j--;
        }
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // selection_sort(arr,n);
    // bubble_sort(arr,n);
    // insertion_sort(arr,n);
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}