class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       vector<int>a;
       for(int i=0;i<nums.size();i+=2){
        a.push_back(nums[i+1]);
        a.push_back(nums[i]);
       } 
       return a;
    }
};
