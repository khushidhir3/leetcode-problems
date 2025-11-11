class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
       priority_queue<int>pq;
       long long sum=0;
       for(int i:gifts){
        pq.push(i);
       }
       while(k--){
        int m=pq.top();
        pq.pop();
        int r=sqrt(m);
        pq.push(r);
       }
       while(!pq.empty()){
        sum+=pq.top();
        pq.pop();
       }
       return sum;

    }
};
