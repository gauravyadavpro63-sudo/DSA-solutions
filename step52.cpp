
// Infix, Prefix, and Postfix are three ways of writing mathematical or arithmetic expressions.

// | Notation                              | Operator Position                | Example |
// | ------------------------------------- | -------------------------------- | ------- |
// | **Infix**                             | Operator is **between** operands | `A + B` |
// | **Prefix (Polish Notation)**          | Operator is **before** operands  | `+ A B` |
// | **Postfix (Reverse Polish Notation)** | Operator is **after** operands   | `A B +` |

// These notations are widely used in compilers, calculators, and expression evaluation algorithms.




#include <bits/stdc++.h>
using namespace std;

// int precedence(char s){
//     if(s=='^')return 3;
//     if(s=='*'||s=='/') return 2;
//     if(s=='+'||s=='-') return 1;
//     return 0;
// }
// string infix_to_postfix(string s){
//     stack<char> st;
//     string ans="";
//     for(int i=0;i<s.size();i++){
//         if((s[i]>='0'&&s[i]<='9')||s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z'){
//             ans.push_back(s[i]);
//         }
//         else if(s[i]=='('){
//             st.push(s[i]);
//         }
//         else if(st.empty()){
//             st.push(s[i]);
//         }
//         else if(s[i]==')'){
//             while(!st.empty()&&st.top()!='('){
//                 char temp=st.top();
//                 st.pop();
//                 ans.push_back(temp);
//             }
//            if(!st.empty()) st.pop();
//         }
//         else if(precedence(s[i])>precedence(st.top())){
//             st.push(s[i]);
//         }
//         else{
//            while(!st.empty()&&precedence(s[i])<=precedence(st.top())&& s[i] != '^'){
//             char temp=st.top();
//             st.pop();
//             ans.push_back(temp);
//            }
//            st.push(s[i]);
//         }
//     }
//     while(!st.empty()){
//         ans.push_back(st.top());
//         st.pop();
//     }
//     return ans;
// }
string infix_to_predfix(string s){
    int n=s.size();
for(i=0;i<n/2;i++){
    char temp=s[i];
    s[i]=s[n-1];
    s[n-1]=temp;

    }
}
}
int main(){
// string s="A+B*C";
// string a=infix_to_postfix(s);

string s="A+B*C";


string a=infix_to_prefix(s);
for(auto it:a){
    cout<<it;
}
    
}