class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans="";
        while(columnNumber>0){
            
            int remainder=(columnNumber-1)%26;
            ans+=remainder+'A';

            columnNumber=(columnNumber-1)/26;
            
            
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
