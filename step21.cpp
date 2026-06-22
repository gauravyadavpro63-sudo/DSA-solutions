#include <bits./stdc++.h>
using namespace std;

vector<int> majority_element_greater_than_eightbythree(int  arr[]) {
    // brute tc=O(n*n) sc=O(2)
    vector<int> ls;
    for(int i=0;i<8;i++){
        if(ls.size()==0||ls[0]!=arr[i])
        {
            int cnt=0;
            for(int j=0;j<8;j++){
            if(arr[j]==arr[i]){
                cnt++;
                if(cnt>8/3){
                    ls.push_back(arr[i]);
                    break;
                }
                
            }
         
            }
            if(ls.size()==2)break;
        }
  
    
    }
      return ls;
    // 
    // better sc =O(n*logn) sc=O(n)
    // map<int,int>mpp;
    // vector<int>ls;
    // for(int i=0;i<8;i++){
    //     mpp[arr[i]]++;
    //     if(mpp[arr[i]]==3){
    //         ls.push_back(arr[i]);
    //     }
    // }
    // return ls;
    // optimal solution sc=O(2n) tc=O(n)
    // int cnt1=0,cnt2=0;
    // int el1=INT_MIN;
    // int el2=INT_MIN;
    // for(int i=0;i<8;i++){
    //     if(cnt1==0&&el2!=arr[i]){
    //         cnt1=1;
    //         el1=arr[i];
    //     }
    //     else if(cnt2==0&&el1!=arr[i]){
    //         cnt2=1;
    //         el2=arr[i];
    //     }
    //     else if(arr[i]==el1) cnt1++;
    //     else if(arr[i]==el2) cnt2++;
    //     else{
    //         cnt1--,cnt2--;
    //     }
    // }
    // vector<int>ls;
    // cnt1=0,cnt2=0;
    // for(int i=0;i<8;i++){
    // if(el1==arr[i]) cnt1++;
    // if(el2==arr[i]) cnt2++;
    // }
    // int mini=(int)(8/3)+1;
    // if(cnt1>=mini) ls.push_back(el1);
    // if(cnt2>=mini) ls.push_back(el2);
    // sort(ls.begin(),ls.end());
    // return ls;
}
int main(){
     int arr[]={ 2, 3, 2, 3, 2, 3, 2, 3};
     int n=8;
     for(auto it :majority_element_greater_than_eightbythree(arr)){
        cout<<it<<" ";
     }
}