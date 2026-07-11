bool save(vector<string>&board,int column,int row,int n){
int drow=row;
int dcolumn=column;
while(row>=0&&column>=0){
     if(board[row][column]=='Q') return false;
    row--;
    column--;
}
row=drow;
column=dcolumn;
while(column>=0){
    if(board[row][column]=='Q')  return false;
    column--;
}
column=dcolumn;
while(column>=0&&row<n){
    if(board[row][column]=='Q') return false;
    row++;
    column--;
}
return true;


}
void solve(vector<string>&board,vector<vector<string>>&ans,int column,int n){
if(column==n){
    ans.push_back(board);
    return;
}
for(int row=0;row<n;row++){
 if(save(board,column,row,n)==true){
    board[row][column]='Q';
    solve(board,ans,column+1,n);
    board[row][column]='.';
 }
}


}
vector<vector<string>> n_queens(int n){
    vector<string>board;
    string s(n,'.');
    vector<vector<string>>ans;
    int column=0;
    for(int i=0;i<n;i++){
        board.push_back(s);
    }
    solve(board,ans,column, n);
    return ans;
}