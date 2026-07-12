void solve(int row,int column,vector<string>&ans,vector<vector<int>>&maze,vector<vector<int>>&visited,int n,string s){
if(row==n-1&&column==n-1){
    ans.push_back(s);
    return;
}
//downward
if(row+1<n&&visited[row+1][column]!=1&&maze[row+1][column]!=0){
    s.push_back('D');
    visited[row][column]=1;
    solve(row+1,column,ans,maze,visited,n,s);
    s.pop_back();
    visited[row][column]=0;
}
//left
if(column-1>=0&&visited[row][column-1]!=1&&maze[row][column-1]!=0){
    s.push_back('L');
    visited[row][column]=1;
    solve(row,column-1,ans,maze,visited,n,s);
    visited[row][column]=0;
    s.pop_back();
}
//right
if(column+1<n&&visited[row][column+1]!=1&&maze[row][column+1]!=0){
  s.push_back('R');
  visited[row][column]=1;
  solve(row,column+1,ans,maze,visited,n,s);
  visited[row][column]=0;
  s.pop_back();
}
//up
if(row-1>=0&&visited[row-1][column]!=1&&maze[row-1][column]!=0){
    s.push_back('U');
    visited[row][column]=1;
    solve(row-1,column,ans,maze,visited,n,s);
    visited[row][column]=0;
    s.pop_back();
}
}
vector<string> rate_in_maze(vector<vector<int>>maze,int n){
      vector<string>ans;
      string s;
      vector<vector<int>>visited(n,vector<int>(n,0));
      int row=0;
      int column=0;
      if(maze[row][column]==0) return ans;
      solve(row,column,ans,maze,visited,n,s);
      return ans;

}