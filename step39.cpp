#include <bits/stdc++.h>
using namespace std;
 bool rule(pair<char,int>a,pair<char,int>b){
              if(a.second>b.second) return true;
              if(a.second<b.second) return false;
              return a.first<b.first;
    }
vector<char> sort_character_by_freq(string s){
    unordered_map<char,int>mpp;
    vector<pair<char,int>>ans;
    for(auto it:s){
        mpp[it]++;
    }
    for(auto it:mpp){
        ans.push_back({it.first,it.second});
    }
   
    sort(ans.begin(),ans.end(),rule);
    vector<char>final;
    for(auto it:ans){
        final.push_back(it.first);
    }
    return final;

}
int max_number_of_nested_paranthesis(string s){
    int currentdepth=0;
    int maxdepth=0;
    for(auto it:s){
      if(it=='('){
        currentdepth++;
        maxdepth=max(currentdepth,maxdepth);
      }
      else if(it==')'){
        currentdepth--;
      }
    }
    return maxdepth;
}
int roman_to_integer(string s){
    unordered_map<char,int>mpp={
        {'I',1},
        {'V',5},
        {'X',10},
        {'L',50},
        {'C',100},
        {'D',500},
        {'M',1000}

    };
    int sum=0;
    for(int i=0;i<s.size();i++){
        if(i+1<s.size()&&mpp[s[i]]<mpp[s[i+1]]){
        sum-=mpp[s[i]];
        }
        else{
            sum+=mpp[s[i]];
        }
    }
    return sum;
    }
   long long solve(int i,string &s,int value){
    if(i>=s.size()||!isdigit(s[i])){
        return value;
    }
    value=value*10+(s[i]-'0');
    return solve(i+1,s,value);
   }
    int string_to_number(string s){
        int i=0;
      while(i<s.size()&& s[i]==' ') i++;
      int sign=1;
      if(i<s.size()&&(s[i]=='-'||s[i]=='+')){
        if(s[i]=='-') sign=-1;
        i++;
      }
      long long value=solve(i,s,0);
      value*=sign;
      if(value>INT_MAX) return INT_MAX;
      if(value<INT_MIN) return INT_MIN; 
      return value;
    }
    

    int solve(string s,int k){
        if(k<=0) return 0;
        unordered_map<char,int>hashmap;
        int count=0;
        int left=0;
        for(int right=0;right<s.size();right++){
            hashmap[s[right]]++;
            while(hashmap.size()>k){
                
              hashmap[s[left]]--;
              if(hashmap[s[left]]==0){
                hashmap.erase(s[left]);
              }
              left++;
            }
            count+=right-left+1;
        }
        return count;
    }
    int number_of_substring(string s,int k){
        return solve(s,k)-solve(s,k-1);
    }

    string longest_pallindrome_substring(string s){
        int n=s.size();
        if(n<=1) return s;
         int start=0;
            int maxlength=1;
        for(int i=0;i<n;i++){
            int l=i;
            int r=i;
           
               while(l>=0&&r<n&&s[l]==s[r]){
                if(r-l+1>maxlength){
                    maxlength=r-l+1;
                    start=l;
                }
                l--;
                r++;
               }

               l=i;
               r=i+1;
               while(l>=0&&r<n&&s[l]==s[r]){
                if(r-l+1>maxlength){
                    maxlength=r-l+1;
                    start=l;
                }
                l--;
                r++;
               }
        }
        return s.substr(start,maxlength);
    }

    int sum_of_beauty_of_all_substring(string s){
        int n=s.size();
       
        int ans=0;
        for(int i=0;i<n;i++){
             int hashtable[26]={0};
            for(int j=i;j<n;j++){
               
                 int maxi=0;
                 int mini=INT_MAX;
                    hashtable[s[j]-'a']++;
                for(int k=0;k<26;k++){
                    if(hashtable[k]!=0){
                    maxi=max(maxi,hashtable[k]);
                    mini=min(mini,hashtable[k]);
                    
                    }
                }
                ans+=maxi-mini;
            }
        }
        return ans;
    }
    string reverse_string_2(string s){
        string word="";
        vector<string>words;
      for(auto it:s){
        if(it!=' '){
            word+=it;

        }
        else if(!word.empty()){
          words.push_back(word);
          word="";
        }
      }
      if(!word.empty()){
        words.push_back(word);
      }
     string ans="";
      for(int i=words.size()-1;i>=0;i--){
       ans+=words[i];
       if(i!=0){
        ans+=' ';
       }
      }
      return ans;
    }
int main(){
    // string s="tree";
    // for(auto it:sort_character_by_freq(s)){
        // cout<<it;
    // }
    // string s = "(1+(2*3)+((8)/4))+1";
    // cout<<max_number_of_nested_paranthesis(s);
    // string s="XIV";
    // cout<<roman_to_integer(s);
    // string s="  63737   hlo";
    // cout<<string_to_number(s);
    // string s="pqpqs";
    // int k=2;
    // cout<<number_of_substring(s,k);
    // string s="aba";
    // cout<<longest_pallindrome_substring(s);
    // string  s = "aabcbaa";
    // cout<<sum_of_beauty_of_all_substring(s);
    string s="sky is blue";
    cout<<reverse_string_2(s);


}