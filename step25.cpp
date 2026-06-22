#include <bits./stdc++.h>
using namespace std;
void mergesortedarrays(int arr1[],int arr2[]){
    // brute tc=O(n+m)+O(n+m) sc=O(n+m);
    // int n=4;
    // int m=5;
    // int arr3[n+m];
    // int left=0;
    // int right=0;
    // int index=0;
    // while(left<n&&right<m){
    //     if(arr1[left]<=arr2[right]){
    //         arr3[index]=arr1[left];
    //         left++;index++;
    //     }
    //     else{
    //         arr3[index]=arr2[right];
    //         right++,index++;
    //     }
    // }
    // while(left<n){
    //     arr3[index++]=arr1[left++];
    // }
    // while(right<m){
    //     arr3[index++]=arr2[right++];
    // }
    
    // for(int i=0;i<n+m;i++){
    //     if(i<n) arr1[i]=arr3[i];
    //     else arr2[i-n]=arr3[i];
    // }

    // optimal tc=O(min(n,m)) +nlogn+mlogm sc=O(1);
    // int n=4;
    // int m=5;
    // int left=n-1;
    // int right=0;
    // while(left>=0&&right<m){
    //     if(arr1[left]>arr2[right]){
    //         swap(arr1[left],arr2[right]);
    //         left--,right++;
    //     }
    //     else{
    //         break;
    //     }

    // }
    // sort(arr1,arr1+n);
    // sort(arr2,arr2+m);
    // second optimal  vc
    

}

void find_missing_and_repeating(int arr[],int &repeating,int &missing){
//  brute tc=O(n*n) sc=O(1)
    // for(int i=1;i<=6;i++){
    //     int cnt=0;
    //     for(int j=0;j<6;j++){
    //         if(arr[j]==i) cnt++;
    //     }
    //     if(cnt==2) repeating=i;
    //     else if(cnt==0) missing=i;
    // if(missing!=-1&&repeating!=-1) break;
// }

}
vector<int> find_missing_and_repeating_2(vector<int>arr){
    // better sc=O(n) tc=O(2n) 
    // int n=arr.size();
    // int hash[n+1]={0};
    // for(int i=0;i<n;i++){
    //     hash[arr[i]]++;
    // }
    // int repeating=-1,misssing=-1;
    // for(int i=1;i<=n;i++){
    //     if(hash[i]==2) repeating=i;
    //     else if(hash[i]==0) misssing=i;

    //     if(repeating!=-1&&misssing!=-1){
    //         break;
    //     }
    // }
    // return {repeating,misssing};

    // optimal 1 tc=O(n) sc=O(1);
    long long n=arr.size();
    // s-Sn=x-y     //mising-repeating
    // s2-S2n=Xsq-Ysq
    long long Sn=(n*(n+1))/2;
    long long S2n=(n*(n+1)*(2*n+1))/6;
    long long s=0,s2=0;
    for(int i=0;i<n;i++){
        s+=arr[i];
        s2+=(long long)arr[i]*(long long)arr[i];
    }
    long long val1=s-Sn;//x-y
    long long val2=s2-S2n;
    val2=val2/val1; //x+y
    long long x=(val1+val2)/2;
    long long y=x-val1;
    return {(int)x,(int)y};

}







int main(){
    // int arr1[]={1,3,5,7};
    // int arr2[]={0,2,6,8,9};
    // mergesortedarrays(arr1,arr2);
    // for(int i=0;i<4;i++){
    //     cout<<arr1[i];
    // }
    // cout<<endl;
    // for(int i=0;i<5;i++){
    //     cout<<arr2[i];
    // }



//     int arr[]={6,5,3,2,1,1};
//      int repeating=-1;
//   int missing=-1;
//     find_missing_and_repeating(arr,repeating,missing);
//     cout<<"missing is "<<missing;
//     cout<<"repeating is "<<repeating;


vector<int> arr={6,5,3,2,1,1};
for(auto it:find_missing_and_repeating_2(arr)){
    cout<<it<<" ";
}
}