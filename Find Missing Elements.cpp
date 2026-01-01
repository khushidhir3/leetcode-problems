class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<int>v;
        for(int i=nums[0];i<nums[n-1];i++){
            if(find(nums.begin(),nums.end(),i)==nums.end()){
                v.push_back(i);
            }
        }
        return v;
    }
};
