class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int a=nums[0];
        int k=0;
        for(int i=1;i<=a;i++){
            if(nums[0]%i==0&&nums[n-1]%i==0){
                k=max(k,i);
            }
        }
        return k;
    }
};
