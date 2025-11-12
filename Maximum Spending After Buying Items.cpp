class Solution {
public:
    long long maxSpending(vector<vector<int>>& values) {
      priority_queue<int,vector<int>,greater<int>>pq;
      long long d=1;
      long long sum=0;
      for(int i=0;i<values.size();i++){
        for(int j=0;j<values[i].size();j++){
             pq.push(values[i][j]);
        }
      }
      while(!pq.empty()){
          long long a=pq.top();
          pq.pop();
          long long b =a*d;
        sum+=b;
          d++;
      }
      
        return sum;

      
    }
};
