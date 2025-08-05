class Solution {
public:
    int reverseDegree(string s) {
        int a,sum=0;
        for(int i=0;i<s.size();i++){
            a=(i+1)*(123-s[i]);
            sum+=a;
        }
        return sum;
    }
};
