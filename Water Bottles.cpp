class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans=numBottles;
        while(numBottles>=numExchange){
            ans+=numBottles/numExchange;
            int temp=numBottles;
            numBottles/=numExchange;
            numBottles+=temp%numExchange;
        }
     return  ans;
        
    }
        
    
};
