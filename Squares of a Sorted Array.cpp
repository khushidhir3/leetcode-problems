class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int>a(n);
        int l=0,r=n-1;
        int p=n-1;
        while(l<=r){
            int ls=nums[l]*nums[l];
            int rs=nums[r]*nums[r];
            if(ls>rs){
                a[p--]=ls;
                l++;
            }
            else{
                a[p--]=rs;
                r--;

            }
        }
        return a;
    }
};
