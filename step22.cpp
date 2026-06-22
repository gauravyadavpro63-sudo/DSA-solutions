#include<bits/stdc++.h>
using namespace std;


vector<vector<int>> three_sum(vector<int>&num){
    // brute
    // tc=O(n*n*n)*O(log(no of unique elements)) sc=O(2*no of triplets)
    // set<vector<int>>st;
    // int n=num.size();
    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //         for(int k=j+1;k<n;k++){
    //             if(num[i]+num[j]+num[k]==0){
    //                 vector<int>temp={num[i],num[j],num[k]};
    //                 sort(temp.begin(),temp.end());
    //                 st.insert(temp);
    //             }
    //         }
    //     }

    // }
    // vector<vector<int>>ans(st.begin(),st.end());
    // return ans

    // better tc=O(n*nlog(m)) sc=O(n)+  O(no of unique triplet*2)
    // int n=num.size();
    // set <vector<int>>st;
    // for(int i=0;i<n;i++){
    //     set<int>hashset;
    //     for(int j=i+1;j<n;j++){
    //         int third=-(num[i]+num[j]);
    //         if(hashset.find(third)!=hashset.end()){
    //             vector<int>temp={num[i],num[j],third};
    //             sort(temp.begin(),temp.end());
    //             st.insert(temp);
    //         }
    //         hashset.insert(num[j]);
    //     }
    // }
    // vector<vector<int>>ans(st.begin(),st.end());
    // return ans;

    // optimal sc=O(nlogn+n*n) tc=O(no of unique elements6)
    int n=num.size();
    vector<vector<int>>ans;
    sort(num.begin(),num.end());
    for(int i=0;i<n;i++){
        if(i>0&&num[i]==num[i-1]) continue;
        int j=i+1;
        int k=n-1;
        while(j<k){
            int sum=num[i]+num[j]+num[k];
            if(sum<0){
                j++;
            }
            else if(sum>0){
                k--;
            }
            else{
                vector<int>temp={num[i],num[j],num[k]};
                ans.push_back(temp); 
                j++;
                k--;
                while(j<k&&num[j]==num[j-1])j++;
                while(j<k&&num[k]==num[k+1])k--;
            }
        }
    }
return ans;
}

vector<vector<int>> four_sum(vector<int>&num){
    // brute tc=O(n*n*n*n) sc=O(no of quads*2)
    // int n=num.size();
    // set<vector<int>>st;
    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //         for(int k=j+1;k<n;k++){
    //             for(int l=k+1;l<n;l++){
    //                 long long sum=num[i]+num[j];
    //                 sum+=num[k];
    //                 sum+=num[l];
    //                 if(sum==0){
    //                     vector<int>temp={num[i],num[j],num[k],num[l]};
    //                     sort(temp.begin(),temp.end());
    //                     st.insert(temp);
    //                 }
    //             }
    //         }
    //     }
    // }
    // vector<vector<int>> ans(st.begin(),st.end());
    // return ans;
    // better tc=O(n*n*n*log(m) sc=O(n)+O(quards*2)); 
//     int n=num.size();
//     set<vector<int>>st;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             set<long long>hashset;
//             for(int k=j+1;k<n;k++){
//                 long long sum=num[i]+num[j];
//                 sum+=num[k];
//                 long long fouth=0-(sum);
//                 if(hashset.find(fouth)!=hashset.end()){
//                     vector<int>temp={num[i],num[j],num[k],(int)fouth};
//                     sort(temp.begin(),temp.end());
//                     st.insert(temp);
//                 }
//                 hashset.insert(num[k]);
//             }
//         }
//     }
//   vector<vector<int>>ans(st.begin(),st.end());
//   return ans;
// optimal solution
// int n=num.size();
// vector<vector<int>>ans;
// sort(num.begin(),num.end());
// for(int i=0;i<n;i++){
//     if(i>0&&num[i]==num[i-1]) continue;
//     for(int j=i+1;j<n;j++){
//         if(j!=(i+1)&&num[j]==num[j-1]) continue;
//         int k=j+1;
//         int l=n-1;
//         while(k<l){
//             long long sum=num[i];
//             sum+=num[j];
//             sum+=num[k];
//             sum+=num[l];
//             if(sum==0){
//                 vector<int>temp={num[i],num[j],num[k],num[l]};
//                 ans.push_back(temp);
//                 k++; l--;
//                 while(k<l&&num[k]==num[k-1]) k++;
//                 while(k<l&&num[l]==num[l+1]) l--;
//             }
//             else if(sum<0) k++;
//             else l--;
//         }
//     }
// }
// return ans;
}

int largest_subarray_with_zero_sum( vector<int> &num){    //sigma algorithm
    // optimal solution tc=O(nlogn) sc=O(n)
    unordered_map<int,int>mpp;
    int n=num.size();
    int maxi=0;
    int sum=0;
    for(int i=0;i<n;i++){
      sum+=num[i];
      if(sum==0){
        maxi=i+1;
      }
      else{
        if(mpp.find(sum)!=mpp.end()){
            maxi=max(maxi,i-mpp[sum]);
        }
        else{
            mpp[sum]=i;
        }
      }
    }
    return maxi;
}
int main(){

    vector<int>num={-1,0,1,2,-1,-4};
    // for(auto it:three_sum(num)){
    //     for(int i=0;i<3;i++){
    //         cout<<it[i]<<" ";
    //     }
    //     cout<<endl;
    // }
    // for(auto it:four_sum(num)){
    //     for(int i=0;i<4;i++){
    //         cout<<it[i]<<" ";
    //     }
    //     cout<<endl;
    // }
    cout<<largest_subarray_with_zero_sum(num);
}