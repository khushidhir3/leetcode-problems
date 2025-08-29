class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int a=0;
        int b=1;
        vector<int>res(nums.size(),0);
        for(int n:nums){
            if(n>0){
                res[a]=n;
                a+=2;

            }
            else{
                res[b]=n;
                b+=2;
            }
        }
        return res;
    }
};
