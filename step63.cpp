#include <bits/stdc++.h>
using namespace std;
// vector<int> meeting_in_one_room(vector<int>start,vector<int>end,int n){
    // TC = O(N log N)
// // SC = O(N)
//     vector<tuple<int,int,int>>store;
//     for(int i=0;i<n;i++){
//         store.push_back({end[i],start[i],i});
//     }
//     sort(store.begin(),store.end());
//      vector<int>ans;
//     int lastmeeting=-1;
//     for(auto it:store){
//         int start=get<1>(it);
//         int end=get<0>(it);
//         int position=get<2>(it);
//         if(start>=lastmeeting){
//             ans.push_back(position);
//             lastmeeting=end;
//         }
//     }
//     return ans;
// }
bool jump_game1(vector<int> arr){
    // TC = O(N)
// SC = O(1)

    int n=arr.size();
    int maxindex=0;
    for(int i=0;i<n;i++){
      if(i>maxindex) return false;
      maxindex=max(maxindex,i+arr[i]);
    }
    return true;
}
int main(){
// int  n = 6;
// vector<int>start = {1,3,0,5,8,5}; 
// vector<int>end =  {2,4,5,7,9,9};

// vector<int>ans=meeting_in_one_room(start,end,n);
// for(auto it:ans){
//     cout<<it<<" ";
// }
 vector<int>arr= {2, 3, 1, 0, 4};
cout<<jump_game1(arr);


}