class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int b=0;
       for(int a:nums){
        b^=a;
       } 
       return b;
    }
};
