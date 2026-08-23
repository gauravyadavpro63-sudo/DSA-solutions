#include <bits/stdc++.h>
using namespace std;
// int largest_substring_without_repeating_character(string s){
    // Time: O(n²)
    // Space: O(1)
    // int maxi=0;
   
    // int n=s.size();
    // for(int i=0;i<n;i++){
    //      int hashmap[256]={0};
    //     for(int j=i;j<n;j++){
    //        if(hashmap[s[j]]==1) break;
    //          hashmap[s[j]]=1;
    //        int length=j-i+1;
    //        maxi=max(maxi,length);
    //     }
      
    // }
    // return maxi;
//     int left=0;
//     int right=0;
//     int hashmap[256]={0};
//     for(int i=0;i<256;i++){
//         hashmap[i]=-1;
//     }
//     int n=s.size();
//     int maxi=0;
//     while(right<n){
//         if(hashmap[s[right]]!=-1){
//             if(hashmap[s[right]]>=left){
//                left=hashmap[s[right]]+1;
//             }
            
//         }
//          int length=right-left+1;
//          maxi=max(maxi,length);
//             hashmap[s[right]]=right;
//         right++;
//     }
//     return maxi;
// }
// int maximum_consicutive_oneIII(vector<int>nums,int k){
    // O(n²) in the worst case.
    // int maxiums.size();
    // for(int i=0;i<n;i++){
    //     int zero=0;
    //     for(int j=i;j<n;j++){
    //        if(nums[j]==0) zero++;
    //        if(zero<=k){
    //         int length=j-i+1;
    //         maxi=max(maxi,length);
    //        }
    //        else {
    //         break;
    //        }
    //     }
    // }
    // return maxi=0;
    // optimal solution
    // Your approach works in O(n) time and O(1) space.
//    int left=0 ;
//    int right=0;
//    int zero=0;
//    int maxi=0;
//    int n=nums.size();
//    while(right<n){
//     if(nums[right]==0){
//         zero++;

//     }
//     if(zero<=k){
//        int length=right-left+1;
//        maxi=max(maxi,length);
//     }
//     else{
//     if(nums[left]==0) zero--;
//     left++;
//     }

//     right++;
//    }

//     return maxi;
// }


// int  fruits_into_basket(vector<int> trees,int k){
    // tc=O(n*n);
    // int maxi=0;
    
    // int n=trees.size();
    // for(int i=0;i<n;i++){
    //     set<int>stt;
    // for(int j=i;j<n;j++){
    //       stt.insert(trees[j]);
    //       if(stt.size()<=k){
    //         int length=j-i+1;
    //         maxi=max(maxi,length);
    //       }
    // }
    
    // }
    // return maxi;
    // optimal solution
//     Time: O(n) average
// Space: O(k)
    // int left=0;
    // int right=0;
    // int maxi=0;
    // unordered_map<int,int>mpp;
    // int n=trees.size();
    // while(right<n){
    //     mpp[trees[right]] =mpp[trees[right]]+1;
    //     if(mpp.size()>k){
    //         mpp[trees[left]]--;
    //         if(mpp[trees[left]]==0){
    //             mpp.erase(trees[left]);
    //         }
    //         left++;
    //     }
    //     else{
    //        int length=right-left+1;
    //         maxi=max(maxi,length);
    //     }
    //     right++;
    // }
    // return maxi;

// }

// int longest_repeating_character_replacement(string s,int k){
    //  brute force tc=n*n 
    // int maxi=0;
    // int n=s.size();
    // for(int i=0;i<n;i++){
    //     unordered_map<int,int>mpp;
    //     int maxfreq=0;
    //     for(int j=i;j<n;j++){
    //      mpp[s[j]]++;
    //      maxfreq=max(maxfreq,mpp[s[j]]);
    //      int length=j-i+1;
    //      int change=length-maxfreq;
    //      if(change<=k){
    //         maxi=max(maxi,length);
    //      }       
    //     }
    // }
    // return maxi;
//   optimal solution tc=O(n) sc=O(1);
//  int left=0;
//  int right=0;
//  int n=s.size();
//  int  maxi=0;
//  int maxifreq=0;
//  int current=0;
//  unordered_map<char,int>mpp;
//  while(right<n){
//   mpp[s[right]]++;
//   maxifreq=max(maxifreq,mpp[s[right]]);
//   int length=right-left+1;
//   int change=length-maxifreq;
//   if(change>k){
//      mpp[s[left]]--;
//     left++;
   
