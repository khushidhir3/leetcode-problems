class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
       
        unordered_set<int>st;
       
        for(int i=0;i<nums.size();i++){
           st.insert(nums[i]);
           int rev=0;
           while(nums[i]>0){
            int b=nums[i]%10;
            rev=rev*10+b;
            nums[i]/=10;
           }
          
           st.insert(rev);
        }


        return st.size();

        
    }
};
