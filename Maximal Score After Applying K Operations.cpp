class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int> pq;
        long long sum = 0;
        for (int i : nums) {
             pq.push(i);
         }
        while (k--) {
            int m = pq.top();
            pq.pop();
            int r = (m + 2) / 3;
            pq.push(r);
            sum += m;
        }
        return sum;
    }
};
