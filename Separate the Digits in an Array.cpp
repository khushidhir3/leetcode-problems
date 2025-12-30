class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>yay;
        for(int i=nums.size()-1;i>=0;i--){
            while(nums[i]>0){
            int b=nums[i]%10;
            yay.push_back(b);
            nums[i]=nums[i]/10;
            }
        }
        reverse(yay.begin(),yay.end());
        return yay;
    }
};
