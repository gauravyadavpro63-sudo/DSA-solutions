#include <bits/stdc++.h>
using namespace std;
// int myatoi(string no){
//     Time: O(n) ✅
// Extra Space: O(1) ✅
//       int i=0;
//       int sign=1;
//       long long value=0;

//         while( i<no.size()&& no[i]== ' '){
//             i++;
//         }
//         if(i<no.size()&&no[i]=='-'){
//             sign=-1;
//             i++;
//         }
//         if(i<no.size()&&no[i]=='+'){
//             i++;
//         }
        
//         while(i<no.size()&&isdigit(no[i])){
//           int digit=(no[i]-'0');


//           if (value > INT_MAX / 10) {
//     if (sign == 1)
//         return INT_MAX;
//     else
//         return INT_MIN;
// }

// if (value == INT_MAX / 10) {

//     // Positive number
//     if (sign == 1 && digit > 7)
//         return INT_MAX;

//     // Negative number
//     if (sign == -1 && digit > 8)
//         return INT_MIN;
// }
//           value=value*10+digit;
//           i++;
//         }
       
//         return sign*value;

// recursive solution tc=o(1) sc=O(n) just for learning

// int helper(const string &s, int i, int sign, long long value) {

//     // Stop if end of string or current character is not a digit
//     if (i >= s.size() || !isdigit(s[i]))
//         return sign * value;

//     int digit = s[i] - '0';

    // Overflow check
//     if (value > INT_MAX / 10)
//         return (sign == 1) ? INT_MAX : INT_MIN;

//     if (value == INT_MAX / 10) {
//         if (sign == 1 && digit > 7)
//             return INT_MAX;
//         if (sign == -1 && digit > 8)
//             return INT_MIN;
//     }

//     value = value * 10 + digit;

//     return helper(s, i + 1, sign, value);
// }

// int myAtoi(const string &s) {
//     int i = 0;
//     int sign = 1;

//     // Skip spaces
//     while (i < s.size() && s[i] == ' ')
//         i++;

//     // Check sign
//     if (i < s.size() && (s[i] == '+' || s[i] == '-')) {
//         if (s[i] == '-')
//             sign = -1;
//         i++;
//     }

//     return helper(s, i, sign, 0);
// }

// int main() {
//     cout << myAtoi("   -12345abc");
// }          
// }
// double myownpow(double base,int exponential){
// brute force tc=O(n) sc=O(1)
// long long n=exponential;
// if(n<0){
//     base=1.0/base;
//     n=-n;
// }

// double ans=1.0;
// for(int i=0;i<n;i++){
//    ans=ans*base;
// }
// return ans;
// optimal solution tc=O(logn) sc=O(1);
// long long  n=exponential;
// if(n<0){
//     base=1.0/base;
//     n=-n;
// }
// double ans=1;
// while(n){
//     if(n%2==1){
//         ans*=base;
//        n=n-1;
//     }
//     else{
//       base*=base;
//       n/=2;
//     }
// }
// return ans;
// }


// optimal  solution tc=logn sc=(1) 
// long long mod=1e9+7;
// long long value(long long base,long long expo){
//     long long ans=1;
//     while(expo){
//         if(expo%2==1){
//           ans=ans*base%mod;
//           expo=expo-1;

//          }
//         else{
//           base=base*base%mod;
//           expo=expo/2;
//         }
//     }
//     return ans%mod;
// }
// long long goodnumber(long long n){
    // long long even=(n+1)/2;
    // long odd=n/2;
    // return (value(5,even)*value(4,odd))%mod;
// }


// recursive solution tc=o(logn) sc=(logn)


// long long mod = 1e9 + 7;

// long long value(long long base, long long expo) {
//     long long ans = 1;

//     while (expo) {
//         if (expo % 2 == 1) {
//             ans = ans * base % mod;
//             expo = expo - 1;
//         } else {
//             base = base * base % mod;
//             expo = expo / 2;
//         }
//     }

//     return ans % mod;
// }

// long long goodnumber(long long n) {
//     long long even = (n + 1) / 2;
//     long long odd = n / 2;

//     return (value(5, even) * value(4, odd)) % mod;
// }

void insert(stack<int>&st,int x){
     if(st.empty()||x>st.top()){
        st.push(x);
        return;
     }
     int temp=st.top();
     st.pop();
     insert(st,x);
     st.push(temp);

}
// void stack_element_in_decresing_order(stack<int>&st){
    //  stack<int>temp;
// while(!st.empty()){
//     int x=st.top();
//     st.pop();
//     while(!temp.empty()&&x>temp.top()){
//        st.push(temp.top());
//        temp.pop();
//     }
//     temp.push(x);
// }
// while(!temp.empty())
//     st.push(temp.top());
//     temp.pop();
// }
//   if(st.empty()) return ;
//   int x=st.top();
//   st.pop();
//   stack_element_in_decresing_order(st);
//   insert(st,x);
// }

void insertreverse(stack<int>&st,int x){
     if(st.empty()){
        st.push(x);
        return;
     }
     int temp=st.top();
     st.pop();
     insertreverse(st,x);
     st.push(temp);


}
void stack_element_in_reverse_order(stack<int>&st){
    if(st.empty()) return;
    int x=st.top();
    st.pop();
    stack_element_in_reverse_order(st);
    insertreverse(st,x);
}
int main(){
    
    // string no=" 12223s";
//     char* ptr=&no[0];
//     int value=atoi(ptr);
//     cout<<value;
// cout<<myatoi(no);
// cout<<pow(2,10);
//  cout<<myownpow(2,10);
//  cout<<goodnumber(12);


 stack<int>st;
 st.push(5);
 st.push(2);
 st.push(1);
 st.push(3);
 st.push(4);
//  stack_element_in_decresing_order(st);
  stack_element_in_reverse_order(st);
  while(!st.empty()){
    cout<<st.top()<<" ";
    st.pop();

  }
}