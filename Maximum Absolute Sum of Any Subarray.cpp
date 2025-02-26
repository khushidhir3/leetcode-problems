class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int maxsum=0,minsum=0,currentmax=0,currentmin=0;
        for(int num:nums){
            currentmax=max(currentmax+num,num);
            maxsum=max(maxsum,currentmax);
            currentmin=min(currentmin+num,num);
            minsum=min(minsum,currentmin);
        }
        return max(abs(maxsum),abs(minsum));
    }
};
