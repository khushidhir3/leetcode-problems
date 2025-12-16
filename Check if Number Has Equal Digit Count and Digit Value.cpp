class Solution {
public:
    bool digitCount(string num) {
         unordered_map<int,int>a;
         for(char c:num){
            a[c-'0']++;
         }
         for(int i=0;i<num.length();i++){
             if(a[i]!=num[i]-'0'){
                return false;
             }
         }
         return true;
    }
};
