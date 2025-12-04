class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        set<char>st(allowed.begin(),allowed.end());
        int balle =0;
        
        for(string s:words){
            bool n=false;
            for(char c:s){
                if(!st.count(c)){
                    n=true;
                    break;
                }
            }
            if(n==false){
               balle+=1;
            }
            

        
        }
        return balle;
    }
};
