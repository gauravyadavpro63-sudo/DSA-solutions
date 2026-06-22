#include <bits/stdc++.h>
using namespace std;
int subarraywithXORask(int k,int arr[])
{
  
    // better tc=O(n*n) sc=(1)
    //    int cnt=0;
    //   for(int i=0;i<5;i++){
    //     int XOR=0;
    //     for(int j=i;j<5;j++){
    //         XOR=XOR^arr[j];
    //         if(XOR==k)cnt++;

    //     }
    //   }
    //   return cnt;
    // }
    // optimal solution  reverse enginerring 3.0 ;
    // use formula x=XOR^K sc=O(n) tc=O(nlogn)
    // int XOR=0;
    //     map<int,int>mpp;
    //     mpp[XOR]++;//{0,1}
    //     int cnt=0;
    //     for(int i=0;i<5;i++){
    //         XOR=XOR^arr[i];
    //         int x=XOR^k;
    //         cnt+=mpp[x];
    //         mpp[XOR]++;
    //     }
 //     return cnt;
}

vector<vector<int>>mergeoverlappingintervals(vector<vector<int>>arr){
    // brute tc=O(nlogn+2n) sc=O(n )

// int n=arr.size();
// sort(arr.begin(),arr.end());
// vector<vector<int>>ans;
// for(int i=0;i<n;i++){                          
//     int start=arr[i][0];                       
//     int end=arr[i][1];                         
//     if(!ans.empty()&&end<=ans.back()[1]){    
//         continue;                              
//     }                                          
     

//     for(int j=i+1;j<n;j++){
//         if(arr[j][0]<=end){
//             end=max(end,arr[j][1]);
//         }
//         else{
//             break;
//         }
//     }
//     ans.push_back({start,end});
// }
//  return ans;
// // optimal tc=O(nlogn+n) sc=(n)     //  optimal algorithm
//     int n=arr.size();
//     sort(arr.begin(),arr.end());
//     vector<vector<int>>ans;
//     for(int i=0;i<n;i++){
//         if(ans.empty()||arr[i][0]>ans.back()[1]){
//             ans.push_back(arr[i]);
//         }
//         else{
//             ans.back()[1]=max(ans.back()[1],arr[i][1]);
//         }
//     }
//     return ans;

}
int main(){
//     int arr[]={4,2,2,6,4};
//     int k=6;
//     cout<<subarraywithXORask(k,arr);
vector<vector<int>> arr={{1,2},{2,6},{8,9},{9,11},{8,10},{2,4},{15,18},{16,17}};
for(auto it:mergeoverlappingintervals(arr)){
    for(int i=0;i<it.size();i++){
        cout<<it[i]<<" ";
    }
    cout<<endl;
}
}
