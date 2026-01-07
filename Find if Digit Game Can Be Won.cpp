class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sum=0;
        int sum2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<10){
                sum+=nums[i];
            }
            else{
                sum2+=nums[i];
            }
        }
        if(sum==sum2){
            return false;
        }
        return true;
        
    }
};
