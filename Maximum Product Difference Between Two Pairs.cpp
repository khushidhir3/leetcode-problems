class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
      int n=nums.size();
      sort(nums.begin(),nums.end());
      int maxp=nums[n-2]*nums[n-1];
      int minp=nums[0]*nums[1];
      int maxpro=maxp-minp;
      return maxpro;  
    }
};
