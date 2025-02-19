class Solution {
public:
    string getHappyString(int n, int k) {
        vector<string>res;
        backtrack(n,k,"",res);
        if(k<=res.size()){
            return res[k-1];
        }
        return "";

    }
    void backtrack(int n,int k,string current,vector<string>& res){
        if(current.length()==n) {
            result.push_back(current);
            return;
        }
    for(char c:{'a','b','c'}) {
            if(current.empty()||current.back()!=c) {
                backtrack(n,k,current+c,res);
                if(res.size()>=k) {
                    return;
                }
            }
        }
    }
};
