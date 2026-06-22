// #include <bits./stdc++.h>
// using namespace std;
// int main(){

// int n;
// cin>>n;
// int arr[n];
// for(int i=0;i<n;i++){
//     cin>>arr[i];
// }
// int hash[13]={0};
// for(int i=0;i<n;i++){
//     hash[arr[i]]+=1;
// }
//     int q;
//     cin>>q;
//     while(q--){
//         int number;
//         cin>>number;
//         cout<<hash[number]<<endl;

//     }
//     return 0;
// }

// for int in main max size ten ki power 6
// for int outside main max size ten ki power 7
// for boolen in main max size ten ki power 7
// for boolean outside main max size ten ki  power 8


// #include <bits./stdc++.h>
// using namespace std;
// int main(){
//     string s;
//     cin>>s;
  
//     int hash[26]={0};
//     for(int i=0;i<s.size();i++){
//         hash[s[i]-'a']++;
//     }
//     int  q;
//     cin>>q;
//     while(q--){
//         char r;
//         cin>>r;
//         cout<<hash[r-'a']<<endl;
//     }
//     return 0;
// }



// #include <bits./stdc++.h>
// using namespace std;
// int main(){
//     string s;
//     cin>>s;
  
//     int hash[256]={0};
//     for(int i=0;i<s.size();i++){
//         hash[s[i]]++;
//     }
//     int  q;
//     cin>>q;
//     while(q--){
//         char r;
//         cin>>r;
//         cout<<hash[r]<<endl;
//     }
//     return 0;
// }


// #include <bits./stdc++.h>
// using namespace std;
// int main(){
//     int a;
//     cin>>a;
//     int arr[a];
//     for(int i=0;i<a;i++){
//         cin>>arr[i];
//     }
//     map<int,int>mpp;
//     for(int i=0;i<a;i++){
//         mpp[arr[i]]++;
//     }

//     for(auto it:mpp){
//         cout<<it.first<<"->"<<it.second<<endl;
//     }

//     int c;
//     cin>>c;
//     while(c--){
//         int number;
//         cin>>number;
//         cout<<mpp[number]<<endl;
//     }
//     return 0;
// }


//  use unordererd map  as it has time complexity of O(1) in average and best cases but in worst 
//  cases its n because of collision    so then use map instead , map has logn