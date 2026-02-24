class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int a=0;
        for(int i=0;i<=nums.size();i++){
            a^=i;
        }
        for(int n:nums){
            a^=n;
        }
        return a;
    }
};
