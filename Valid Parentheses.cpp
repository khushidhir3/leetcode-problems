class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(char c:s){
            if(c=='('||c=='{'||c=='['){
                st.push(c);
            }
            else{
                
                    if(st.empty())return false;
                    char t=st.top();
                    if((c==')'&&t!='(')||(c=='}'&&t!='{')||(c==']'&&t!='[')){
                        return false;
                    }
                    st.pop();
                }
            }
        return st.empty();
    }
};
