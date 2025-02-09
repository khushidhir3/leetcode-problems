class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        unordered_map<long long,long long>map;
        long long total=0,good=0;
        for(int i=0;i<nums.size();i++){
            long long transformed=i-nums[i];
            good+=map[transformed];
            map[transformed]++;

    }
    long long n=nums.size();
    total=(n*(n-1))/2;
    return total-good;
    }
};
