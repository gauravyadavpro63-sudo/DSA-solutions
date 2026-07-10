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
bool possibility(vector<vector<char>>&board,string &word,int rows,int columns,int index){
    if(index==word.size()){
        return true;
    }
    if(rows<0||columns<0||rows>=board.size()||columns>=board[0].size()||(word[index]!=board[rows][columns])){
        return false;
    }
    char temp=board[rows][columns];
    board[rows][columns]='#';
    
    bool found=possibility(board,word,rows+1,columns,index+1)||possibility(board,word,rows-1,columns,index+1)||possibility(board,word,rows,columns-1,index+1)||possibility(board,word,rows,columns+1,index+1);
    
    board[rows][columns]=temp;
    return found;



}
bool word_search(vector<vector<char>>&board,string &word){
   int index=0;
   int rows=board.size();
   int columns=board[0].size();
   for(int i=0;i<rows;i++){
    for(int j=0;j<columns;j++){
        if(possibility(board,word,i,j,index)){
            return true;
        }
    }
   }
   return false;
}
int main(){
    // cout<<palindrom_partioning("aab");
    vector<vector<char>>board={{'A', 'B', 'C', 'E'}, {'S', 'F', 'C', 'S'},{'A', 'D', 'E', 'E'}};
    string word="ABCCED";
    cout<<word_search(board,word);
}