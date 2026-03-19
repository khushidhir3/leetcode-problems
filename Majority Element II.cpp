class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       int c1=0;
       int c2=0;
       int co1=0;
       int co2=0;
       for(int i=0;i<nums.size();i++){
        if(nums[i]==c1){
            co1++;
        }
        else if(nums[i]==c2){
            co2++;
        }
        else if(co1==0){
            c1=nums[i];
            co1=1;
        }
        else if(co2==0){
            c2=nums[i];
            co2=1;
        }
      
        else{
            co1--;
            co2--;
        }
       }
       co1=0;
       co2=0;
       for(int i=0;i<nums.size();i++){
        if(nums[i]==c1){
            co1++;
        }
        else if(nums[i]==c2){
            co2++;
        }
       }
       vector<int>a;
       if(co1>nums.size()/3)a.push_back(c1);
       if(co2>nums.size()/3)a.push_back(c2);
       return a;

    }
};
