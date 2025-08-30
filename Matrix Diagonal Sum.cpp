class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
       int a=mat.size();
       int sum=0;
       for(int i=0;i<a;i++){
        sum+=mat[i][i];
        sum+=mat[a-i-1][i];
        if(a%2==1&&i==a/2){
            sum-=mat[i][i];
        }
       } 
       return sum;
    }
};
