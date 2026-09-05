#include <bits/stdc++.h>
using namespace std;
// int assign_cookies(vector<int>greed,vector<int>cookies){
    // O(n log n + m log m + m) 🔥
    // sort(greed.begin(),greed.end());
    // sort(cookies.begin(),cookies.end());
    // int n=greed.size();
    // int m=cookies.size();
    // int left=0;
    // int right=0;
    // while(left<m&&right<n){
    //     if(cookies[left]>=greed[right]){
    //         left++;
    //         right++;
    //     }
    //     else{
    //     left++;
    //     }
    // }
    // return right;
// }


// int Fractional_Knapsack(vector<pair<int,int>>items,int W){
//   sort(items.begin(),items.end(),[](auto&a,auto&b){
//    return (a.first/a.second)>(b.first/b.second);
  // });
  // O(nlogn+n)

// int finalvalue=0;
//   for(auto item:items){
//   int weight=item.second;
//   int value=item.first;
//   if(W>=weight){
//     W-=weight;
//    finalvalue+=value;
//   }
//   else{
//     finalvalue+=(value/weight)*W;
//     break;
//   }

//   }
//   return finalvalue;
// }


// bool lemonade_change(vector<int>arr){
//   // Time:  O(n)
// // Space: O(1)
//  int five=0;
//  int ten=0;
//  int twenty=0;
//  int n=arr.size();
//  for(int i=0;i<n;i++){
//   if(arr[i]==5){
//     five+=1;
//   }
//   else if(arr[i]==10){
//     if(five){
//     five-=1;
//     ten+=1;
//     }
//     else {
//       return false;
//     }
    
//   }
//   else {
//     if(five&&ten){
//       five-=1;
//       ten-=1;
//     }
//     else if(five>=3){
//       five-=3;
//     }
//     else {
//       return false;
//     }
//   }
//  }
//  return true;
// }

bool solve(string s ,int i, int count){
  
  if(count<0) return false;
  if(i==s.size()){
    if(count==0) return true;
    else return false;
  }
  if(s[i]=='(') return solve(s,i+1,count+1);
  if(s[i]==')') return solve(s,i+1,count-1);
  else return solve(s,i+1,count+1)||solve(s,i+1,count-1)||solve(s,i+1,count);
}
bool valid_paranthesis_checker(string s){
  // brute force Time  = O(3^k) // Space = O(n)
// return solve(s,0,0);
// optimal solution 
int n=s.size();
int min=0;
int max=0;
for(int i=0;i<n;i++){
  if(s[i]=='('){
    min+=1;
    max+=1;
  }
  else if(s[i]==')'){
    min-=1;
    max-=1;
  }
  else{
    min-=1;
    max+=1;
  }
  if(min<0) min=0;
  if(max<0) return false;
}
if(min==0) return true;
}
int main(){
// vector<int>greed = {1, 2, 3};
// vector<int>cookies = {1, 2};
// cout<<assign_cookies(greed,cookies);

  //  vector<pair<int,int>> items = {
  //       {60, 10},
  //       {100, 20},
  //       {120, 30}
  //   };

  //   int W = 50;

  //   cout<<Fractional_Knapsack(items,W);


// vector<int> arr={5, 5, 5, 10, 20};
// cout<<lemonade_change(arr);
string s = "(*))";
cout<<valid_paranthesis_checker(s);

}