class Solution {
public:
  bool yay(vector<int>& candies, long long k,int x) {
          long long count = 0;
          for(int i=0;i<candies.size();i++){
            count+=candies[i]/x;
            if(count>=k)return true;
          }
          return count>=k;
        }
    int maximumCandies(vector<int>& candies, long long k) {
      
        int low=1,high=*max_element(candies.begin(),candies.end());
        int result=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(mid==0)break;
            if(yay(candies,k,mid)){
                result=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return result;
    }
};
