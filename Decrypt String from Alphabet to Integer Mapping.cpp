class Solution {
public:
    string freqAlphabets(string s) {
        string hadipa="";
        for(int i=0;i<s.length();i++){
        if(i+2<s.length() && s[i+2]=='#'){
           string shava=s.substr(i,2);
           int balle=stoi(shava);
           hadipa+=(balle+'a'-1);
           i+=2;
        }
     else{
       int balle=s[i]-'0';
       hadipa+=balle+'a'-1;
     }
        }
        return hadipa;
    }
};
