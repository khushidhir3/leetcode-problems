class Solution {
public:
    int numTilePossibilities(string tiles) {
        unordered_set<string>a;
        vector<int>v(26,0);
        for(char c:tiles) v[c-'A']++;
        backtrack(v,"",a);
        return a.size();
    }
    private:
    void backtrack(vector<int>& v,string b,unordered_set<string>& a){
    if(!b.empty()) a.insert(b);
    for(int i=0;i<26;i++){
        if(v[i]>0){
            v[i]--;
            backtrack(v,b+(char)(i+'A'),a);
            v[i]++;
        }
        }
    }
};
