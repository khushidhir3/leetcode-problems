class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char,char>a;
        char ch='a';
        for(char c:key)
        if(c!=' '&&!a.count(c))
        a[c]=ch++;
        string s="";
        for(char c:message)
        s+=(c==' '?' ':a[c]);
        return s;
    }
};
