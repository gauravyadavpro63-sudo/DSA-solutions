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

// int minimum_number_of_platform(vector<int>arrival,vector<int>departure){
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

    // int n=arrival.size();
    // sort(arrival.begin(),arrival.end());
    // sort(departure.begin(),departure.end());
    // int i=0;
    // int j=0;
    // int count=0;
    // int  platform=0;
    // while(i<n&&j<n){
    //     if(arrival[i]<departure[j]){
    //         i++;
    //         platform++;
    //         count=max(count,platform);
    //     }
    //     else{
    //         j++;
    //         platform--;
    //     }
    // }
    // return count;
// }

// vector<int> job_sequence_problem(vector<vector<int>>jobs){
//     Sorting             → O(N log N)
// Finding slots       → O(N × D)
// Space               → O(N + D)

// vector<pair<int,int>>v;
// int max_deadline=0;
// for(auto it:jobs){
//     v.push_back({it[2],it[1]});
//     max_deadline=max(max_deadline,it[1]);
// }
// sort(v.rbegin(),v.rend());


// int totaljobs=0;
// int totalprofit=0;
// vector<bool>trackdeadline(max_deadline+1,false);

// for(auto it:v){
//     int profit=it.first;
//     int deadline=it.second;
//     for(int i=deadline;i>=1;i--){
//         if(trackdeadline[i]==false){
//             totaljobs++;
//             totalprofit+=profit;
//             trackdeadline[i]=true;
//              break;
//         }
//     }
// }

// return {totaljobs,totalprofit};
// }




// int candy(vector<int>rating){
    // brute force solution

    // Time: O(2n)
// Space: O(2n)
    // int n=rating.size();
    // vector<int>left(n,0);
    // vector<int>right(n,0);
    // left[0]=1;
    // right[n-1]=1;
    // for(int i=1;i<n;i++){
    //     if(rating[i-1]>=rating[i]){
    //         left[i]=1;
    //     }
    //     else{
    //         left[i]=left[i-1]+1;
    //     }
    // }

    // for(int j=n-2;j>=0;j--){
    //     if(rating[j+1]>=rating[j]){
    //         right[j]=1;
    //     }
    //     else{
    //         right[j]=right[j+1]+1;
    //     }
    // }
    // int sum=0;
    // for(int i=0;i<n;i++){
    //    sum+=max(left[i],right[i]);
    // }
    // return sum;

//   better solution
// Time: O(2n)
// Space: O(n)

//         int n=rating.size();
//     vector<int>left(n,0);
   
//     left[0]=1;
//     for(int i=1;i<n;i++){
//         if(rating[i-1]>=rating[i]){
//             left[i]=1;
//         }
//         else{
//             left[i]=left[i-1]+1;
//         }
//     }
//     int current=1;
//     int right=1;
//    int  sum=max(1,left[n-1]);
//     for(int j=n-2;j>=0;j--){
//         if(rating[j+1]>=rating[j]){
//             current=1;
//         }
//         else{
//             current=current+1;
//             right=current;
//         }
//         sum+=max(left[j],current);
//     }
//     // int sum=0;a
//     // for(int i=0;i<n;i++){
//     //    sum+=max(left[i],right[i]);
//     // }
//     return sum;


// optimal solution

// int n=rating.size();
// int sum=1;
// int i=1;

// while(i<n){
// if(rating[i]==rating[i-1]){
// sum+=1;
// i++;
// continue; 

// }
// int peak=1;
// while(i<n&&rating[i]>rating[i-1]){
//      peak+=1;
//     sum+=peak;
   
//     i++;

// }
// int down=1;
// while(i<n&&rating[i]<rating[i-1]){
 
//   sum+=down;
//    down++;
//   i++;
// }
// if(down>peak){
//     sum+=down-peak;
// }



// }
// return sum;

// }

// double sortest_job_first(vector<int>jobs){
//     int n=jobs.size();
//     sort(jobs.begin(),jobs.end());
//     int interval=0;
//     int totalInterval=0;
//     for(int i=0;i<n;i++){
//        totalInterval+=interval;
//        interval+=jobs[i];
//     }
//     return double(totalInterval/n);
// }


vector<vector<int>> insertInterval(vector<vector<int>>Intervals,vector<int>newInterval){

    int n=Intervals.size();
    int i=0;
    vector<vector<int>>ans;
    int start=newInterval[0];
    int end=newInterval[1];
    while(i<n&&Intervals[i][1]<newInterval[0]){
        ans.push_back(Intervals[i]);
        i++;
    }
    while(i<n&&Intervals[i][0]<=end){
   start=min(Intervals[i][0],start);
   end=max(Intervals[i][1],end);
    i++;
    }
    ans.push_back({start,end});
    while(i<n){
        ans.push_back(Intervals[i]);
        i++;
    }

    return ans;
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

// vector<int>arrival   = {900, 940, 950, 1100, 1500, 1800};
// vector<int>departure = {910, 1200, 1120, 1130, 1900, 2000};

// cout<<minimum_number_of_platform(arrival,departure);

// vector<vector<int>>jobs={{1, 4, 20}, {2, 1, 10}, {3, 1, 40}, {4, 1, 30}};

// for(auto it:job_sequence_problem(jobs)){
//     cout<<it<<" ";
// }


// vector<int>rating = {1, 0, 5};
// cout<<candy(rating);  

// vector<int>jobs={3, 1, 4, 2, 5};
// cout<<sortest_job_first(jobs);
 vector<vector<int>>Intervals ={ {1, 3}, {6, 9} };
  vector<int>newInterval = {2, 5};
 
 for(auto it:insertInterval(Intervals,newInterval)){
    for(auto k:it){
        cout<<k<<" ";
    }
    cout<<endl;
 }


}