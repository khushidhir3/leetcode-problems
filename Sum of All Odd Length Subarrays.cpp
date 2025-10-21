class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
      int sum=0;
      for(int i=0;i<arr.size();i++){
        int length=1;
        int curr=0;
        for(int j=i;j<arr.size();j++){
            curr+=arr[j];
            if(length%2==1)sum+=curr;   
            length++;
                 }
      } 
      return sum; 
    }
};
