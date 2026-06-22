#include <bits/stdc++.h>
using namespace std;
// finding element of pascal trangle at given row and column;
// direct formula row-1 C column-1.  which you can further solve and simplify to this
// tc=O(c) sc=O(1);
int pascal_triangle_element(int r ,int c){
    int res=1;
    for(int i=0;i<c;i++){
        res=res*(r-i);
        res=res/(i+1);
    }
    return res;
}
int pascal_triangle_row(int row){
    // tc=O(c*r) sc=O(1)
    // for(int c=1;c<=row;c++) {/*n rows n element*/
    // int res=pascal_triangle_element(row-1,c-1);
    // cout<<res<<" ";
    // }
    // better tc=O(n) sc=O(1)
    int ans=1;
    cout<<ans<<" ";
    for(int i=1;i<row;i++){
        ans=ans*(row-i);
        ans=ans/(i);
        cout<<ans<<" ";
    }
    
}
vector<int>generateRow(int row){
    long long ans=1;
    vector<int>ansrow;
    ansrow.push_back(1);
    for(int col=1;col<row;col++){
        ans=ans*(row-col);
        ans=ans/col;
        ansrow.push_back(ans);
    }
    return ansrow;
}
vector<vector<int>>pascal_triangle(int n){
    vector<vector<int>>ans;
    for(int i=1;i<=n;i++){
        ans.push_back(generateRow(i));
    }
    return ans;
}
int main(){
    int row=5;
    int column=3;
    // cout<<pascal_triangle_element(row-1,column-1);
    // pascal_triangle_row(row); tc=O(n*n)
//    for(auto it:pascal_triangle(5)) {
//     for(int i=0;i<it.size();i++){
//         cout<<it[i]<<" ";
//     }
//     cout<<endl;
//    }

}