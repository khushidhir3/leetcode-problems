class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int ans=0;
        for(auto str:sentences){
            int count=0;
            for(auto x:str){
                if(x==' ')
                count++;
            }
            ans=max(ans,count+1);
        }
        return ans;
    }
};
