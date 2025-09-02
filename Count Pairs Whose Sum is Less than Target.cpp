class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int i=0,j=1,count=0;
        while(j!=nums.size()&&i!=nums.size()){
            if((nums[i]+nums[j])<target){
                count++;
            }
            if(j==nums.size()-1){
                j=i+1;
                i++;
            }
            j++;
        }
        return count;
    }
};
