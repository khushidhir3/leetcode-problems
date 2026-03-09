class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        unordered_map<char,int>mp;
        for(int i=0;i<order.size();i++){
            mp[order[i]]=i;
        }
        for(int i=1;i<words.size();i++){
            string a=words[i-1];
            string b=words[i];
            for(int j=0;j<a.size();j++){
                if(j==b.size()){
                    return false;
                }
                char ac=a[j];
                char bc=b[j];
                if(mp[ac]<mp[bc])break;
                if(mp[ac]>mp[bc])return false;
            }
        }
        return true;
    }
};
