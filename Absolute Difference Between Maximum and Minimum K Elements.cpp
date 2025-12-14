class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        int a=0;
        int b=0;
        int c=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(i<k){
              a+=nums[i];
            }
        }
        sort(nums.begin(),nums.end(),greater<int>());
        for(int i=0;i<nums.size();i++){
            if(i<k){
              b+=nums[i];
            }
        }
        c=abs(a-b);
        return c;

    }
};
