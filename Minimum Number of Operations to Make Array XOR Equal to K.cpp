class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int a=0;
        for(int num:nums){
            a^=num;
        }
        int diff=a^k;
        return __builtin_popcount(diff);
    }
};
