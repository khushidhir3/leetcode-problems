class Solution {
public:
   
        int a=0;
        int count=0;
        void dfs(vector<int>& nums, int i,int b){
            if(i==nums.size()){
            if(b==a)
                count++;
                return;
            }
            
            dfs(nums,i+1,b|nums[i]);
            dfs(nums,i+1,b);
        }
         int countMaxOrSubsets(vector<int>& nums) {
            for(int j:nums)
            a|=j;
            dfs(nums,0,0);
            return count;
    }
};
