#include <bits/stdc++.h>
using namespace std;
bool isprime(int n){
    int count=0;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0) {
            count++;
        if((n/i)!=i) count++;
        }
    }
    if(count==2) return true;
    else return false;
}
vector<int> print_prime_factor_of_number(int n){
    // brute force solution
    // Complexity
// Outer loop: O(√n)
// isprime(): O(√n)
// Overall: O(n)
    // vector<int>ans;
    // for(int i=1;i<=sqrt(n);i++){
    //     if(n%i==0){
    //         if(isprime(i)) ans.push_back(i);
    //         if((n/i)!=i) {
    //             if(isprime(n/i)) ans.push_back(n/i);
    //         }
    //     }
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
int main(){
    int n=78;
    for(auto it: print_prime_factor_of_number(n)){
          cout<<it<<" ";
    }
}