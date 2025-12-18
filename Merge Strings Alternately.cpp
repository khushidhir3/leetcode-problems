class Solution {
public:
    string mergeAlternately(string word1, string word2) {
       string finali="";
       int l=max(word1.length(),word2.length());
       for(int i=0;i<l;i++){
        if(i<word1.length()){
         finali+=word1[i];
        }
        if(i<word2.length()){
         finali+=word2[i];
        }
       }
       
       
       return finali;
     
    }
};