//   }
//   if(change<=k){
//   maxi=max(maxi,length);

//   }
//   right++;
  
//  }   
//  return maxi; 
// }
// int binary_subarray_with_sum_less_than_equal_to_goal(vector<int>nums,int goal){
//     if(goal<0) return 0;
//  int left=0;
//  int right=0;
//  int count=0;
//  int sum=0;
//  int n=nums.size();
//  while(right<n){
//     sum+=nums[right];
//     while(sum>goal){
//         sum-=nums[left];
//         left++;
//     }
//     count+=right-left+1;
//     right++;
//  }
//  return count;
// }
// int binary_subarray_with_sum_equal_to_goal(vector<int>nums,int goal){
// //     Time: O2*(2n)
// // Space: O(1)
//     return (binary_subarray_with_sum_less_than_equal_to_goal(nums, goal)-binary_subarray_with_sum_less_than_equal_to_goal(nums, goal-1));
// }
// int binary_subarray_with_sum_less_than_equal_to_k(vector<int>nums,int k){
//     int left=0;
//     int right=0;
//     int count=0;
//     int sum=0;
//     int n=nums.size();
//     while(right<n){
//         sum+=nums[right]%2;
//         while(sum>k){
//             sum-=nums[left]%2;
//             left++;
//         }
//         count+=right-left+1;
//         right++;
//     }
//     return count;
// }
// int count_no_of_nice_subarray(vector<int>arr,int k){
//     return(binary_subarray_with_sum_less_than_equal_to_k(arr,k)-binary_subarray_with_sum_less_than_equal_to_k(arr,k-1));
// }


int no_of_substring_containing_all_three_character(string  s){
    // brute force
//     Time → O(n²)
// Space → O(1)
//     int count=0;
//     int n=s.size();
//     for(int i=0;i<n;i++){
//      int hashmap[3]={0};
//      for(int j=i;j<n;j++){
//          hashmap[s[j]-'a']=1;
//          if(hashmap[0]+hashmap[1]+hashmap[2]==3) count++ ;
//      }
//     }
//     return count;
// optimal soution space and time complexity O(n)

// int n=s.size();
// int count=0;
// int lastseen[3]={-1,-1,-1};
// for(int i=0;i<n;i++){
//  lastseen[s[i]-'a']=i;
// if(lastseen[0]!=-1&&lastseen[1]!=-1&&lastseen[2]!=-1){
//     count+=min({lastseen[0],lastseen[1],lastseen[2]})+1;
// }

// } 
// return count;
}



int max_point_from_card(vector<int>cardscore,int k){
    // Time: O(k)
// Space: O(1) 🚀
//     int leftsum=0;
//     int rightsum=0;
//     int totalsum=0;
//     int n=cardscore.size();
//     for(int i=0;i<k;i++){
//         leftsum+=cardscore[i];
//     }
//     totalsum=max(totalsum,leftsum);
//     int adjester=1;
//     for(int j=k-1;j>=0;j--){
//         leftsum-=cardscore[j];
//         rightsum+=cardscore[n-adjester];
        
//         totalsum=max(totalsum,leftsum+rightsum);
//         adjester++;
        
//     }
//     return totalsum;
// }
// int main(){
//     string  S = "abcddabac";
//     cout<<largest_substring_without_repeating_character( S);
//     vector<int> nums = {1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0};
//     int k= 3;
//     cout<<maximum_consicutive_oneIII(nums,k);
    // int k=2;
    // vector<int> trees={1, 2, 3, 2, 2};
    // cout<<fruits_into_basket(trees,k);

//     string s= "BAABAABBBAAA";
//     int k=2;
//    cout<< longest_repeating_character_replacement(s,k);
// vector<int> nums = {1, 0, 0, 1, 1, 0};
//  int goal =2;
// cout<<binary_subarray_with_sum_equal_to_goal(nums,goal);
//  vector<int>arr={3, 1, 2, 1, 1};
//  int k = 3;
// cout<<count_no_of_nice_subarray(arr,k);

//  string s = "abcba";
// cout<<no_of_substring_containing_all_three_character(s);
vector<int>cardScore = {1, 2, 3, 4, 5, 6}; 
 int k = 3;
cout<<max_point_from_card(cardScore,k);
}