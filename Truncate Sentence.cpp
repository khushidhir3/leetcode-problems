class Solution {
public:
    string truncateSentence(string s, int k) {
        string a="";
        int wcount=0;
        for(int i=0;i<s.length();i++){
            if(s[i]!=' '){
                a+=s[i];
            }
            else{
                wcount++;
                if(wcount==k){
                  break;
                }
                a+=' ';
            }
        }
        return a;
    }
};
