class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
       unordered_map<int,vector<int>>a;
       vector<vector<int>>r;
       for(int i=0;i<groupSizes.size();i++){
        int size=groupSizes[i];
        a[size].push_back(i);
        if(a[size].size()==size){
            r.push_back(a[size]);
            a[size].clear();
        }
       } 
       return r;
    }
};
