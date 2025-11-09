class Solution {
public:
    int maximumProduct(vector<int>& nums, int k) {
        const int MOD=1000000007;
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int x:nums)pq.push(x);
        while(k--){
            int x=pq.top();
            pq.pop();
            pq.push(x+1);

        }
    
    long long p=1;
    while(!pq.empty()){
        p=(p*pq.top())%MOD;
        pq.pop();
    }
    return (int)p;
}

};
