class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int>a;
        for(int i=0;i<nums.size();i+=2){
            int f=nums[i];
            int v=nums[i+1];
            a.insert(a.end(),f,v);
        }
        return a;
    }
};
