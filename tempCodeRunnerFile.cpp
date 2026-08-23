 longest_repeating_character_replacement(string s,int k){
    int maxi=0;
    int n=s.size();
    for(int i=0;i<n;i++){
        unordered_map<int,int>mpp;
        int maxfreq=0;
        for(int j=i;j<n;j++){
         mpp[s[j]]++;
         maxfreq=max(maxfreq,mpp[s[j]]);
         int length=j-i+1;
         int change=length-maxfreq;
         if(change<=k){
            maxi=max(maxi,length);
         }       
        }
    }
    return maxi;
}