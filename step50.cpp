#include <bits/stdc++.h>
using namespace std;
// bool isprime(int n){
//       if(n<=1) return false;
//     int count=0;
//     for(int i=2;i<=sqrt(n);i++){
      
//       if(n%i==0) return false;
     
// }
// return true;
// }
vector<int> print_prime_factor_of_number(int n){
    // brute force solution
    // Complexity
// Outer loop: O(√n)
// isprime(): O(√n)
// Overall: O(n)
    // vector<int>ans;
    // for(int i=1;i<=sqrt(n);i++){
    //     if(n)
    // }
    // return ans;
    // better solution (bachpan wala method)   tc=O(n)
    // vector<int>ans;
    // for(int i=2;i<=n;i++){
    
    //     if(n%i==0){
    //         ans.push_back(i);
    //     }
    //     while(n%i==0){
    //         n=n/i;
    //     }
    // }
    // return ans;
    // optimal solution   O(sq(n)​+logn)=O(sq(n))
    // vector<int>ans;
    // for(int i=2;i<=sqrt(n);i++){
    //     if(n%i==0){
    //         ans.push_back(i);
    //     }
    //     while(n%i==0){
    //         n=n/i;
    //     }
    // }
    // if(n!=1) ans.push_back(n);
    // return ans;
}
bool isprime(int n){
    if(n<=1) return false;
    for(int i=2;i<=sqrt(n);i++){
       if(n%i==0) return false;
    }
    return true;
}
// Sieve approach: O(n log log n) 🚀
void blackbox(int n,vector<int>&hash){
 for(int i=2;i*i<=n;i++){
     if(hash[i]==1){
        for(int j=i*i;j<=n;j+=i){
            hash[j]=0;
        }
     }
        
     }
 }

vector<int> all_prime_in_range_n(int n){
    // brute force n*sqr(n)
    // vector<int>ans;
  
    // for(int i=1;i<=n;i++){
    //     if(isprime(i)) ans.push_back(i);
    // }
    vector<int>ans;
    vector<int>hash(n+1,1);
    blackbox(n,hash);
    for(int i=2;i<=n;i++){
        if(hash[i]==1) ans.push_back(i);
    }
     
    return ans;
}
int main(){
    int n=78;
    // for(auto it: print_prime_factor_of_number(n)){
    //       cout<<it<<" ";
    // }
   for(auto it:all_prime_in_range_n(n) ){
       cout<<it<<" ";
   } 
}