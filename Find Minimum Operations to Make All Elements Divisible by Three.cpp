class Solution {
public:
    int minimumOperations(vector<int>& nums) {
       int count=0;
       for(int i=0;i<nums.size();i++){
        while(nums[i]%3!=0){
            if(nums[i]%3==1){
                count++;
                nums[i]--;
            }
            else if(nums[i]%3==2){
                count++;
                nums[i]++;
        }
        }
       }
       return count; 
    }
};
