class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        int n=nums.size();
        string res="";
        for(int i=0;i<n;i++){
            res+=(nums[i][i]=='0')?'1':'0';
        }
        return res;
    }
};
