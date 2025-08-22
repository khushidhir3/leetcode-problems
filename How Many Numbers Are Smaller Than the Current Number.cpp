class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>a;
       
        int count[101]={0,0,0};
        int n=nums.size();
        for(int i=0;i<n;i++){
            count[nums[i]]++;
        }
        for(int i=1;i<101;i++){
            count[i]+=count[i-1];
        }
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                a.push_back(0);
            }
            else{
                a.push_back(count[nums[i]-1]);
            }
        }
        return a;
    }
    
};
