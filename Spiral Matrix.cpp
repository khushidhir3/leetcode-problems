class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>a;
        int top=0;
        int bottom=matrix.size()-1;
        int left=0;
        int right=matrix[0].size()-1;
        while(top<=bottom&&left<=right){
            for(int i=left;i<=right;i++)
                a.push_back(matrix[top][i]);
                top++;
            
            for(int j=top;j<=bottom;j++)
                a.push_back(matrix[j][right]);
                right--;
            
            if(top<=bottom){
                for(int i=right;i>=left;i--)
                    a.push_back(matrix[bottom][i]);
                    bottom--;
                }
                if(left<=right){
                    for(int j=bottom;j>=top;j--)
                        a.push_back(matrix[j][left]);
                        left++;
                    
                }
            
         
        }
           return a;
    }
};
