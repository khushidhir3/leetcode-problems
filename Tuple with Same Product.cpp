class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
      vector<int>products;
      int n=nums.size();
      int result=0;
      for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            products.push_back(nums[i]*nums[j]);

        }
      } 
      sort(products.begin(),products.end());
      for(int i=0;i<products.size();){
        int count=1;
        while(i+1<products.size()&&products[i]==products[i+1]){
            count++;
            i++;
        }
        if(count>1){
            result += (count*(count-1)/2)*8;
        }
        i++;
    }
    return result;
      
    }
};
