class Solution {
public:
    string removeOccurrences(string s, string part) {
        while(true){
        size_t p=s.find(part);
        if(p==string::npos){
            break;
        }
        s=s.substr(0,p)+s.substr(p+part.length());
    }
    return s;
}
};
