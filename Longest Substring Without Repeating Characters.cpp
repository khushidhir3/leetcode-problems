class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       unordered_set<char>a;
       int l=0,r=0, maxlen=0;
       while(r<s.length()){
        if(a.find(s[r])== a.end()){
            a.insert(s[r]);
            maxlen=max(maxlen,r-l+1);
            r++;
        }
        else{
            a.erase(s[l]);
            l++;
        }
       } 
       return maxlen;
    }
};
