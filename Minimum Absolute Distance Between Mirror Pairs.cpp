class Solution {
public:

    int rev(int num){
        int ans=0;
        while(num>0){
            int digit=num%10;
            ans=ans*10+digit;
            num/=10;
        }
            return ans;
    }

    int minMirrorPairDistance(vector<int>& nums) {
        unordered_map<int,int>mp;
        int b=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(mp.find(nums[i])!=mp.end()){
               b=min(b,i-mp[nums[i]]); 
            }
            mp[rev(nums[i])]=i;
            
        }
        if(b==INT_MAX){
            return -1;
        }
        else{
            return b;
        }
    }
};
