class Solution {
public:
    vector<int> bestTower(vector<vector<int>>& towers, vector<int>& center, int radius) {
        int r=center[0];
        int f=center[1];
        int q=-1;
        vector<int>ans={INT_MAX,INT_MAX};
        for(auto t:towers){
            int k=t[0];
            int j=t[1];
            int h=t[2];
            int m=abs(k-r)+abs(j-f);
            if(m<=radius){
              if(h>q){
                q=h;
                ans={k,j};
              } 
              else if(h==q){
                ans=min(ans,{t[0],t[1]});
              }
            }


        }
        if(ans[0]==INT_MAX){
            return {-1,-1};
        }
        else{
            return ans;
        }
    }
};
