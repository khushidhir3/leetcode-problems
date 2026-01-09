class Solution {
public:
    int distinctPrimeFactors(vector<int>& nums) {
        unordered_set<int> p;
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 2; j <= nums[i]; j++) {
                while (nums[i] % j == 0) {
                    p.insert(j);
                    nums[i] /= j;
                }
            }
        }
        return p.size();
    }
};
