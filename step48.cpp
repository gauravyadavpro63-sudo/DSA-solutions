#include <bits/stdc++.h>
using namespace std;
// string numbertobits(int n,string s){
//     // sc=logn tc=logn
//     while(n!=0){
//         if(n%2==1) s.push_back('1');
//         else s.push_back('0');
//         n=n/2;
//     }
//      reverse(s.begin(),s.end());
//     return s;
// }
// 	tc=O(n) where n = length of string	  sc=O(1)
// int  bitstonumber(string s){
//     int num=0;
//     int power=1;
// for(int i=s.size()-1;i>=0;i--){
//     if(s[i]=='1'){
//      num=num+power;
//     }
//     power=power*2;
// }
// return num;
// }
bool CheckNthBitIsSetOrNot(int a,int n){
    if((a&(1<<n))!=0) return true;
    else return false;
}
int main(){
    // int n;
    // cout<<"enter a number";
    // cin>>n;
    // string s="";
    // cout<<numbertobits(n,s);
    // string s;
//     cout<<"enter the string";
//     cin>>s;

//     cout<<bitstonumber(s);
// swap two number;
// int a=2;
// int b=4;
// int temp=a;
// a=b;
// b=temp;
// cout<<a<<b;
// swap without using extra variable
// a=a^b;
// b=a^b;
// a=a^b;
// cout<<a<<b;
int a=23;
int n=2;
// cout<<CheckNthBitIsSetOrNot(a,n);

// set nth  bit 
// a=a|(1<<n);
// cout<<a;

//  clear int nth bit(make it 0);
// a=a&~(1<<n)
// cout<<a;
// toggle nth bit

// a=a^(1<<n);
// cout<<a;

// remove the last set bit

// a=a&a-1;
// cout<<a;

// check if the number is power of two

// if((a&(a-1))==0) return true


// count no of set bit
// tc=log2(n)
// int count=0;
// while(a>0){
//     // if(a%2==1) count++;
//     // a=a/2;
//     count+=a&1;
//     a=a>>1;
// }
// cout<<count;

//  cout<<__builtin_popcount(a); stl way
//  EVEN BETTER: BRIAN KERNIGHAN'S ALGORITHM tc=O(no of set bit);
// int count=0;
// while(a>0){
//     a=a&(a-1);
//     count++;
// }
// cout<<count;

//check no is odd or not
return a & 1;
// Binary of odd numbers always end with 1:


}

// 1️⃣ AND & — BOTH MUST BE 1
// 2️⃣ OR | — AT LEAST ONE MUST BE 1
// 3️⃣ XOR ^ — DIFFERENT = 1, SAME = 0
// 4️⃣ NOT ~ — FLIP EVERYTHING
// 5️⃣ LEFT SHIFT << — MULTIPLY BY 2
// Rule: Move bits left, add 0s on right

// Example:  13 << 2
//   13 = 1101
//   <<2 = 110100  = 52

// Formula: n << k = n * 2^k

// Use: Quick multiply by 2
// 6️⃣ RIGHT SHIFT >> — DIVIDE BY 2
// Rule: Move bits right, drop bits on right

// Example:  13 >> 2
//   13 = 1101
//   >>2 = 11  = 3

// Formula: n >> k = n / 2^k (floor)

// Use: Quick divide by 2


// Check bit:   n & (1 << k)
// Set bit:     n | (1 << k)
// Clear bit:   n & ~(1 << k)
// Toggle bit:  n ^ (1 << k)
// Even check:  n & 1 == 0
// Odd check:   n & 1 == 1
// Multiply:    n << 1
// Divide:      n >> 1

// Total bits in int: 32
// 1 bit for sign (+, -)
// 31 bits for value

// Range: -2³¹ to 2³¹ - 1

// Positive:  0 to 2³¹ - 1   (includes zero)
// Negative:  -2³¹ to -1      (no zero)
// Total:     2³² values      (all 32 bits)