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
double myownpow(double base,int exponential){
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

// int main(){
    
    // string no=" 12223s";
//     char* ptr=&no[0];
//     int value=atoi(ptr);
//     cout<<value;
// cout<<myatoi(no);
// cout<<pow(2,10);
 cout<<myownpow(2,10);

}