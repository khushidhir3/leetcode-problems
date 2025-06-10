class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
      vector<string> a= {".-","-...","-.-.","-..",".","..-.","--.","....","..",
                            ".---","-.-",".-..","--","-.","---",".--.","--.-",".-.",
                            "...","-","..-","...-",".--","-..-","-.--","--.."};
       unordered_set<string> b;
       for(string word:words){
        string c="";
        for(char h:word)
            c+=a[h-'a'];
            b.insert(c);
        }
         return b.size();
       }
};
