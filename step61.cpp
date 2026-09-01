// design twitter directly in leetcode solved {very good and hard question }


#include <bits/stdc++.h>
using namespace std;
int minimum_cost_to_connect_sticks(vector<int>arr){
    // Time complexity: O(n log n)
// Space complexity: O(n)
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i=0;i<arr.size();i++){
       pq.push(arr[i]);
    }
    int sum=0;
    int cost=0;
    while(pq.size()>1){
        int first=pq.top();
        pq.pop();
        int second=pq.top();
        pq.pop();
        sum=first+second;
        cost+=sum;
        pq.push(sum);

    }
    return cost;
}
int main(){
    
vector<int>arr={2, 3, 4};
  cout<<minimum_cost_to_connect_sticks(arr);  
}