class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<long long,vector<long long>,greater<long long>>p;
        for(int num:nums){
            p.push(num);
        }
        int operations=0;
        while(p.top()<k){
            long long a=p.top();
            p.pop();
            long long b=p.top();
            p.pop();
           long long newel = min(a, b) * 2 + max(a, b);
            p.push(newel);
            operations++;
        }
        return operations;
    }
};
