class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<int>a(nums.size());
        int b=0;
        for(int i=0;i<nums.size();i++){
            b=max(b,nums[i]);
            a[i]=gcd(nums[i],b);
        }
        sort(a.begin(),a.end());
        int i=0;
        int j=nums.size()-1;
        long long sum=0;
        while(i<j){
          sum+=gcd(a[i],a[j]);
            i++;
            j--;
        }
        return sum;
    }
};
