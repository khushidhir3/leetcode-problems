class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
      int n=nums.size();
      vector<int> a;
      a.reserve(n);
      for(int i=0;i<n;i++){
        a.insert(a.begin()+index[i],nums[i]);
        
      }  
      return a;
    }
};
