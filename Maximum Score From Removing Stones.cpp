class Solution {
public:
    int maximumScore(int a, int b, int c) {
        priority_queue<int>pq;
        int score=0;
        pq.push(a);
        pq.push(b);
        pq.push(c);
        while(pq.size()>1){
            int a=pq.top();
            pq.pop();
            a--;
            int b=pq.top();
            pq.pop();
            b--;
            if(b!=0) pq.push(b);
            if(a!=0)   pq.push(a);

            score++;

        }
        return score;
    }
};


