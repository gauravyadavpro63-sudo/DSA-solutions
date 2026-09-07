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
// bool jump_game1(vector<int> arr){
//     // TC = O(N)
// // SC = O(1)

//     int n=arr.size();
//     int maxindex=0;
//     for(int i=0;i<n;i++){
//       if(i>maxindex) return false;
//       maxindex=max(maxindex,i+arr[i]);
//     }
//     return true;
// }

// int solve(vector<int>nums,int i){
//     if(i==nums.size()-1){
//         return 0;
//     }
//     int minimum=INT_MAX;
//     for(int j=1;j<=nums[i];j++){
//        if(i+j<nums.size()){
//         minimum=min(minimum,1+solve(nums,i+j));
//        }
//     }
//     return minimum;
// }
// int jump_game_2(vector<int>nums){
    // brute solution
    // TC = O(2ⁿ)
    // SC = O(n)
    // return solve(nums,0);
    // optimal solution
    // TC = O(n)
    // int n=nums.size();
    // int maxindex= 0;
    // int currentindex=0;
    // int jump=0;
    // for(int i=0;i<n-1;i++){
    //     maxindex=max(maxindex,i+nums[i]);
    
    // if(i==currentindex){
    //     jump++;
    //     currentindex=maxindex;
    // }
// }
// return jump;

// }

int minimum_number_of_platform(vector<int>arrival,vector<int>departure){
    // brute force tc = n*n
    // int n=arrival.size();
    // int ans=0;
    // for(int i=0;i<n;i++){
    //     int count=0;
    //     int start=arrival[i];
    //     for(int j=0;j<n;j++){
    //         if(start>=arrival[j]&&start<=departure[j]){
    //             count++;
    //         }
            
    //     }
    //      ans=max(ans,count);
    // }
    // return ans;
 
 
    // optimal solution    tc=O(n);

    int n=arrival.size();
    sort(arrival.begin(),arrival.end());
    sort(departure.begin(),departure.end());
    int i=0;
    int j=0;
    int count=0;
    int  platform=0;
    while(i<n&&j<n){
        if(arrival[i]<departure[j]){
            i++;
            platform++;
            count=max(count,platform);
        }
        else{
            j++;
            platform--;
        }
    }
    return count;


}
int main(){
// int  n = 6;
// vector<int>start = {1,3,0,5,8,5}; 
// vector<int>end =  {2,4,5,7,9,9};

// vector<int>ans=meeting_in_one_room(start,end,n);
// for(auto it:ans){
//     cout<<it<<" ";
// }
//  vector<int>arr= {2, 3, 1, 0, 4};
// cout<<jump_game1(arr);

// vector<int>nums = {2,3,1,1,4};
// cout<<jump_game_2(nums);

vector<int>arrival   = {900, 940, 950, 1100, 1500, 1800};
vector<int>departure = {910, 1200, 1120, 1130, 1900, 2000};

cout<<minimum_number_of_platform(arrival,departure);
}