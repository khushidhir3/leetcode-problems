class Solution {
public:
    string clearDigits(string s) {
        int j=0;
        for(int i=0;i<s.size();i++){
            if(isdigit(s[i])){
                if(j>0 &&isdigit(s[j-1]))j--;
                if(j>0)
                    j--;
                }else{
                    s[j++]=s[i];
                }

            }
        return s.substr(0,j);
    }   
};
