class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_set<int>s;
        for(int i:nums){
            if(i<0){
            s.insert(i);
            }
        }
        int kuchbhi=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0&&s.count(-nums[i])){
               kuchbhi=max(nums[i],kuchbhi);
            }
        }
        return kuchbhi;

    }
};
