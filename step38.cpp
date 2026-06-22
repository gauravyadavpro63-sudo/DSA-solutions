#include <bits/stdc++.h>
using namespace std;
string reverse_words_of_string(string b){
stringstream ss(b);
vector<string>totalwords;
string word;
while(ss>>word){
    totalwords.push_back(word);
}
string ans;
for(int i=totalwords.size()-1;i>=0;i--){
  
   ans+=totalwords[i];
     if(i!=0){
        ans+=" ";
    }
}
return ans;
}
string remove_outermost_parenthisis(string a){
    string ans;
    int count=0;
    for(auto it:a){
        if(it=='('){
            if(count>0){
                ans+=it;
            }
            count++;
        }
        else{
         count--;
         if(count>0){
         ans+=it;
         }
        }
    }
    return ans;
}
string largest_odd_number_in_string(string s){
    int index=-1;
    for(int i=s.size()-1;i>=0;i++){
        if((s[i]-'0')%2==1){
            index=i;
            break;
        }

    }
    if(index==-1){
        return " ";
    }

    string ans=s.substr(0,index+1);
    int start=0;
 while(start<ans.size()&&ans[start]=='0'){
    start++;
 
    }
    return ans.substr(start);
}
string longest_common_prefix(vector<string>arr){
    string ans="";
    if(arr.size()==0){
        return "";
    }
for(int i=0;i<arr[0].size();i++){
 char s=arr[0][i];
 for(int j=1;j<arr.size();j++){
    if(i>=arr[j].size()||s!=arr[j][i]){
        return ans;
    }
    
 }
 ans+=arr[0][i];
}
return ans;

}
bool is_string_isomorphic(string s,string d){
    unordered_map<char,char>mp1;
    unordered_map<char,char>mp2;
    if(s.size()!=d.size()){
        return false;
    }
    for(int i=0;i<s.size();i++){
        char a=s[i];
        char b=d[i];
         if(mp1.count(a)&&mp1[a]!=b){
            return false;
         }
         if(mp2.count(b)&&mp2[b]!=a){
            return false;
         }
         mp1[a]=b;
         mp2[b]=a;
    }
    return true;
}
bool rotatate_string(string s,string goal){
    // brute solution  tc=n*n;
    if(s.size()!=goal.size()) return false;
    // for(int i=0;i<s.size();i++){
    //     if(s==goal){
    //         return true;
    //     }
    //     char k=s[0];
    //     s.erase(0,1);
    //     s+=k;

    // }
    // return false;
    // optimal solution
    if(s.size()!=goal.size()) return false;
    string temp=s+s;
    int pos=temp.find(goal);
    if(pos==string::npos) return false;
    else return true;
}
bool is_string_anagram(string s,string k){
    // brute solution nlogn;
    // if(s.length()!=k.length()) return false;
    // sort(s.begin(),s.end());
    // sort(k.begin(),k.end());
    // if(s==k) return true;
    // else return false;
    // optimal solution
    if(s.length()!=k.length()) return false;
    int hashmap[26]={0};
    for(int i=0;i<s.length();i++){
        hashmap[s[i]-'a']++;
        hashmap[k[i]-'a']--;
    }
    for(int i=0;i<26;i++){
        if(hashmap[i]!=0) return false;
    }
    return true;
}
int main(){
    // string s="(()())";
    // cout<<remove_outermost_parenthisis(a)
    // string b="hello my name is kaneki";
    // cout<<reverse_words_of_string(b);
    // string s = "00035427";
    // cout<<largest_odd_number_in_string(s);
    // vector<string>arr={"flower","flow","flight"};
    // cout<<longest_common_prefix(arr);
    // string s="egg";
    // string d="add";
    // cout<<is_string_isomorphic(s,d);
    // string s= "hello";
    // string goal="elloh";
    // cout<<rotatate_string(s,goal);
    // string s="listen";
    // string k="silent";
    // cout<<is_string_anagram(s,k);

}