class Solution {
public:
    int maximumSum(vector<int>& nums) {
        unordered_map<int,int>sum;
        int maxsum=-1;
        for(int num:nums){
            int digits=0;
            int temp=num;
            while(temp>0){
                digits+=temp%10;
                temp/=10;
            }
            if(sum.find(digits)!=sum.end()){
                maxsum=max(maxsum,num+sum[digits]);
            }
            sum[digits]=max(sum[digits],num);
        }
        return maxsum;
    }
};
