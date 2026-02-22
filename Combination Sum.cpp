class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int>current;
        vector<vector<int>>res;
        backtrack(nums,0,target,current,res);
        return res;
    }
    void backtrack(vector<int>&nums,int index,int remaining,vector<int> &current,vector<vector<int>>&res){
        if(remaining==0){
            res.push_back(current);
            return;
        }
        if(remaining<0){
            return;
        }
        for(int i=index;i<nums.size();i++){
            current.push_back(nums[i]);
            backtrack(nums,i,remaining-nums[i],current,res);
            current.pop_back();
        }
    }
};
