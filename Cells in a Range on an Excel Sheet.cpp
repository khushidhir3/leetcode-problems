class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string>k;
        
        for(char c=s[0];c<=s[3];c++){

            for(char r=s[1];r<=s[4];r++){
                string ans="";
                ans+=c;
                ans+=r;
                k.push_back(ans);
            }
        }
        return k;

    }
};
