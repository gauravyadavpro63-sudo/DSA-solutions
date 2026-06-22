#include <bits/stdc++.h>
using namespace std;


vector<vector<int>>zeromatrix(vector<vector<int>>&matrix){
    // brute slution
//     int n = matrix.size();
//     int m = matrix[0].size();

//     // Step 1: mark with -1
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < m; j++){
//             if(matrix[i][j] == 0){

//                 // mark row
//                 for(int k = 0; k < m; k++){
//                     if(matrix[i][k] != 0)
//                         matrix[i][k] = -1;
//                 }

//                 // mark column
//                 for(int k = 0; k < n; k++){
//                     if(matrix[k][j] != 0)
//                         matrix[k][j] = -1;
//                 }
//             }
//         }
//     }

//     // Step 2: convert -1 → 0
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < m; j++){
//             if(matrix[i][j] == -1){
//                 matrix[i][j] = 0;
//             }
//         }
//     }
// }


    //better sc=O(n+m) tc=O(2n*n)
    // int n=matrix.size();
    // int m=matrix[0].size();

    // vector<int> row(n,0);
    // vector<int> col(m,0);
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         if(matrix[i][j]==0){
    //             row[i]=1;
    //             col[j]=1;
    //         }
    //     }
    // }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         if(row[i]==1||col[j]==1){
    //             matrix[i][j]=0;
    //         }
    //     }
    // }
    // return matrix;
    // optimal tc=O(2n*n) sc=O(1);
    // vector<vector<int>> setZeroes(vector<vector<int>>& matrix) {

    int n = matrix.size();
    int m = matrix[0].size();
    int col0 = 1;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==0){

                matrix[i][0] = 0;

                if(j!=0){
                    matrix[0][j] = 0;
                }
                else{
                    col0 = 0;
                }
            }
        }
    }

    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            if(matrix[i][j]!=0){
                if(matrix[0][j]==0 || matrix[i][0]==0){
                    matrix[i][j] = 0;
                }
            }
        }
    }

    if(matrix[0][0]==0){
        for(int j=0;j<m;j++){
            matrix[0][j] = 0;
        }
    }

    if(col0==0){
        for(int i=0;i<n;i++){
            matrix[i][0] = 0;
        }
    }

    return matrix;
}



vector<vector<int>>rotatematrix(vector<vector<int>>&matrix){
    // brute solution tc=O(n*n) sc=O(n*n)
    // int n=matrix.size();
    // int m=matrix[0].size();
    // vector<vector<int>>result(m,vector<int>(n));
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         result[j][n-1-i]=matrix[i][j];
    //     }
    // }
    // return result;
    // optimal sc=O(1) and tc=O(N/2+N/2)+O(N+N/2)nearly u can say n*n as there is n*n/2 swap and n*n/2 reverse .[.]
    // int n=matrix.size();
    // for(int i=0;i<n-1;i++){
    //     for(int j=i+1;j<n;j++){
    //         swap(matrix[i][j],matrix[j][i]);
    //     }
    // }
    // for(int i=0;i<n;i++){
    //     reverse(matrix[i].begin(),matrix[i].end());
    // }
    // return matrix;
}
vector<int>spiral(vector<vector<int>>&matrix)     //1234 algorithm
{
  // int n=matrix.size();
  // int m=matrix[0].size();
  // int left=0,right=m-1;
  // int top=0,bottom=n-1;
  // vector<int>res;
  // while(top<=bottom&&left<=right){
  // for(int i=left;i<=right;i++){ 
    //  res.push_back(matrix[top][i]);
  //     }
  //     top++;
  //     for(int i=top;i<=bottom;i++){
  //         res.push_back(matrix[i][right]);
  //     }
 //     right--;
  //     if(top<=bottom){
  //     for(int i=right;i>=left;i--){
  //         res.push_back(matrix[bottom][i]);
  //     }
  //     bottom--;
  // }
  // if(left<=right){
  //     for(int i=bottom;i>=top;i--){ 
  //         res.push_back(matrix[i][left]);
  //     }
  //      left++;
  // }
  // }
 // return res;
}
int main(){
    int n,m;
    cout<<"enter rows and columns";
    cin>>n>>m;
    vector<vector<int>>matrix(n,vector<int>(m));
    cout<<"enter matrix elements\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }
//     vector<vector<int>>ans=zeromatrix(matrix);
// cout<<"\n matrix after setting zeros\n";

// vector<vector<int>>ans=rotatematrix(matrix);/*n and m should be same here*/
// cout<<"\n matrix after rotationis "<<endl;
// for(int i=0;i<n;i++){
//     for(int j=0;j<m;j++){
//         cout<<ans[i][j]<<" ";
//     }
//     cout<<"\n";
// }

// for(auto it:spiral(matrix)){
//     cout<<it<<" ";
// }


return 0;


}