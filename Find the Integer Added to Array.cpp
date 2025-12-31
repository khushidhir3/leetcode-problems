class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        int sum=0;
        for(int i=0;i<nums1.size();i++){
            sum+=nums1[i];
        }
        int sum1=0;
        for(int j=0;j<nums2.size();j++){
            sum1+=nums2[j];
        }
        int b=nums1.size();
        int diff=sum1-sum;
        int k=diff/b;
        return k;
    }
};
