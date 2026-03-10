class Solution {
public:
    void dfs(int i,int j,int r,int c,vector<vector<bool>>& isvisited,vector<vector<char>>& grid){
        if(i<0||j<0||i>=r||j>=c||isvisited[i][j]||grid[i][j]=='0'){
            return;
        }
            isvisited[i][j]=true;
            dfs(i+1,j,r,c,isvisited,grid);
            dfs(i-1,j,r,c,isvisited,grid);
            dfs(i,j+1,r,c,isvisited,grid);
            dfs(i,j-1,r,c,isvisited,grid);
        
    }
    int numIslands(vector<vector<char>>& grid) {
     
        int r=grid.size();
        int c=grid[0].size();
        int count=0;
        vector<vector<bool>>isvisited(r,vector<bool>(c,false));
                for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j]=='1'&&!isvisited[i][j]){
                    count++;
                    dfs(i,j,r,c,isvisited,grid);

                   
                }
            }
        }
        return count;
        
        
    }
};
