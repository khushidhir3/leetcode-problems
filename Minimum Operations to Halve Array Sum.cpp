class Solution {
public:
    int halveArray(vector<int>& nums) {
        priority_queue<double>pq;
        long long sum=0;
        int o=0;
        for(int i:nums){
            pq.push(i);
        }
       for(int i=0;i<nums.size();i++){
        sum+=nums[i];
       }
       double temp=sum;
       while(temp>sum/2.0){
        double a=pq.top();
        pq.pop();
        double b=a/2.0;
        pq.push(b);
        temp-=b;
        o++;
        
       }
       return o;

    }
};
