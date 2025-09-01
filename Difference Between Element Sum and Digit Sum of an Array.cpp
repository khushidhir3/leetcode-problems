class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int elementsum=0;
        int digitsum=0;
        for(int i:nums){
            elementsum+=i;
            int x=i;
            while(x>0){
                digitsum+=(x%10);
                x/=10;
            }
        }
        return abs(elementsum-digitsum);
    }
};
