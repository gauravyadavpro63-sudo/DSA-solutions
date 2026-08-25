string minimum_window_substring(string s,string t){
    
    int maxlength=INT_MAX;
     int start=-1;   
    unordered_map<char,int>need;
    for(auto it:t){
      need[it]++;
    }
    int n=s.size();
    for(int i=0;i<n;i++){
        unordered_map<char,int>window;
        for(int j=i;j<n;j++){
             window[s[j]]++;
             int valid=true;  
            for(auto [first,second]:need){
                if(window[first]<second){
                    valid=false;
                    break;
                }
            }
            if(valid==true){
                if(j-i+1<maxlength){
                    maxlength=j-i+1;
                    start=i;
                }
            }
        }
    }
    
    
    
    if(start==-1) return "";
    
    string ans=s.substr(start,maxlength);
    return ans;
    
}