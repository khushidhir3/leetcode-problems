class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int>r;
        for(auto&a:queries){
            int cnt=0,rr=a[2]*a[2];
            for(auto &b:points)
            cnt+=(a[0]-b[0])*(a[0]-b[0])+(a[1]-b[1])*(a[1]-b[1])<=rr;
            r.push_back(cnt);
        }
        return r;
    }
};
