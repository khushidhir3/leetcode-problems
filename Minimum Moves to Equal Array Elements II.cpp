class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int m=nums[n/2];
        long long a=0;
        for(int c:nums){
            a+=abs(c-m);
    }
    return a;
        
    }
};
