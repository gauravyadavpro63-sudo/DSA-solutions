#include <bits/stdc++.h>
using namespace std;

// bool pallindrome(int left,int right,string s){
//    while(left<right){
//     if(s[left]!=s[right]) return false;
//     left++;
//     right--;
//    }
//    return true;
// }
// int solve(string s,int index){
// if(index==s.size()) return 0;
// int mini=INT_MAX;
// for(int i=index;i<s.size();i++){
//     if(pallindrome(index,i,s)){
//     int segment=1+solve(s,i+1);
//     mini=min(segment,mini);
//     }
// }
//     return mini;
// }
// // tc=O(n*2^n) sc=O(n)
// int palindrom_partioning(string s){
//   int  index=0;
//     int cuts=solve(s,index)-1;
//     return cuts;
// }
// bool possibility(vector<vector<char>>&board,string &word,int rows,int columns,int index){
//     if(index==word.size()){
//         return true;
//     }
//     if(rows<0||columns<0||rows>=board.size()||columns>=board[0].size()||(word[index]!=board[rows][columns])){
//         return false;
//     }
//     char temp=board[rows][columns];
//     board[rows][columns]='#';
    
//     bool found=possibility(board,word,rows+1,columns,index+1)||possibility(board,word,rows-1,columns,index+1)||possibility(board,word,rows,columns-1,index+1)||possibility(board,word,rows,columns+1,index+1);
    
//     board[rows][columns]=temp;
//     return found;



// }
// bool word_search(vector<vector<char>>&board,string &word){
//    int index=0;
//    int rows=board.size();
//    int columns=board[0].size();
//    for(int i=0;i<rows;i++){
//     for(int j=0;j<columns;j++){
//         if(possibility(board,word,i,j,index)){
//             return true;
//         }
//     }
//    }
//    return false;
// }
// bool save(vector<string>&board,int column,int row,int n){
// int drow=row;
// int dcolumn=column;
// while(row>=0&&column>=0){
//      if(board[row][column]=='Q') return false;
//     row--;
//     column--;
// }
// row=drow;
// column=dcolumn;
// while(column>=0){
//     if(board[row][column]=='Q')  return false;
//     column--;
// }
// column=dcolumn;
// while(column>=0&&row<n){
//     if(board[row][column]=='Q') return false;
//     row++;
//     column--;
// }
// return true;


// }
// void solve(vector<string>&board,vector<vector<string>>&ans,int column,int n){
// if(column==n){
//     ans.push_back(board);
//     return;
// }
// for(int row=0;row<n;row++){
//  if(save(board,column,row,n)==true){
//     board[row][column]='Q';
//     solve(board,ans,column+1,n);
//     board[row][column]='.';
//  }
// }
// }



// void solve(int n,vector<string>&board,vector<vector<string>>&ans,int column,vector<int>&hashrow,vector<int>&lowerdiagonal,vector<int>&upperdiagonal){
//     if(column==n){
//         ans.push_back(board);
//         return ;;
//     }
//     for(int row=0;row<n;row++){
//         if(hashrow[row]==0&&lowerdiagonal[row+column]==0&&upperdiagonal[n-1+(row-column)]==0){
//             board[row][column]='Q';
//             hashrow[row]=1;
//             lowerdiagonal[row+column]=1;
//             upperdiagonal[n-1+(row-column)]=1;
//             solve(n,board,ans,column+1,hashrow,lowerdiagonal,upperdiagonal);
//             board[row][column]='.';
//             hashrow[row]=0;
//             lowerdiagonal[row+column]=0;
//             upperdiagonal[n-1+(row-column)]=0;
            
//         }
//     }
// }
// vector<vector<string>> n_queens(int n){
    // brute tc O(n!×n)
    // vector<string>board;
    // string s(n,'.');
    // vector<vector<string>>ans;
    // int column=0;
    // for(int i=0;i<n;i++){
    //     board.push_back(s);
    // }
    // solve(board,ans,column, n);
    // return ans;
    // better tc n!
    // vector<string>board;
    // string s(n,'.');
    // for(int i=0;i<n;i++){
    //     board.push_back(s);
    // }
    // vector<vector<string>>ans;
    // int column=0;
    // vector<int>hashrow(n,0);
    // vector<int>lowerdiagonal(2*n-1,0);
    // vector<int>upperdiagonal(2*n-1,0);
    // solve(n,board,ans,column,hashrow,lowerdiagonal,upperdiagonal);
    // return ans;

