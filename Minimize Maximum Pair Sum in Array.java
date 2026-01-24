class Solution {
    public int minPairSum(int[] nums) {
       int l=0;
       int r=nums.length-1;
       int yay=0;
       Arrays.sort(nums);
       while(l<r){
         int z=nums[l]+nums[r];
         l++;
         r--;
         yay=Math.max(yay,z);
       }
       return yay;
    }
}
