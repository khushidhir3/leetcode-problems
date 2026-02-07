class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
            int a=INT_MAX;
            int b=0;
            for(int c:prices){
                a=min(a,c);
                b=max(b,c-a);
            }
        
        return b;
    }
};