// }
// void solve(int row,int column,vector<string>&ans,vector<vector<int>>&maze,vector<vector<int>>&visited,int n,string s){
// if(row==n-1&&column==n-1){
//     ans.push_back(s);
//     return;
// }
// //downward
// if(row+1<n&&visited[row+1][column]!=1&&maze[row+1][column]!=0){
//     s.push_back('D');
//     visited[row][column]=1;
//     solve(row+1,column,ans,maze,visited,n,s);
//     s.pop_back();
//     visited[row][column]=0;
// }
// //left
// if(column-1>=0&&visited[row][column-1]!=1&&maze[row][column-1]!=0){
//     s.push_back('L');
//     visited[row][column]=1;
//     solve(row,column-1,ans,maze,visited,n,s);
//     visited[row][column]=0;
//     s.pop_back();
// }
// //right
// if(column+1<n&&visited[row][column+1]!=1&&maze[row][column+1]!=0){
//   s.push_back('R');
//   visited[row][column]=1;
//   solve(row,column+1,ans,maze,visited,n,s);
//   visited[row][column]=0;
//   s.pop_back();
// }
// //up
// if(row-1>=0&&visited[row-1][column]!=1&&maze[row-1][column]!=0){
//     s.push_back('U');
//     visited[row][column]=1;
//     solve(row-1,column,ans,maze,visited,n,s);
//     visited[row][column]=0;
//     s.pop_back();
// }
// }
// tc
// 4 × 4 × 4 × ... (n² times)  O(4^(n²))
// sc 
// Visited Matrix  = O(n²)
// Recursion Stack = O(n²)
// Path String     = O(n²)

// = 4^(n²)
// vector<string> rate_in_maze(vector<vector<int>>maze,int n){
//       vector<string>ans;
//       string s;
//       vector<vector<int>>visited(n,vector<int>(n,0));
//       int row=0;
//       int column=0;
//       if(maze[row][column]==0) return ans;
//       solve(row,column,ans,maze,visited,n,s);
//       return ans;

// }
// tc=n*2^n worst
// bool solve(unordered_set<string>&dictionary,string &word,int index){
//     if(index==word.size()) return true;
//     string box="";
//     for(int i=index;i<word.size();i++){
//          box.push_back(word[i]);
//          if(dictionary.find(box)!=dictionary.end()){
//             if(solve(dictionary,word,i+1)){
//                 return true;
//             }
//          }
//     }
//     return false;
// }
// bool word_break(vector<string>dict,string word){
//     unordered_set<string>dictionary(dict.begin(),dict.end());
//      return solve(dictionary,word,0);

// }
// tc=O(node*(color^nodes))
// sc
// Recursion stack : O(n)
// Color array     : O(n)
// bool possible(bool graph[101][101],int color[],int currentnode,int node,int i){
//     for(int k=0;k<node;k++){
//        if(k!=currentnode&&graph[currentnode][k]!=0&&color[k]==i){
//             return false;
//        }
//     }
//     return true;
// }
// bool m_coloring(bool graph[101][101],int node,int color[],int currentnode,int m){

//     if(currentnode==node){
//         return true;
//     }
    
//     for(int i=1;i<=m;i++){
//         if(possible(graph,color,currentnode,node,i)==true){
//             color[currentnode]=i;
//             if(m_coloring(graph,node,color,currentnode+1,m)==true){
//                 return true;
//             }
//             color[currentnode]=0;
//         }
//     }
//     return false;
// }

// O(9^E), where E is the number of empty cells.\
O(E) due to the recursion stack. Since Sudoku has a fixed size (9×9), this becomes O(1).
//    bool solving(vector<vector<char>>& board,int rows,int columns){
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<columns;j++){
//             if(board[i][j]=='.'){
//                 for(char a='1';a<='9';a++){
//                     if(valid(board,i,j,a)==true){
//                         board[i][j]=a;
//                         if(solving(board,rows,columns)==true){
//                             return true;
//                         }
//                         board[i][j]='.';
                        
//                     }
//                 }
//                 return false;
//             }
//         }
//     }
//     return true;
//    }
//    bool valid(vector<vector<char>>&board,int rows,int columns,char a){
//     for(int i=0;i<9;i++){
//         if(board[rows][i]==a) return false;
//         if(board[i][columns]==a) return false;
//         if(board[3*(rows/3)+i/3][3*(columns/3)+i%3]==a) return false;
//     }
//     return true;
//    }
int main(){
    // cout<<palindrom_partioning("aab");
    // vector<vector<char>>board={{'A', 'B', 'C', 'E'}, {'S', 'F', 'C', 'S'},{'A', 'D', 'E', 'E'}};
    // string word="ABCCED";
    // cout<<word_search(board,word);
    // vector<vector<string>>ans =n_queens(4);
    // for(auto it:ans){
    // for(auto k:it){
    //     cout<<k<<" ";
    // }
// }
//     vector<vector<int>> maze = {
//         {1, 0, 0, 0},
//         {1, 1, 0, 1},
//         {1, 1, 0, 0},
//         {0, 1, 1, 1}
//     };

//     int n = maze.size();
//    vector<string>ans= rate_in_maze(maze,n);
//     for(auto it:ans){
//         for(auto j:it){
//             cout<<j;
//         }
//         cout<<endl;
//     }   
// vector<string>dict={"leet","code"};
// string word="leetcode";
// cout<<word_break(dict,word);

// int nodes = 4;
// int m=3;
// bool graph[101][101] = {
//     {0,1,1,0},
//     {1,0,1,1},
//     {1,1,0,0},
//     {0,1,0,0}
// };
// int colour[nodes]={0};
// int currentnode=0;
// cout<<m_coloring(graph,nodes,colour,currentnode,m);

//  int rows=board.size();
//         int columns=board[0].size();
//         solving(board,rows,columns);
}
