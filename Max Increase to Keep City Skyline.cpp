class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<int>row(n,0),col(n,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int val=grid[i][j];
                if(val>row[i])row[i]=val;
                if(val>col[j])col[j]=val;

            }
        }
        int sum=0;
        for(int i=0;i<n;i++){
            int rval=row[i];
            for(int j=0;j<n;j++){
                sum+=min(rval,col[j])-grid[i][j];
            }
             
            

        }
        return sum;
    }
};
