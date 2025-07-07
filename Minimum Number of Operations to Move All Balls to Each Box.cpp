class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n=boxes.length();
        vector<int>a(n,0);
        for(int i=0;i<n;i++){
            if(boxes[i]=='1'){
                for(int j=0;j<n;j++){
                    a[j]+=abs(j-i);
                }
            }
        }
        return a;
    }
};
