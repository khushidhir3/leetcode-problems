class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int a=0;
        int b=0;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
              a+=nums[i];  
            }
            else{
                b+=nums[i];
            }
        }
        int c=a-b;
        return c;
    }
};
