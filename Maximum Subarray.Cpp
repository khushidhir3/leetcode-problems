class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum= INT_MIN,sum=0;
        for(int a:nums){
            sum=max(a,sum+a);
            max_sum=max(max_sum,sum);
        }
        return max_sum;
    }
};
