class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
      priority_queue<int,vector<int>,greater<int>>pq;
      for(int i:nums)pq.push(i);
      vector<int>a;
    while(!pq.empty()){
    a.push_back(pq.top());
        pq.pop();
      }
      return a;
    }
};
