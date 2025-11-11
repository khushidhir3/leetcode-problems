class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
       priority_queue<int>pq;
       for(int i:nums){
        pq.push(i);
       }
       for(int j=1;j<k;j++){
         pq.pop();
       }
       return pq.top();
        
    }
};
