class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int fin = 0;

        for (int i = 0; i < nums.size(); i++) {
            int count = 0;
            int sum = 0;
            int b = nums[i];
            for (int j = 1; j * j <= b; j++) {
                if (b % j == 0) {
                    if (j * j == b) {
                        count++;
                        sum += j;
                    } else {
                        count += 2;
                        sum += j + (b / j);
                    }
                }
            }
            if (count == 4) {
                fin += sum;
            }
        }
        return fin;
    }
};
