class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
       
        int m=score.size();
        int n=score[0].size();
        for(int i=0;i<m;i++){
            int maxi=INT_MIN,maxirow=-1;
            for(int j=i;j<m;j++){
                if(score[j][k]>maxi){
                    maxi=score[j][k];
                    maxirow=j;
                }
            }
            for(int j=0;j<n;j++){
                swap(score[i][j],score[maxirow][j]);
            }
        }
        return score;

    }
};
