class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>s={{}};
        for(int num:nums){
            int n=s.size();
        for(int i=0;i<n;i++){

            s.push_back(s[i]);
            s.back().push_back(num);
        }
        }
        return s;
    }
};
