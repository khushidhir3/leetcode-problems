class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int>z(nums.size());
        for(int i=0;i<nums.size();i++){
           for(int j=0;j<nums[i];j++){
            if((j|(j+1))==nums[i]){
                z[i]=j;
                break;
            }
            else{
                z[i]=-1;
            }
           }
        }
        return z;
    }
};
