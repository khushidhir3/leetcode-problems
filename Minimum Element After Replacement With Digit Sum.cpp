class Solution {
public:
    int minElement(vector<int>& nums) {
        int ans=INT_MAX , n=nums.size();
        for(int i=0;i<n;i++){
            int k=nums[i],c=0;
            while(k>0){
                c+=k%10;
                k/=10;
            }
            ans=min(ans,c);
        }
        return ans;
    }
};
