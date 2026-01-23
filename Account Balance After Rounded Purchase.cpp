class Solution {
public:
    int accountBalanceAfterPurchase(int purchaseAmount) {
        int c=purchaseAmount;
        int yay=((c+5)/10)*10;
        return 100-yay;
    }
};
