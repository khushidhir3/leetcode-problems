class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        for(int i=0;i<grid.size();i++){
            sort(grid[i].begin(),grid[i].end());
        }
        int sum=0;
        for(int j=0;j<grid[0].size();j++){
            int maxe=0;
            for(int i=0;i<grid.size();i++){
              if(grid[i][j]>maxe){
                maxe=grid[i][j];
              }

            }
            sum+=maxe;
        }
        return sum;
    }
};
