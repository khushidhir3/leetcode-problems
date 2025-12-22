class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int>k;
        unordered_set<int>y;
        for(int i:friends){
            y.insert(i);
        }
        for(int i=0;i<order.size();i++){
            if(y.count(order[i])){
                k.push_back(order[i]);
            }
        }
        return k;
    }
};
