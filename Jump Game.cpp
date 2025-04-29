class Solution {
public:
    bool canJump(vector<int>& nums) {
        int a=0;
        for(int i=0;i<nums.size();i++){
            if(a<i){
                return false;
            }
            a=max(a,i+nums[i]);
        }
        return true;
    }
};
