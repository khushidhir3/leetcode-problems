class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int a=0;
        int m=accounts.size();
        int n=accounts[0].size();
        for(int i=0;i<m;i++){
          int b=0;
          for(int j=0;j<n;j++){
            b+=accounts[i][j];
          }
          if(b>a){
            a=b;
          }
        }
        return a;
    }
};
