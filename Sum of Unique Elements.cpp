class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int cnt[101]={};
        int sum=0;
        for(auto n:nums){
           ++cnt[n];
        }
        for(auto i=1;i<=100;i++){
            if(cnt[i]==1){
                sum+=i;
            }
        }
       return sum; 
    }
};
