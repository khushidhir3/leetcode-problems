class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
       int n=nums.size()-2;
       int count[101]={0};
       vector<int>a;
       for(int num:nums){
        count[num]++;
        if(count[num]==2){
            a.push_back(num);
        }
       }
       return a;
    }
};
