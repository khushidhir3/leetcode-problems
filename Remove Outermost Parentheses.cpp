class Solution {
public:
    string removeOuterParentheses(string s) {
        string a;
        int b=0;
        for(char c:s){
            if(c=='('){
                if(b>0){
                    a+=c;
                }
                b++;

            }else if(c==')'){
                b--;
                if(b>0){
                    a+=c;
                }
            }
        }
        return a;
    }
};
