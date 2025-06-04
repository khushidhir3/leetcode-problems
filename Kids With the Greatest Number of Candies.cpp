class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int a=candies[0];
        for(int i=0;i<candies.size();i++){
            if(candies[i]>a){
                a=candies[i];
            }
        }
        vector<bool>b;
        for(int i=0;i<candies.size();i++){
            if(candies[i]+extraCandies>=a){
                b.push_back(true);
            }
            else{
            b.push_back(false);
            }
        }
        return b;
    }
};
