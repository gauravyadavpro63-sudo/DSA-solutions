
// Infix, Prefix, and Postfix are three ways of writing mathematical or arithmetic expressions.

// | Notation                              | Operator Position                | Example |
// | ------------------------------------- | -------------------------------- | ------- |
// | **Infix**                             | Operator is **between** operands | `A + B` |
// | **Prefix (Polish Notation)**          | Operator is **before** operands  | `+ A B` |
// | **Postfix (Reverse Polish Notation)** | Operator is **after** operands   | `A B +` |

// These notations are widely used in compilers, calculators, and expression evaluation algorithms.




#include <bits/stdc++.h>
using namespace std;

int precedence(char s){
    if(s=='^')return 3;
    if(s=='*'||s=='/') return 2;
    if(s=='+'||s=='-') return 1;
    return 0;
}
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
// string infix_to_prefix(string k){
//     string s ="";
//     int n=k.size();
//     for(int i=n-1;i>=0;i--){
//         if(k[i]=='('){
//             s.push_back(')');
//         }
//          else if(k[i]==')'){
//             s.push_back('(');
//          }
//          else{
//             s.push_back(k[i]);
//          }
//     }


//  stack<char>st;
//  string ans="";

//     for(int i=0;i<s.size();i++){
//       if(s[i]>='a'&&s[i]<='z' || s[i]>='A'&&s[i]<='Z' || s[i]>='0'&&s[i]<='9'){
//         ans.push_back(s[i]);
//       }
//       else if(s[i]=='('){
//         st.push(s[i]);
//       }
//       else if(s[i]==')'){
//         while(!st.empty()&&st.top()!='('){
//             char temp=st.top();
//             st.pop();
//             ans.push_back(temp);
//         }
//         st.pop();
//       }
// else{
//     while(!st.empty() && st.top()!='(' &&
//          (precedence(st.top()) > precedence(s[i]) ||
//          (precedence(st.top()) == precedence(s[i]) && s[i] == '^'))){
//         char temp = st.top();
//         st.pop();
//         ans.push_back(temp);
//     }
//     st.push(s[i]);
// }    
//     }
//     while(!st.empty()){
//         char temp=st.top();
//         st.pop();
//         ans.push_back(temp);
//     }
//     reverse(ans.begin(),ans.end());
//     return ans;
// }
// string postfix_to_infix(string s){
//     stack<string>st;
//     for(int i=0;i<s.size();i++){
//         if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z'||s[i]>='0'&&s[i]<='9'){
//          st.push(string(1,s[i]));
//         }
//         else{
//             string temp1=st.top();
//             st.pop();
//             string temp2=st.top();
//             st.pop();
//             string temp3="("+temp2+s[i]+temp1+")";
//             st.push(temp3); 
//         }
//     }
//     return st.top();
// }
string prefix_to_infix(string s){
    stack<string>st;
    int n=s.size();
    for(int i=n-1;i>=0;i--){
        if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z'||s[i]>='0'&&s[i]<='9'){
            st.push(string(1,s[i]));
        }
        else{
            string temp1=st.top();
            st.pop();
            string temp2=st.top();
            st.pop();
            string temp3="("+temp1+s[i]+temp2+")";
            st.push(temp3);
        }
    }
    return st.top();
}


string postfix_to_prefix(string s){
    int n=s.size();
    stack<string>st;
    for(int i=0;i<n;i++){
       if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z'||s[i]>='0'&&s[i]<='9'){
        st.push(string(1,s[i]));
       }
       else{
        string temp1=st.top();
        st.pop();
        string temp2=st.top();
        st.pop();
        string temp3=s[i]+temp2+temp1;
        st.push(temp3);
       }
    }
    return st.top();
}
string prefix_to_postfix(string s){
    int n=s.size();
    stack<string>st;
    for(int i=n-1;i>=0;i--){
        if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z'||s[i]>='0'&&s[i]<='9'){
            st.push(string(1,s[i]));
        }
        else{
            string temp1=st.top();
            st.pop();
            string temp2=st.top();
            st.pop();
            string temp3=temp1+temp2+s[i];
            st.push(temp3);
        }
    }
    return st.top();
}
int main(){
// string s="A+B*C";
// string a=infix_to_postfix(s);

// string s="A+B*C";


// string a=infix_to_prefix(s);
// for(auto it:a){
//     cout<<it;
// }
// string s="AB+C*";
// string a=postfix_to_infix(s);
//  for(auto it:a){
//     cout<<it;
//  }   
// string s="*+ABC";
// string a=prefix_to_infix(s);
// for(auto it:a){
//     cout<<it;
// }
// string s="AB+C*";
// string a=postfix_to_prefix(s);
// for(auto it:a){
//     cout<<it;
// }
string s="*+ABC";
string a=prefix_to_postfix(s);
for(auto it:a){
    cout<<it;
}
}