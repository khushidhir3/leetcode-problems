class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        while(k--){
        int mini=INT_MAX;
        int in=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<mini){
                mini=nums[i];
                in=i;

            }
        }
        nums[in]=mini*multiplier;
        }
        return nums;
    }
};
