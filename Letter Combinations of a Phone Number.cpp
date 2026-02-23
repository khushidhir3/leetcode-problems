class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if(digits.empty())return {};
        unordered_map<char,string>mp={
            {'2',"abc"},{'3',"def"},{'4',"ghi"},{'5',"jkl"},{'6',"mno"},{'7',"pqrs"},{'8',"tuv"},{'9',"wxyz"}
        };
        vector<string>a;
        string res="";
        backtrack(digits,0,res,a,mp);
        return a;

        
    }
    void backtrack(string &digits,int index,string &res,vector<string>&a,unordered_map<char,string>mp){
        if(index==digits.size()){
            a.push_back(res);
        }
        string b=mp[digits[index]];
        for(char c:b){
            res.push_back(c);
            backtrack(digits,index+1,res,a,mp);
            res.pop_back();
        }
    }
    
};
