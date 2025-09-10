class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        int sum=INT_MAX;
        sort(nums.begin(),nums.end());
        int lo=0,hi=nums.size()-1;
        while(lo<hi){
            sum=min(nums[hi--]+nums[lo++],sum);
        }
        return sum/2.0;
    }
};
