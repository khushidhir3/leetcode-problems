class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        int sum=0;
        priority_queue<int>pq;
        for(int i:piles){
            pq.push(i);
        }
        while(k--){
            int m=pq.top();
            pq.pop();
            int r=m-m/2;
            pq.push(r);
        }
        while(!pq.empty()){
            sum+=pq.top();
            pq.pop();
        }
        return sum;

    }
};
